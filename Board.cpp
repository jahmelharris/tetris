#include "Board.h"
#include "string.h"
#include "ITetromino.h"

CBoard::CBoard(int width, int height):m_xpos(1),
				      m_ypos(1),
				      m_Tetromino(NULL)
{
	m_width = width;
	m_height = height;
	++width;
	++width;
	++height;
	
	m_board = CreateBoard(m_board, width, height);
	m_tempBoard = CreateBoard(m_tempBoard, width, height);
	
//	m_tempBoard = new bool*[height];	

}

bool** CBoard::CreateBoard(bool** board, int width, int height)
{
	board = new bool*[height];
	for(int i=0;i<height-1;++i)	//the last line is the boarder, so no need to create that yet
	{
		board[i] = new bool[width];
		memset(board[i],0,width);
		board[i][0] = true;	//left border
		board[i][width-1] = true; //right border
	}
	board[height-1] = new bool[width];	//create bottom border
	memset(board[height-1],1,width);
	return board;
}

CBoard::~CBoard()
{
	for(int i=0;i<m_height+1;++i)
	{
		delete[] m_board[i];	
	}
	delete[] m_board;
	
	for(int i=0;i<m_height+1;++i)
	{
		delete[] m_tempBoard[i];	
	}
	delete[] m_tempBoard;
	if(m_Tetromino)
	{
		delete m_Tetromino;
	}
}

//bool CBoard::addTetromino(ITetromino* tetromino, int x/*=0*/, int y/*=0*/)
bool CBoard::putTetromino(ITetromino* tetromino)//, int x/*=0*/, int y/*=0*/)
{
	
	if(m_Tetromino == NULL)
	{
		m_Tetromino = tetromino;
	}

	m_xpos = 1;
	m_ypos = 0;
	//m_ypos = 0 - m_Tetromino->firstRow();
	return true;
}

void CBoard::getSize(int* x, int* y)
{
	*x = m_width;
	*y = m_height;
}

bool CBoard::moveTetromino(int x, int y)
{
	++x; //skip boarder
	//if(x>=m_width)
	//	x=m_width-1;
	bool validPos = isValidPos(x,y);
	if(validPos)
	{
		//only move to the new position if it is valid
		m_xpos = x;
		m_ypos = y;	
	}
	else
	{
		//put this piece on the board permantly as it hit another piece or the bottom of the board	
		int col = m_Tetromino->lastColumn();
	
		//we dont want to place the piece permantly if we only hit the side
		if((x+col)>=m_width)
		{
			m_xpos=m_width-(col-1);
			return false;
		}
		else if(x<=0)
		{
			x=1;
			return false;
		}
		placePiece(m_board,m_xpos,m_ypos);
		addBorder(m_board, m_height, m_width);
		delete m_Tetromino;
		m_Tetromino = NULL;
	}
	return validPos;
}

void CBoard::placePiece(bool** board, int xpos, int ypos)
{
	int size;
	SHAPE shape = m_Tetromino->getShape(&size);
	int width = m_width;
	int height = m_height;
	int remainingHeight = (height - ypos) < size ? height  - ypos : size; 
	int remainingWidth = ((width+2) - xpos) < size ? width - xpos+2 : size;

	for(int i=0;i<remainingHeight;++i)
	{
		for(int j=0;j<remainingWidth;++j)
		{	
			if(board[i+ypos][j+xpos] || shape[i][j])
				board[i+ypos][j+xpos] = true;
		}
	}

}

void CBoard::addBorder(bool** board, int height, int width)
{
	for(int i=0;i<height;++i)
	{
		
		board[i][0] = true;	//left border
		board[i][width+1] = true; //right border
	}
}



bool** CBoard::getBoard()
{
	if(m_Tetromino != NULL)
	{
		std::cout<<"getting board: m_Tetriomino not NULL\n";
		for(int i=0;i<m_height;++i)
			memcpy(m_tempBoard[i],&m_board[i][1],m_width);
		placePiece(m_tempBoard,m_xpos,m_ypos);
		return m_tempBoard;
	}
	for(int i=0;i<m_height;++i)
		memcpy(m_tempBoard[i],&m_board[i][1],m_width);
	return m_tempBoard;
	
	return m_board;
}

bool CBoard::isValidPos(int x, int y)
{
	int size;
	SHAPE shape = m_Tetromino->getShape(&size);
	int remainingWidth = ((m_width+2) - m_xpos) < size ? m_width - m_xpos+2 : size;
	int remainingHeight = (m_height - m_ypos) < size ? m_height  - m_ypos : size; 
	for(int i=0;i<remainingHeight;++i)
	{
		for(int j=0;j<remainingWidth;++j)
		{	
			if(m_board[i+y][j+x] && shape[i][j])
				return false;
		}
	}
	return true;
}

