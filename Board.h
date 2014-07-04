#ifndef BOARD_H
#define BOARD_H
#include "IBoard.h"

class ITetromino;

class CBoard : public IBoard 
{
	public:
		CBoard(int, int);
		~CBoard();
	
		bool putTetromino(ITetromino*);
		bool moveTetromino(int,int);
		bool** getBoard();
		void getSize(int*, int*);
	private:
		bool** m_board;
		bool** m_tempBoard;
		int m_width;
		int m_height;
		int m_xpos;
		int m_ypos;
		ITetromino* m_Tetromino;
		bool isValidPos(int,int);
		bool** CreateBoard(bool**, int, int);
		void placePiece(bool**, int, int);
		void addBorder(bool**, int, int);
};
#endif
