#ifndef IGAMEBOARD_H
#define IGAMEBOARD_H

class IBoard;
class IGameBoard{
	public:
		virtual bool moveDown()	= 0;
		virtual bool moveLeft() = 0;
		virtual bool moveRight() = 0;
		virtual void addTetromino(int) = 0;

		virtual void rotateLeft() = 0;
		virtual void rotateRight() = 0;

		virtual IBoard* getBoard() = 0;

};

#endif
