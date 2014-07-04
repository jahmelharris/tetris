#ifndef GAME_H
#define GAME_H
#include "IEvent.h"
union SDL_Event;
class IGameBoard;
class IGameEngine;
class IView;
class CGame : public IEvent{
	public:
		CGame(IGameBoard*, IGameEngine*, IView*);
		~CGame();
		void keyDown();
		void quit();
		void run();

	private:
		IGameBoard *m_gameBoard;
		IGameEngine* m_engine;
		IView* m_view;
		bool m_continue;
		int getRandomPiece();
		//bool events(SDL_Event*);
		bool updateBoard();
		void draw();
};

#endif
