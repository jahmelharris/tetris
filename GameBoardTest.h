#include "GameBoardTestCommon.h"
TEST(use_gameboard,given_a_gameboard_adding_a_tetromino_to_the_gameboard_will_add_it_to_the_board)
{
	
	CBoard board(10,20);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(PIECEI);
	bool** b = board.getBoard();
	/*for(int i=0;i<21;++i)
	{
		for(int j=0;j<12;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}*/
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getInitialBoard(PIECEI),b);		
}

TEST(use_gameboard,given_a_gameboard_with_a_piece_added_moving_the_piece_down_will_move_the_piece_down_one_place_on_the_gameboard)
{
	int pieceID = PIECEZ;
	CBoard board(10,20);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	gameBoard.moveDown();
	bool** b = board.getBoard();
	for(int i=0;i<21;++i)
	{
		for(int j=0;j<12;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getFirstMoveDownBoard(pieceID),b);		
}

TEST(use_gameboard,given_an_empty_gameboard_moving_a_piece_down_the_gameboard_height_will_place_the_piece_at_the_bottom_and_return_false)
{
	int height = 20;
	int width = 10;	
	int pieceID = PIECEJ;
	CBoard board(width,height);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	while(gameBoard.moveDown());

	bool** b = board.getBoard();
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getAllMoveDownBoard(pieceID),b);		
}

TEST(use_gameboard,given_a_tetromino_on_the_board_rotating_left_and_moving_it_down_will_rotate_the_piece_left_and_put_it_at_the_bottom_of_the_board)
{
	int height = 20;
	int width = 10;	
	int pieceID = PIECEI;
	CBoard board(width,height);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	gameBoard.rotateLeft();
	while(gameBoard.moveDown());
	bool** b = board.getBoard();
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getRotatedOnce(pieceID),b);		
//	ASSERT_TRUE(false);
}

TEST(use_gameboard,given_a_gameboard_with_a_piece_on_it_adding_another_piece_ontop_will_cause_the_pieces_to_stack)
{
	//given
	int height = 20;
	int width = 10;
	int pieceID = PIECEI;
	CBoard board(width,height);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	while(gameBoard.moveDown());
	//then
	gameBoard.addTetromino(PIECEI);
	while(gameBoard.moveDown());
	bool** b = board.getBoard();
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getStackedTetrominoes(pieceID),b);
}	

TEST(use_gameboard, give_a_gameboard_with_a_piece_on_it_an_overlapping_piece_will_not_blank_out_part_of_the_first_piece)
{
	//given
	int height = 20;
	int width = 10;
	int pieceID = PIECEI;
	CBoard board(width,height);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	while(gameBoard.moveDown());
	//then
	gameBoard.addTetromino(PIECEI);
	gameBoard.rotateRight();
	while(gameBoard.moveDown());
	bool** b = board.getBoard();
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getOverlappingTetrominoes(pieceID),b);
}

//TODO:finish this test
TEST(use_gameboard, given_an_empty_board_a_piece_placed_on_it_should_not_be_able_to_move_past_either_side_of_the_board)
{
	int height = 20;
	int width = 10;
	int pieceID = PIECEI;
	CBoard board(width,height);
	CGameBoard gameBoard(&board);
	gameBoard.addTetromino(pieceID);
	std::cout<<"moving left\n";
	while(gameBoard.moveLeft());
	bool** b = board.getBoard();
		
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getAllLeftTetromino(pieceID),b);

	std::cout<<"moving right\n";
	while(gameBoard.moveRight());
	b = board.getBoard();
	GAMEBOARDTEST::compareBoards(GAMEBOARDTEST::getAllRightTetromino(pieceID),b);
	for(int i=0;i<height+1;++i)
	{
		for(int j=0;j<width+2;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
}
