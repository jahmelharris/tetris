#include "SDLView.h"
#include "IBoard.h"
#include <iostream>
CSDLView::CSDLView() : HEIGHT(630),
			WIDTH(800)
{
}

CSDLView::~CSDLView()
{
	std::cout<<"~CSDLView()\n";
	//SDL_FreeSurface(m_background);
	SDL_Quit();
}

void CSDLView::checkEvents()
{
	SDL_PollEvent(&m_event);
	if(m_event.type == SDL_QUIT)
	{
		m_eventsClient->quit();
	}
}

void CSDLView::Draw(/*bool** board*/IBoard* board)
{
	int const blockSize = 30; //png block size. TODO: get from image
	bool static change = true;
	if(change){
	change = false;
	int height, width = 0;
	board->getSize(&width,&height);
	SDL_Surface* tempSurface = SDL_CreateRGBSurface(SDL_HWSURFACE,blockSize*(width+2),HEIGHT,32,0,0,0,0); //Copy boardArray onto this surface
	SDL_Surface* image = IMG_Load("res/blueSquare.png");


	bool** boardArray = board->getBoard();
	std::cout<<"width "<<width<<std::endl;
	std::cout<<"height"<<height<<std::endl;
	int heightStep = HEIGHT/height;
	int widthStep = WIDTH/width;
	

	SDL_Rect rect;
	rect.x = 0;
	rect.y = 0;
	
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
		{
			rect.x = j*blockSize;
			rect.y = i*heightStep;
			if(boardArray[i][j])
			{
				//put block on background
				SDL_BlitSurface(image,NULL,tempSurface,&rect);
				std::cout<<"blitting at "<<rect.x<<" "<<rect.y<<std::endl;
	//		rect.y = 0;
	//		rect.x = j;
	//	SDL_BlitSurface(image,NULL,tempSurface,&rect);
	//			std::cout<<"blitting at "<<rect.x<<" "<<rect.y<<std::endl;

				}
		}
	}

	//SDL_Rect rect;
	//rect.x = 40;
	//rect.y = 80;
	//SDL_Surface* pic = IMG_Load("res/blueSquare.png");
	SDL_Rect pos;
	pos.x = 0;
	pos.y = 0;
	SDL_BlitSurface(tempSurface,NULL,m_background,&pos);
	SDL_FreeSurface(tempSurface);
	SDL_FreeSurface(image);
	//SDL_FreeSurface(pic);
	}
}

void CSDLView::Render()
{
	SDL_Flip(m_background);
}

bool CSDLView::init(IEvent* eventsClient)
{
	m_eventsClient = eventsClient;
	if(SDL_Init(/*SDL_INIT_EVERYTHING*/SDL_INIT_VIDEO)==-1)
                return false;
        if((m_background = SDL_SetVideoMode(WIDTH,HEIGHT,32,SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL)
                return false;
	return true;
}
