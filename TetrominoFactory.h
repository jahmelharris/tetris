#ifndef TETROMINOFACTORY_H
#define TETROMINOFACTORY_H
enum {PIECEI=1,PIECEL,PIECEJ,PIECET,PIECES,PIECEZ,NumberOfPieces=6};
class ITetromino;
class CTetrominoFactory
{
	public:
		CTetrominoFactory();
		~CTetrominoFactory();
		ITetromino* GetTetromino(int);
};


#endif
