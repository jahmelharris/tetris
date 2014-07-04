#ifndef GAMEBOARD_H
#define GAMEBOARD_H 
#include "IGameBoard.h"

class IBoard;
class CTetrominoFactory;
class ITetromino;
class CGameBoard : public IGameBoard{
	public:
		CGameBoard(IBoard*);
		~CGameBoard();		

		bool moveDown();
		bool moveLeft();
		bool moveRight();
		void addTetromino(int);

		void rotateLeft();
		void rotateRight();

		IBoard* getBoard();

	private:
		int m_pieceID;	
		IBoard* m_board;
		int m_xPos;
		int m_yPos;
		CTetrominoFactory* factory;
		ITetromino* m_tetromino;
};	
#endif
