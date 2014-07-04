#include "GameBoard.h"
#include "ITetromino.h"
#include "TetrominoFactory.h"
#include "IBoard.h"
CGameBoard::CGameBoard(IBoard* board):
				m_xPos(4),
				m_yPos(0)
{
	m_board = board;
	factory = new CTetrominoFactory();
}

CGameBoard::~CGameBoard()
{
	delete factory;
}

void CGameBoard::addTetromino(int id)
{
	ITetromino* tetromino = factory->GetTetromino(id);
	m_tetromino = tetromino;
	m_pieceID = id;	
	m_board->putTetromino(tetromino);
	m_xPos = 4;
	m_yPos = 0;
	m_board->moveTetromino(m_xPos, m_yPos);
}

bool CGameBoard::moveDown()
{
	//++m_yPos;
	//bool valid = m_board->moveTetromino(m_xPos,m_yPos);
	//return valid;
	if(m_board->moveTetromino(m_xPos,m_yPos+1))
	{
		++m_yPos;
		return true;
	}
	return false;
}

bool CGameBoard::moveLeft()
{
	//--m_xPos;
	//return m_board->moveTetromino(m_xPos,m_yPos);

	//only change position if its valid
	if(m_board->moveTetromino(m_xPos-1,m_yPos))
	{
		--m_xPos;
		return true;
	}	
	return false;
}

bool CGameBoard::moveRight()
{
//	++m_xPos;
//	return m_board->moveTetromino(m_xPos,m_yPos);	
	if(m_board->moveTetromino(m_xPos+1,m_yPos))
	{
		++m_xPos;
		return true;
	}	
	return false;

}

void CGameBoard::rotateLeft()
{
	if(m_tetromino != NULL)
		m_tetromino->rotateL();
}

void CGameBoard::rotateRight()
{
	if(m_tetromino != NULL)
		m_tetromino->rotateR();
}

IBoard* CGameBoard::getBoard()
{
	return m_board;
}
