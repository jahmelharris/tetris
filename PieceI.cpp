#include "PieceI.h"
CPieceI::CPieceI() : ITetromino(4,2,0)
{
	ITetromino::init();
	m_shape[0][1] = m_shape[1][1] = m_shape[2][1] = m_shape[3][1] = true;
}

/*void CPieceI::rotateL()
{
	
}*/

/*void CPieceI::rotateR()
{
	std::cout<<"rotate right\n";
}*/

bool** CPieceI::getShape(int* size)
{
	*size = m_size;
	return m_shape;
}
