#include "ChessGame.h"

ChessGame::ChessGame(Man* man, AI* ai, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;

}

//�Ծ� ��ʼ��Ϸ
void ChessGame::play()
{
	while (1) {
		chess->init();



		//������������
		man->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
		//AI ����
		ai->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}

}
