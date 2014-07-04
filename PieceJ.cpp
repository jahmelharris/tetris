#include "PieceJ.h"

CPieceJ::CPieceJ() : ITetromino(3,2,0) 
{
	ITetromino::init();
	m_shape[0][1] = m_shape[1][1] = m_shape[2][0] = m_shape[2][1] = true;
}
/*
void CPieceJ::rotateL()
{
	std::cout<<"rotate left\n";
}

void CPieceJ::rotateR()
{
	std::cout<<"rotate right\n";
}*/

bool** CPieceJ::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
