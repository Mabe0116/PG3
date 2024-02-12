#include "Enemy.h"

//�����o�֐��|�C���^�e�[�u���̎��̒�`
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::CloseRangeAttack,//�v�f�ԍ�0
	&Enemy::ShootingAttack,//�v�f�ԍ�1
	&Enemy::Leave,//�v�f�ԍ�2
};

void Enemy::Update() {
	//�����o�֐��|�C���^�̌Ăяo��
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::CloseRangeAttack() {
	std::cout << "�G�̏�� : �ߐڍU��" << std::endl;
	phase_ = Phase::kShootingAttack;
}

void Enemy::ShootingAttack() {
	std::cout << "�G�̏�� : �ˌ��U��" << std::endl;
	phase_ = Phase::kLeave;
}

void Enemy::Leave() {
	std::cout << "�G�̏�� : ���E" << std::endl;
}