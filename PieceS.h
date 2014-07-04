#ifndef PIECES_H
#define PIECES_H

#include "ITetromino.h"
class CPieceS : public ITetromino
{
	public:
		CPieceS();
//		void rotateL();
//		void rotateR();

		bool** getShape(int*);
	private:
};
#endif
