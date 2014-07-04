#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <SDL/SDL.h>
#include "IGameEngine.h"
#include "IGameBoard.h"
#include "IView.h"
#include "TetrominoFactory.h"
#include "Game.h"
CGame::CGame(IGameBoard* gameBoard, IGameEngine* engine, IView* view)
	:m_gameBoard(gameBoard),
	m_engine(engine),
	m_view(view),
	m_continue(true)
{
	srand(time(NULL));
	m_view->init(this);
}

CGame::~CGame()
{

}

void CGame::run()
{
	//unsigned int ticks = 0;
	//unsigned int downTicks = 0;
	//bool downPressed = false;
	//CTetrominoFactory factory;
	int pieceID = PIECEI;
	//game loop
	m_gameBoard->addTetromino(pieceID);
	m_gameBoard->moveDown();
	m_gameBoard->moveDown();
	while(m_continue)
	{
		m_view->checkEvents();
		draw();
		m_view->Render();
	}
}

bool CGame::updateBoard()
{
	return true;
}

void CGame::draw()
{
	m_view->Draw(m_gameBoard->getBoard());
}

int CGame::getRandomPiece()
{
	return rand()%(NumberOfPieces-1)+1;
}

void CGame::keyDown()
{
	std::cout<<"key down\n";
}

void CGame::quit()
{
	m_continue = false;
}
