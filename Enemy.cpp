#include "Enemy.h"

//ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^ƒe[ƒuƒ‹‚ÌŽÀ‘Ì’è‹`
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::RangeAttack,//—v‘f”Ô†0
	&Enemy::ShootingAttack,//—v‘f”Ô†1
	&Enemy::Leave,//—v‘f”Ô†2
};

void Enemy::Update() {
	//ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^‚ÌŒÄ‚Ño‚µ
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::kShootingAttack;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::kLeave;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::RangeAttack() {
	std::cout << "“G‚Ìó‘Ô : ‹ßÚUŒ‚" << std::endl;
}

void Enemy::ShootingAttack() {
	std::cout << "“G‚Ìó‘Ô : ŽËŒ‚UŒ‚" << std::endl;
}

void Enemy::Leave() {
	std::cout << "“G‚Ìó‘Ô : —£’E" << std::endl;
}