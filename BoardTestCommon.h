#ifndef BOARD_COMMON_H
#define BOARD_COMMON_H

namespace BOARDTESTS{
	const int x1 = 10;
	const int y1 =20;
	const int x = 12;
	const int y = 21;
	bool emptyBoard[y1][x1] =      {{0,0,0,0,0,0,0,0,0,0},
				     	{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0}};
	
bool BoardRightDownPosPI[y][x] =       {{0,0,0,0,0,0,0,0,0,0},
				     	{0,0,0,0,0,0,0,0,0,1},
					{0,0,0,0,0,0,0,0,0,1},
					{0,0,0,0,0,0,0,0,0,1},
					{0,0,0,0,0,0,0,0,0,1},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0}};

bool BoardRightDownPosPL[y][x] =       {{0,0,0,0,0,0,0,0,0,0},
				      	{0,0,0,0,0,0,0,0,1,0},
					{0,0,0,0,0,0,0,0,1,0},
					{0,0,0,0,0,0,0,0,1,1},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0}};
	
bool BoardRightDownPosPZ[y][x] =       {{0,0,0,0,0,0,0,0,0,0},
				      	{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,1,1,0},
					{0,0,0,0,0,0,0,0,1,1},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0}};

	bool BoardRightmostPos[y][x] = {{0,0,0,0,0,0,0,0,0},
				     	{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0}};
					
	void* getBoard()
	{
		return &emptyBoard;
	}

	void* getBoardWithMovedPiece(int id)
	{
		switch(id)
		{
			case PIECEI:
				return &BoardRightDownPosPI;
			case PIECEL:
				return &BoardRightDownPosPL;
			case PIECEZ:
				return &BoardRightDownPosPZ;
			default:
				return NULL;
		}
	}
	void* getBoardWithRightPiece()
	{
		return &BoardRightmostPos;
	}

	void compareBoards(void* testBoard, SHAPE realBoard)
	{
		std::cout<<"realboard\t\ttestBoard\n";	
		for(int i=0;i<y1;++i)
		{
			for(int j=0;j<x1;++j)
				std::cout<<realBoard[i][j];
			std::cout<<"\t\t";
			for(int j=0;j<x1;++j)
				std::cout<<((bool(*)[x1])testBoard)[i][j];
			std::cout<<std::endl;	
			ASSERT_TRUE(memcmp((void*)&realBoard[i][0],(void*)&((bool(*)[x1])testBoard)[i][0],x1)==0);
		}
	}

	void addTetrominoToBoard(int id,/* int xPos, int yPos,*/ bool* testBoard, CBoard* realBoard)
	{
		bool(*testBoardArray)[x1] = (bool(*)[x1])testBoard;	
		int size;
		bool* tempTetromino = (bool*)NEWPIECES::getPiece(id,size); 	
		bool(*tempTetrominoArray)[size] = (bool(*)[size])tempTetromino;

		ITetromino* t = factory.GetTetromino(id);
		realBoard->putTetromino(t);//,xPos,yPos);

//		if(size+yPos <= y && size+xPos <=x)
		{
			for(int i=0;i<size;++i)
			{
				memcpy(&testBoardArray[i][1],&tempTetrominoArray[0],size);
			}
				
		}
	}
	
	bool moveTetromino(int xPos, int yPos, int id, void* testBoard, CBoard* realBoard)
	{
		bool val = realBoard->moveTetromino(xPos,yPos);
		bool(*testBoardArray)[x1] = (bool(*)[x1])testBoard;	
		int size;
		bool* tempTetromino = (bool*)NEWPIECES::getPiece(id,size); 	
		bool(*tempTetrominoArray)[size] = (bool(*)[size])tempTetromino;
		if(val)
		{
			for(int i=0;i<size;++i)
			{
				memcpy(&testBoardArray[i+yPos][1+xPos],&tempTetrominoArray[0],size);
			}
		}
		else
		{
			for(int i=0;i<size;++i)
			{
				memcpy(&testBoardArray[i][1],&tempTetrominoArray[0],size);
			}
		}
		return val;
		
	}


	void resetBoard()
	{
		bool board[y][x] =     {{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0}};
		memcpy(&emptyBoard[0],&board[0],x*y);
	}
}

#endif
