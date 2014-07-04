#ifndef PIECEJ_H
#define PIECEJ_H

#include "ITetromino.h"
class CPieceJ : public ITetromino
{
	public:
		CPieceJ();
//		void rotateL();
//		void rotateR();

		bool** getShape(int*);
	private:
};
#endif
