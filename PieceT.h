#ifndef PIECET_H
#define PIECET_H

#include "ITetromino.h"
class CPieceT : public ITetromino
{
	public:
		CPieceT();
//		void rotateL();
//		void rotateR();

		bool** getShape(int*);
	private:
};
#endif
