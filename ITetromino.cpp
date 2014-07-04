#include "ITetromino.h"

ITetromino::~ITetromino()
{
	for(int i=0;i<m_size;++i)
		delete[] m_shape[i];
	delete[] m_shape;

}

void ITetromino::init()
{
	m_shape = new bool*[m_size];
	for(int i=0;i<m_size;++i)
	{
		m_shape[i] = new bool[m_size];
		for(int j=0;j<m_size;++j)
			m_shape[i][j] = 0;
	}
}

void ITetromino::rotateL()
{
	SHAPE shape = new bool*[m_size];

	for(int i=0;i<m_size;++i)
	{
		shape[i] = new bool[m_size];
		for(int j=0;j<m_size;++j)
			shape[i][j] = 0;
	}

	for(int i=0;i<m_size;++i)
	{
		for(int j=0;j<m_size;++j)
		{
			shape[i][j] = m_shape[j][(m_size-1)-i];
		}
	}
	
	for(int i=0;i<m_size;++i)
	{
		delete[] m_shape[i];
		m_shape[i] = shape[i];
	}
	redoTetrominoCalculations();
	delete[] shape;
}

void ITetromino::rotateR()
{
	SHAPE shape = new bool*[m_size];

	for(int i=0;i<m_size;++i)
	{
		shape[i] = new bool[m_size];
		for(int j=0;j<m_size;++j)
			shape[i][j] = 0;
	}

	for(int i=0;i<m_size;++i)
	{
		for(int j=0;j<m_size;++j)
		{
			shape[i][j] = m_shape[(m_size-1)-j][i];
		}
	}
	
	for(int i=0;i<m_size;++i)
	{
		delete[] m_shape[i];
		m_shape[i] = shape[i];
	}
	redoTetrominoCalculations();
	delete[] shape;
}

void ITetromino::redoTetrominoCalculations()
{
	m_rightColumn = calculateLastColumn();
	m_firstRow = calculateFirstRow();
}

int ITetromino::calculateLastColumn()
{
	for(int i=0;i<m_size;++i)
	{
		for(int j=m_size-1;j==0;--j)
		{
			if(m_shape[i][j])
			{
				return j+1;
			}
		}
	}
	return 0;
}

int ITetromino::calculateFirstRow()
{
	for(int i=0;i<m_size;++i)
	{
		for(int j=0;j<m_size;++j)
		{
			if(m_shape[i][j])
				return i;
		}
	}
	return -1;
}

int ITetromino::lastColumn()
{
	return m_rightColumn;
}

int ITetromino::firstRow()
{
	return m_firstRow;
}
