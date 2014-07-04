CC=g++
CPPFLAGS=-Wall -g -lgtest -lpthread -lSDL -lSDL_image
EXE=tetris
all: ITetromino.o PieceI.o PieceL.o PieceJ.o PieceT.o PieceZ.o PieceS.o Board.o TetrominoFactory.o GameBoard.o Game.o SDLView.o mainRunner.o 
	${CC} ITetromino.o PieceI.o PieceL.o PieceJ.o PieceT.o PieceZ.o PieceS.o Board.o TetrominoFactory.o GameBoard.o Game.o mainRunner.o SDLView.o ${CPPFLAGS} -o ${EXE}
clean:
	rm tetris ITetromino.o PieceI.o PieceL.o PieceJ.o PieceT.o PieceZ.o PieceS.o Board.o TetrominoFactory.o mainRunner.o GameBoard.o Game.o SDLView.o
tests:
	${CC} ITetromino.o PieceI.o PieceL.o PieceJ.o PieceT.o PieceZ.o PieceS.o Board.o TetrominoFactory.o GameBoard.o Game.o mainRunner.cpp SDLView.cpp ${CPPFLAGS} -o ${EXE}

