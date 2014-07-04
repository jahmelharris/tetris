#ifndef PIECEL_H
#define PIECEL_H

#include "ITetromino.h"
class CPieceL : public ITetromino
{
	public:
		CPieceL();
	//	~CPieceL();
//		void rotateL();
//		void rotateR();

		bool** getShape(int*);
	private:
		//bool** m_shape;
		//int m_size;

		//void init(int size);
};
#endif
