#include "Enemy.h"

//�����o�֐��|�C���^�e�[�u���̎��̒�`
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::RangeAttack,//�v�f�ԍ�0
	&Enemy::ShootingAttack,//�v�f�ԍ�1
	&Enemy::Leave,//�v�f�ԍ�2
};

void Enemy::Update() {
	//�����o�֐��|�C���^�̌Ăяo��
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::kShootingAttack;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::kLeave;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::RangeAttack() {
	std::cout << "�G�̏�� : �ߐڍU��" << std::endl;
}

void Enemy::ShootingAttack() {
	std::cout << "�G�̏�� : �ˌ��U��" << std::endl;
}

void Enemy::Leave() {
	std::cout << "�G�̏�� : ���E" << std::endl;
}