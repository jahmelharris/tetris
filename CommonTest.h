#ifndef COMMONTEST_H
#define COMMONTEST_H
enum {CLOCKWISE,COUNTERCLOCKWISE};
extern CTetrominoFactory factory;
namespace NEWPIECES{
	bool testPieceI[4][4] ={{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0}};
	bool testPieceL[3][3] ={{0,1,0},
				{0,1,0},
				{0,1,1}};
	bool testPieceJ[3][3] ={{0,1,0},
				{0,1,0},
				{1,1,0}};
	bool testPieceT[3][3] ={{0,0,0},
				{1,1,1},
				{0,1,0}};
	bool testPieceS[3][3] ={{0,0,0},
				{0,1,1},
				{1,1,0}};
	bool testPieceZ[3][3] ={{0,0,0},
				{1,1,0},
				{0,1,1}};
	void* getPiece(int id, int& size)
	{
		switch(id)
		{
			case PIECEI:
				size = 4;
				return &testPieceI;
				break;
			case PIECEL:
				size = 3;
				return &testPieceL;
				break;
			case PIECEJ:
				size = 3;
				return &testPieceJ;
				break;
			case PIECET:
				size = 3;
				return &testPieceT;
				break;
			case PIECES:
				size = 3;
				return &testPieceS;
				break;
			case PIECEZ:
				size = 3;
				return &testPieceZ;
				break;

			default:
				size = 9;
				return NULL;
		}
	}

}
namespace PIECECCW{
	const int size = 4;
	bool CCWONCEI[][size] = {{0,0,0,0},
				 {0,0,0,0},
				 {1,1,1,1},
				 {0,0,0,0}};
	bool CCWTWICEI[][size] =   {{0,0,1,0},
				    {0,0,1,0},
				    {0,0,1,0},
				    {0,0,1,0}};
	bool CCWTHRICEI[][size] =  {{0,0,0,0},
				    {1,1,1,1},
				    {0,0,0,0},
				    {0,0,0,0}};
	bool CCWNORMALI[][size] =  {{0,1,0,0},
				    {0,1,0,0},
				    {0,1,0,0},
				    {0,1,0,0}};

	bool CCWONCEJ[][3] =    {{0,0,0},
				 {1,1,1},
				 {0,0,1}};
	bool CCWTWICEJ[][3] =   {{0,1,1},
				 {0,1,0},
				 {0,1,0}};
	bool CCWTHRICEJ[][3] =   {{1,0,0},
				{1,1,1},
				{0,0,0}};
	bool CCWNORMALJ[][3] =   {{0,1,0},
				{0,1,0},
				{1,1,0}};

	bool CCWONCEL[][3] =  {{0,0,1},
			       {1,1,1},
			       {0,0,0}};
	bool CCWTWICEL[][3] = {{1,1,0},
			       {0,1,0},
			       {0,1,0}};
	bool CCWTHRICEL[][3] =  {{0,0,0},
				 {1,1,1},
				 {1,0,0}};
	bool CCWNORMALL[][3] =  {{0,1,0},
				 {0,1,0},
				 {0,1,1}};


	bool CCWONCET[][size] =  { {0,1,0},
				    {0,1,1},
				    {0,1,0}};
	bool CCWTWICET[][size] =   {{0,1,0},
				    {1,1,1},
				    {0,0,0}};
	bool CCWTHRICET[][size] =   {{0,1,0},
				    {1,1,0},
				    {0,1,0}};
	bool CCWNORMALT[][size] =   {{0,0,0},
				    {1,1,1},
				    {0,1,0}};

	

