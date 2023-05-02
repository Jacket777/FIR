#include "ChessGame.h"

ChessGame::ChessGame(Man* man, AI* ai, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;

}

//对局 开始游戏
void ChessGame::play()
{
	while (1) {
		chess->init();



		//先由棋手下棋
		man->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
		//AI 下棋
		ai->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}

}
