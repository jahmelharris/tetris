#ifndef PIECEI_H
#define PIECEI_H
#include "ITetromino.h"

class CPieceI : public ITetromino
{
	public:
		CPieceI();
		~CPieceI();
//		void rotateL();
		void rotateR();

		bool** getShape(int*);
	private:
};
#endif
