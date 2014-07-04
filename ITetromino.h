#ifndef ITETROMINO_H
#define ITETROMINO_H

#include <iostream>

typedef bool** SHAPE;
class ITetromino
{
	public:
		ITetromino(int size, int rightColumn, int firstRow): 
						m_size(size),
						m_rightColumn(rightColumn),
						m_firstRow(firstRow)
						{}
		~ITetromino();

		void rotateL();// = 0;
		void rotateR();
		virtual SHAPE getShape(int *) = 0;
		int lastColumn();
		int firstRow();
	protected:
		int m_size;
		int m_rightColumn;	//actual width of shape
		int m_firstRow;
		SHAPE m_shape;
		void redoTetrominoCalculations();
		int calculateFirstRow();	
		int calculateLastColumn();
		void init();
};

#endif
