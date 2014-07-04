#include "PieceT.h"

CPieceT::CPieceT() : ITetromino(3,3,1) 
{
	ITetromino::init();
	m_shape[1][0] = m_shape[1][1] = m_shape[1][2] = m_shape[2][1] = true;
}
/*
void CPieceT::rotateL()
{
	std::cout<<"rotate left\n";
}

void CPieceT::rotateR()
{
	std::cout<<"rotate right\n";
}
*/
bool** CPieceT::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
