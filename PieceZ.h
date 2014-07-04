#ifndef PIECEZ_H
#define PIECEZ_H

#include "ITetromino.h"
class CPieceZ : public ITetromino
{
	public:
		CPieceZ();
//		void rotateL();
//		void rotateR();

		bool** getShape(int*);
	private:
};
#endif
