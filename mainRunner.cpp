#include <iostream>
#include <cassert>
#include <cstring>
#include <gtest/gtest.h>
#include "Board.h"
#include "TetrominoFactory.h"
#include "PieceI.h"
#include "PieceL.h"
#include "PieceJ.h"
#include "PieceT.h"
#include "GameBoard.h"
#include "Game.h"
#include "IEvent.h"
#include "IView.h"
#include "SDLView.h"
//tests
#include "CommonTest.h"
#include "CreatePieceTest.h"
#include "RotatePieceITest.h"
#include "RotatePieceJTest.h"
#include "RotatePieceLTest.h"
#include "RotatePieceTTest.h"
#include "BoardTestCommon.h"
#include "BoardTest.h"
#include "GameBoardTest.h"

using namespace std;

CTetrominoFactory factory;
//CBoard* board;
//void DoTetrominoCreateTests();
//void DoTetrominoRotationTests();

void test(IEvent* e)
{
	e->keyDown();
}

int main(int argc, char **argv)
{
  	testing::InitGoogleTest(&argc, argv);
	
/*	CBoard board(10,20);
	CGameBoard gameBoard(&board);
	CSDLView view;	
	CGame game(&gameBoard, NULL, &view);
	game.run();
	test(&game);	
	return 0;
*/
	return RUN_ALL_TESTS();
}
