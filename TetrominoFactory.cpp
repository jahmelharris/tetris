#include "TetrominoFactory.h"
#include "PieceI.h"
#include "PieceL.h"
#include "PieceJ.h"
#include "PieceT.h"
#include "PieceZ.h"
#include "PieceS.h"
CTetrominoFactory::CTetrominoFactory()
{
}

CTetrominoFactory::~CTetrominoFactory()
{
}

ITetromino* CTetrominoFactory::GetTetromino(int selection)
{
	ITetromino* t;
	switch(selection)
	{
		case 1:
			t = new CPieceI(); 
		break;
		case 2:
			t = new CPieceL();
		break;
		case 3:
			t = new CPieceJ();
		break;
		case 4:
			t = new CPieceT();
		break;
		case 5:
			t = new CPieceS();
		break;
		case 6:
			t = new CPieceZ();
		break;

		default:
			t = NULL;
	}
	return t;
}
