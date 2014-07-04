TEST(rotate_J_CCW,given_a_new_J_piece_when_it_is_rotated_CCW_it_should_look_like_a_CCW_rotated_J)
{
	testRotate(1,PIECEJ,COUNTERCLOCKWISE);	
}

TEST(rotate_J_CCW, given_an_J_piece_rotated_once_when_it_is_rotated_CCW_it_should_look_like_a_twice_CCW_rotated_J)
{
	testRotate(2,PIECEJ,COUNTERCLOCKWISE);
}

TEST(rotate_i, given_an_J_piece_rotated_twice_when_it_is_rotated_CW_it_should_look_like_a_three_times_CW_rotated_J)
{
	testRotate(3,PIECEJ,COUNTERCLOCKWISE);	
}


TEST(rotate_J_CCW,given_an_J_piece_rotated_three_times_when_it_is_rotated_CW_it_should_look_like_an_J_piece)
{
	testRotate(4,PIECEJ,COUNTERCLOCKWISE);		
}

TEST(rotate_J_CW,given_a_new_J_piece_when_it_is_rotated_CW_it_should_look_like_a_CW_rotated_J)
{
	testRotate(1,PIECEJ,CLOCKWISE);
}

TEST(rotate_J_CW, given_an_J_piece_CW_rotated_once_when_it_is_rotated_CW_it_should_look_like_a_twice_CW_rotated_J)
{
	testRotate(2,PIECEJ,CLOCKWISE);
}

TEST(rotate_J_CW, given_an_J_piece_rotated_twice_when_it_is_rotated_CW_it_should_look_like_a_three_times_CW_rotated_J)
{
	testRotate(3,PIECEJ,CLOCKWISE);
}

TEST(rotate_J_CW, given_an_J_piece_rotated_three_times_when_it_is_rotated_CW_it_should_look_like_an_J_piece)
{
	testRotate(4,PIECEJ,CLOCKWISE);
}
