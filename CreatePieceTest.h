extern CTetrominoFactory factory;

void testTetromino(int id)
{
	int size = 0;
	void* voidShape = NEWPIECES::getPiece(id, size);
//	bool(*testShape)[size] = (bool(*)[size])voidShape; //casting this results in a "value computed is not used" warning. TODO: Investigate
	ITetromino* PI = factory.GetTetromino(id);
	int tempSize;
	SHAPE t = PI->getShape(&tempSize);
	EXPECT_EQ(size, tempSize);
	for(int i=0;i<size;++i)
		ASSERT_TRUE(memcmp((void*)&t[i][0],(void*)&((bool(*)[size])voidShape)[i][0],size)==0);
	delete PI;	
}

TEST(create_tetromino,given_a_new_I_tetromino_it_should_look_like_an_I)
{
	testTetromino(PIECEI);
}

TEST(create_tetromino,given_a_new_L_tetromino_it_should_look_like_an_L)
{
	testTetromino(PIECEL);
}

TEST(create_tetromino,given_a_new_J_tetromino_it_should_look_like_an_J)
{
	testTetromino(PIECEJ);
}

TEST(create_tetromino,given_a_new_T_tetromino_it_should_look_like_an_T)
{
	testTetromino(PIECET);
}

TEST(create_tetromino,given_a_new_S_tetromino_it_should_look_like_an_S)
{
	testTetromino(PIECES);
}

TEST(create_tetromino,given_a_new_Z_tetromino_it_should_look_like_an_Z)
{
	testTetromino(PIECEZ);
}
