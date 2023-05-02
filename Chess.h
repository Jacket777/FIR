#pragma once

struct ChessPos {
	int row;
	int col;
};

typedef enum {
	CHESS_WHIITE = -1,//����
	CHESS_BLACK = 1
}chess_kind_t;


class Chess {
public:
	void init();//��ʼ������
	bool clickBorad(int x, int y, ChessPos* pos);  //ȷ������λ����ȷ
	void chessDown(ChessPos* pos, chess_kind_t kind);  //����
	int getGradeSize();//���̴�С 13, 15,19
	bool checkOver();//��������Ƿ����
	//��ȡָ��λ���Ǻ��壬���壬���ǿհ�
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);



};

