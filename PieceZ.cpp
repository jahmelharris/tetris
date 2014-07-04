#include "PieceZ.h"

CPieceZ::CPieceZ() : ITetromino(3,3,1) 
{
	ITetromino::init();
	m_shape[1][0] = m_shape[1][1] = m_shape[2][1] = m_shape[2][2] = true;
}
/*
void CPieceZ::rotateL()
{
	std::cout<<"rotate left\n";
}

void CPieceZ::rotateR()
{
	std::cout<<"rotate right\n";
}
*/
bool** CPieceZ::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
