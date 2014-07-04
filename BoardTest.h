const int x = BOARDTESTS::x-2;
const int y = BOARDTESTS::y-1;
void printBoard(CBoard*);
TEST(create_board,given_a_new_board_of_size_x_by_y_the_board_should_be_x_by_y_in_size)
{
//	bool emptyBoard[y][x] = {{0}};

	CBoard board(x,y);
	SHAPE tempBoard = board.getBoard();
	void* emptyBoard = BOARDTESTS::getBoard();
	BOARDTESTS::compareBoards(emptyBoard, tempBoard);
}

TEST(create_board,given_an_empty_board_an_added_tetromino_at_pos_x_y_will_be_placed_at_x_y)
{
	bool* testBoard = (bool*)BOARDTESTS::getBoard();

	CBoard board(x,y);
	BOARDTESTS::addTetrominoToBoard(PIECEI,/*xPos,yPos,*/testBoard,&board);
	SHAPE realBoard = board.getBoard();
	BOARDTESTS::compareBoards(testBoard,realBoard);
	BOARDTESTS::resetBoard();
}

TEST(create_board,given_a_board_with_a_piece_put_on_it_then_moving_that_piece_to_another_position_will_move_the_piece_on_the_board)
{
	int xPos = 0;
	int yPos = 0;
	
	bool* testBoard = (bool*)BOARDTESTS::getBoard();
	CBoard board(x,y);
	
	BOARDTESTS::addTetrominoToBoard(PIECEI,/*xPos,yPos,*/testBoard,&board);
	BOARDTESTS::resetBoard();
	BOARDTESTS::moveTetromino(xPos+4,yPos+4,PIECEI, testBoard, &board);
	SHAPE realBoard = board.getBoard();
	BOARDTESTS::compareBoards(testBoard,realBoard);
	BOARDTESTS::resetBoard();
}


TEST(create_board, given_a_board_a_piece_cannot_be_placed_outside_the_lower_boundary_of_the_board)
{
	int xPos = 0;
	int yPos = 17;
	
	bool* testBoard = (bool*)BOARDTESTS::getBoard();
	CBoard board(x,y);
	bool success = true;
	BOARDTESTS::addTetrominoToBoard(PIECEI,/*,xPos,yPos,*/testBoard,&board);
	BOARDTESTS::resetBoard();
	success = BOARDTESTS::moveTetromino(xPos,yPos,PIECEI, testBoard, &board);
	BOARDTESTS::compareBoards(testBoard,board.getBoard());
	ASSERT_FALSE(success);
	BOARDTESTS::resetBoard();
}


TEST(create_board, given_a_board_a_piece_cannot_be_placed_outside_the_right_boundary_of_the_board)
{
	int xPos = 9;
	int yPos = 0;
	
	bool* testBoard = (bool*)BOARDTESTS::getBoard();
	CBoard board(x,y);
	bool success = true;
	BOARDTESTS::addTetrominoToBoard(PIECEI,/*,xPos,yPos,*/testBoard,&board);
	BOARDTESTS::resetBoard();
	success = BOARDTESTS::moveTetromino(xPos,yPos,PIECEI, testBoard, &board);
	BOARDTESTS::compareBoards(BOARDTESTS::getBoardWithRightPiece(),board.getBoard());
	//ASSERT_FALSE(success);
	BOARDTESTS::resetBoard();
}


TEST(create_board, given_a_board_with_a_piece_on_it_a_new_piece_cannot_be_added_which_overlaps_it)
{
	int xPos = 0;
	int yPos = 16;
	//given	
	bool* testBoard = (bool*)BOARDTESTS::getBoard();
	CBoard board(x,y);
	bool success = true;
	ITetromino* t = factory.GetTetromino(PIECEI);
	board.putTetromino(t);
	board.moveTetromino(xPos,yPos);
	board.moveTetromino(xPos,yPos+1);
	//then
	BOARDTESTS::addTetrominoToBoard(PIECEJ,/*,xPos,yPos,*/testBoard,&board);
	success = board.moveTetromino(xPos,yPos-2);
	//result
	ASSERT_FALSE(success);
}

TEST(create_board, given_a_board_with_a_piece_at_the_right_most_position_moving_it_right_will_not_invalidate_the_piece)
{
	int xPos = 7;
	int yPos = 0;
	int pieceID = PIECEZ;
	CBoard board(x,y);
	bool success = true;
	ITetromino* t = factory.GetTetromino(pieceID);
	board.putTetromino(t);
	success = board.moveTetromino(xPos,yPos);
	success = board.moveTetromino(xPos+1,yPos);
	success = board.moveTetromino(xPos,yPos+1);
	
	BOARDTESTS::compareBoards(BOARDTESTS::getBoardWithMovedPiece(pieceID),board.getBoard());	
	ASSERT_TRUE(success);
}

void printBoard(CBoard* board)
{
	bool** b = board->getBoard();
	for(int i=0;i<BOARDTESTS::y;++i)
	{
		for(int j=0;j<BOARDTESTS::x;++j)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
}