	void* getRotatedI(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCEI;
				break;
			case 2:
				return &CCWTWICEI;
				break;
			case 3:
				return &CCWTHRICEI;
				break;
			case 4:
			case 0:
				return &CCWNORMALI;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedL(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCEL;
				break;
			case 2:
				return &CCWTWICEL;
				break;
			case 3:
				return &CCWTHRICEL;
				break;
			case 4:
			case 0:
				return &CCWNORMALL;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedJ(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCEJ;
				break;
			case 2:
				return &CCWTWICEJ;
				break;
			case 3:
				return &CCWTHRICEJ;
				break;
			case 4:
			case 0:
				return &CCWNORMALJ;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedT(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCET;
				break;
			case 2:
				return &CCWTWICET;
				break;
			case 3:
				return &CCWTHRICET;
				break;
			case 4:
			case 0:
				return &CCWNORMALT;
				break;
			default:
				return NULL;
		}
	}
	/*void* getRotatedS(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCES;
				break;
			case 2:
				return &CCWTWICES;
				break;
			case 3:
				return &CCWTHRICES;
				break;
			case 4:
			case 0:
				return &CCWNORMALS;
				break;
			default:
				return NULL;
		}
	}

	void* getRotatedZ(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CCWONCEZ;
				break;
			case 2:
				return &CCWTWICEZ;
				break;
			case 3:
				return &CCWTHRICEZ;
				break;
			case 4:
			case 0:
				return &CCWNORMALZ;
				break;
			default:
				return NULL;
		}
	}*/
	void* getRotated(int timesRotated, int pieceID)
	{
		switch(pieceID)
		{
			case PIECEI:
				return getRotatedI(timesRotated);
				break;
			case PIECEL:
				return getRotatedL(timesRotated);
				break;
			case PIECEJ:
				return getRotatedJ(timesRotated);
				break;
			case PIECET:
				return getRotatedT(timesRotated);
				break;
			/*case PIECES:
				return getRotatedS(timesRotated);
				break;
			case PIECEZ:
				return getRotatedZ(timesRotated);
				break;*/
			default:
				return NULL;
		}
	}
}

namespace PIECECW{
	const int size = 4;
	bool CWONCEI[][size] =  {{0,0,0,0},
				 {1,1,1,1},
				 {0,0,0,0},
				 {0,0,0,0}};
	bool CWTWICEI[][size] =   {{0,0,1,0},
				    {0,0,1,0},
				    {0,0,1,0},
				    {0,0,1,0}};
	bool CWTHRICEI[][size] =   {{0,0,0,0},
				    {0,0,0,0},
				    {1,1,1,1},
				    {0,0,0,0}};
	bool CWNORMALI[][size] =   {{0,1,0,0},
				    {0,1,0,0},
				    {0,1,0,0},
				    {0,1,0,0}};

	bool CWONCEJ[][3] =  {{1,0,0},
			      {1,1,1},
			      {0,0,0}};
	bool CWTWICEJ[][3] =   {{0,1,1},
				{0,1,0},
				{0,1,0}};
	bool CWTHRICEJ[][3] =  {{0,0,0},
				{1,1,1},
				{0,0,1}};
	bool CWNORMALJ[][3] =  {{0,1,0},
				{0,1,0},
				{1,1,0}};

	bool CWONCEL[][3] =  {{0,0,1},
			       {1,1,1},
			       {0,0,0}};
	bool CWTWICEL[][3] = {{1,1,0},
			       {0,1,0},
			       {0,1,0}};
	bool CWTHRICEL[][3] =  {{0,0,0},
				 {1,1,1},
				 {1,0,0}};
	bool CWNORMALL[][3] =  {{0,1,0},
				 {0,1,0},
				 {0,1,1}};


	bool CWONCET[][size] =  { {0,1,0},
				    {0,1,1},
				    {0,1,0}};
	bool CWTWICET[][size] =   {{0,1,0},
				    {1,1,1},
				    {0,0,0}};
	bool CWTHRICET[][size] =   {{0,1,0},
				    {1,1,0},
				    {0,1,0}};
	bool CWNORMALT[][size] =   {{0,0,0},
				    {1,1,1},
				    {0,1,0}};

	

	void* getRotatedI(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCEI;
				break;
			case 2:
				return &CWTWICEI;
				break;
			case 3:
				return &CWTHRICEI;
				break;
			case 4:
			case 0:
				return &CWNORMALI;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedL(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCEL;
				break;
			case 2:
				return &CWTWICEL;
				break;
			case 3:
				return &CWTHRICEL;
				break;
			case 4:
			case 0:
				return &CWNORMALL;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedJ(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCEJ;
				break;
			case 2:
				return &CWTWICEJ;
				break;
			case 3:
				return &CWTHRICEJ;
				break;
			case 4:
			case 0:
				return &CWNORMALJ;
				break;
			default:
				return NULL;
		}
	}
	void* getRotatedT(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCET;
				break;
			case 2:
				return &CWTWICET;
				break;
			case 3:
				return &CWTHRICET;
				break;
			case 4:
			case 0:
				return &CWNORMALT;
				break;
			default:
				return NULL;
		}
	}
	/*void* getRotatedS(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCES;
				break;
			case 2:
				return &CWTWICES;
				break;
			case 3:
				return &CWTHRICES;
				break;
			case 4:
			case 0:
				return &CWNORMALS;
				break;
			default:
				return NULL;
		}
	}

	void* getRotatedZ(int timesRotated)
	{
		switch(timesRotated)
		{
			case 1:
				return &CWONCEZ;
				break;
			case 2:
				return &CWTWICEZ;
				break;
			case 3:
				return &CWTHRICEZ;
				break;
			case 4:
			case 0:
				return &CWNORMALZ;
				break;
			default:
				return NULL;
		}
	}*/
	void* getRotated(int timesRotated, int pieceID)
	{
		switch(pieceID)
		{
			case PIECEI:
				return getRotatedI(timesRotated);
				break;
			case PIECEL:
				return getRotatedL(timesRotated);
				break;
			case PIECEJ:
				return getRotatedJ(timesRotated);
				break;
			case PIECET:
				return getRotatedT(timesRotated);
				break;
			/*case PIECES:
				return getRotatedS(timesRotated);
				break;
			case PIECEZ:
				return getRotatedZ(timesRotated);
				break;*/
			default:
				return NULL;
		}
	}
}


void testRotate(int timesRotated, int pieceID, int direction)
{
	ITetromino* PI = factory.GetTetromino(pieceID);
	int size;
	SHAPE t = PI->getShape(&size); 
	void* voidShape = NULL;
	switch(direction)
	{
		case CLOCKWISE:
		
			for(int i=0;i<timesRotated;++i)
				PI->rotateR();
			voidShape = PIECECW::getRotated(timesRotated,pieceID);
			break;
		case COUNTERCLOCKWISE:
			for(int i=0;i<timesRotated;++i)
				PI->rotateL();
			voidShape = PIECECCW::getRotated(timesRotated,pieceID);
			break;
		
	}
	for(int i=0;i<size;++i)
		ASSERT_TRUE(memcmp((void*)&t[i][0],(void*)&((bool(*)[size])voidShape)[i][0],size)==0);
	delete PI;
}


bool compareTetromino(SHAPE* a, SHAPE* b, int size)
{
	int result = 0;
	for(int i=0;i<size;++i)
		result |= memcmp(&a[i][0],&b[i][0],size);
	return result==0;
}

#endif
