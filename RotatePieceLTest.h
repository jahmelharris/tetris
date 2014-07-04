extern CTetrominoFactory factory;

void given_a_new_L_piece_when_it_is_rotated_CW_it_should_look_like_a_CW_rotated_L()
{
	const int size = 3;
	bool tempPiece[][size] =  { {0,0,1},
				    {1,1,1},
				    {0,0,0}};
	ITetromino* t = factory.GetTetromino(PIECEL);
	t->rotateL();
	int s;
	SHAPE shape = t->getShape(&s);
	//compareTetromino((SHAPE*)&tempPiece,&shape,size);
	for(int i=0;i<size;++i)
	{
		assert(memcmp((void*)&shape[i][0],(void*)&tempPiece[i][0],size)==0);
	}
	
	delete t;
		
}

void given_an_L_piece_rotated_once_when_it_is_rotated_CW_it_should_look_like_a_twice_CW_rotated_L()
{
	const int size = 3;
	bool tempPiece[][size] =   {{1,1,0},
				    {0,1,0},
				    {0,1,0}};
	ITetromino* t = factory.GetTetromino(PIECEL);
	t->rotateL();
	t->rotateL();
	int s;
	SHAPE shape = t->getShape(&s);
	//compareTetromino((SHAPE*)&tempPiece,&shape,size);
	for(int i=0;i<size;++i)
	{
		assert(memcmp((void*)&shape[i][0],(void*)&tempPiece[i][0],size)==0);
	}
	
	delete t;
		
}


void given_an_L_piece_rotated_twice_when_it_is_rotated_CW_it_should_look_like_a_three_times_CW_rotated_L()
{
	const int size = 3;
	bool tempPiece[][size] =   {{0,0,0},
				    {1,1,1},
				    {1,0,0}};
	ITetromino* t = factory.GetTetromino(PIECEL);
	t->rotateL();
	t->rotateL();
	t->rotateL();
	int s;
	SHAPE shape = t->getShape(&s);
	//compareTetromino((SHAPE*)&tempPiece,&shape,size);
	for(int i=0;i<size;++i)
	{
		assert(memcmp((void*)&shape[i][0],(void*)&tempPiece[i][0],size)==0);
	}
	
	delete t;
		
}


void given_an_L_piece_rotated_three_times_when_it_is_rotated_CW_it_should_look_like_an_L_piece()
{
	const int size = 3;
	bool tempPiece[][size] =   {{0,1,0},
				    {0,1,0},
				    {0,1,1}};
	ITetromino* t = factory.GetTetromino(PIECEL);
	t->rotateL();
	t->rotateL();
	t->rotateL();
	t->rotateL();
	int s;
	SHAPE shape = t->getShape(&s);
	//compareTetromino((SHAPE*)&tempPiece,&shape,size);
	for(int i=0;i<size;++i)
	{
		assert(memcmp((void*)&shape[i][0],(void*)&tempPiece[i][0],size)==0);
	}
	
	delete t;
		
}
