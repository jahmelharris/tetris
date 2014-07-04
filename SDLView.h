#ifndef SDLVIEW_H
#define SDLVIEW_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "IEvent.h"
#include "IView.h"
class IBoard;
class IEvent;
class CSDLView : public IView{
	public:
		CSDLView();
		~CSDLView();
		bool init(IEvent*);
		void checkEvents();
		void Draw(IBoard*);
		void Render();
	private:
		SDL_Surface* m_background; //Remember, this is freed by SDL_Quit
		SDL_Event m_event;
		//IBoard* m_board;
		const int HEIGHT;
		const int WIDTH;
		IEvent* m_eventsClient;
};


#endif
