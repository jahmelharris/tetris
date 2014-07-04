#include "PieceL.h"

CPieceL::CPieceL() : ITetromino(3,3,0) 
{
	ITetromino::init();
	m_shape[0][1] = m_shape[1][1] = m_shape[2][1] = m_shape[2][2] = true;
}

/*void CPieceL::rotateL()
{
	std::cout<<"rotate left\n";
}*

void CPieceL::rotateR()
{
	std::cout<<"rotate right\n";
}*/

bool** CPieceL::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
