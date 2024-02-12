#include "Enemy.h"

//ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^ƒe[ƒuƒ‹‚ÌŽÀ‘Ì’è‹`
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::CloseRangeAttack,//—v‘f”Ô†0
	&Enemy::ShootingAttack,//—v‘f”Ô†1
	&Enemy::Leave,//—v‘f”Ô†2
};

void Enemy::Update() {
	//ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^‚ÌŒÄ‚Ño‚µ
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::CloseRangeAttack() {
	std::cout << "“G‚Ìó‘Ô : ‹ßÚUŒ‚" << std::endl;
	phase_ = Phase::kShootingAttack;
}

void Enemy::ShootingAttack() {
	std::cout << "“G‚Ìó‘Ô : ŽËŒ‚UŒ‚" << std::endl;
	phase_ = Phase::kLeave;
}

void Enemy::Leave() {
	std::cout << "“G‚Ìó‘Ô : —£’E" << std::endl;
}