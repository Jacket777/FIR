#pragma once

struct ChessPos {
	int row;
	int col;
};

typedef enum {
	CHESS_WHIITE = -1,//白棋
	CHESS_BLACK = 1
}chess_kind_t;


class Chess {
public:
	void init();//初始化棋盘
	bool clickBorad(int x, int y, ChessPos* pos);  //确保落子位置正确
	void chessDown(ChessPos* pos, chess_kind_t kind);  //落子
	int getGradeSize();//棋盘大小 13, 15,19
	bool checkOver();//检查下棋是否结束
	//获取指定位置是黑棋，白棋，还是空白
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);



};

