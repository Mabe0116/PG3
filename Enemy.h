#pragma once
#include <iostream>

class Enemy {
public:
	//�G�̏��
	enum class Phase {
		kRangeAttack,
		kShootingAttack,
		kLeave,
	};

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �ߐڍU��
	/// </summary>
	void RangeAttack();

	/// <summary>
	/// �ˌ��U��
	/// </summary>
	void ShootingAttack();

	/// <summary>
	/// ���E
	/// </summary>
	void Leave();

private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spFuncTable[])();
	//�G�̏��
	Phase phase_ = Phase::kRangeAttack;
};

