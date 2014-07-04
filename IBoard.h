#ifndef IBOARD_H
#define IBOARD_H

class ITetromino;
class IBoard{
	public:
		virtual bool putTetromino(ITetromino*) = 0;
		virtual bool moveTetromino(int,int) = 0;
		virtual bool** getBoard() = 0;
		virtual void getSize(int*, int*) = 0;	
};

#endif
