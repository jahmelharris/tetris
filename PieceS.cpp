#include "PieceS.h"

CPieceS::CPieceS() : ITetromino(3,3,1) 
{
	ITetromino::init();
	m_shape[1][1] = m_shape[1][2] = m_shape[2][0] = m_shape[2][1] = true;
}

/*void CPieceS::rotateL()
{
	std::cout<<"rotate left\n";
}

void CPieceS::rotateR()
{
	std::cout<<"rotate right\n";
}
*/
bool** CPieceS::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
