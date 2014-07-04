TEST(rotate_I_CCW,given_a_new_I_piece_when_it_is_rotated_CCW_it_should_look_like_a_CCW_rotated_I)
{
	testRotate(1,PIECEI,COUNTERCLOCKWISE);	
}

TEST(rotate_I_CCW, given_an_I_piece_rotated_once_when_it_is_rotated_CCW_it_should_look_like_a_twice_CCW_rotated_I)
{
	testRotate(2,PIECEI,COUNTERCLOCKWISE);
}

TEST(rotate_I_CCW, given_an_I_piece_rotated_twice_when_it_is_rotated_CCW_it_should_look_like_a_three_times_CCW_rotated_I)
{
	testRotate(3,PIECEI,COUNTERCLOCKWISE);	
}

TEST(rotate_I_CCW,given_an_I_piece_rotated_three_times_when_it_is_rotated_CW_it_should_look_like_an_I_piece)
{
	testRotate(4,PIECEI,COUNTERCLOCKWISE);		
}

TEST(rotate_I_CW,given_a_new_I_piece_when_it_is_rotated_CW_it_should_look_like_a_CW_rotated_I)
{
	testRotate(1,PIECEI,CLOCKWISE);
}

TEST(rotate_I_CW, given_an_I_piece_CW_rotated_once_when_it_is_rotated_CW_it_should_look_like_a_twice_CW_rotated_I)
{
	testRotate(2,PIECEI,CLOCKWISE);
}

TEST(rotate_I_CW, given_an_I_piece_rotated_twice_when_it_is_rotated_CW_it_should_look_like_a_three_times_CW_rotated_I)
{
	testRotate(3,PIECEI,CLOCKWISE);
}

TEST(rotate_I_CW, given_an_I_piece_rotated_three_times_when_it_is_rotated_CW_it_should_look_like_an_I_piece)
{
	testRotate(4,PIECEI,CLOCKWISE);
}
