
#include "Enemy.h"

#include <iostream>
#include <ostream>

Enemy::Enemy(const int hp, const int def, const int atk, const int id)
{
	this->hp = hp;
	this->def = def;
	this->atk = atk;
	this->id = id;

	this->passable = false;
}

bool Enemy::interact(Hero& hero) override {
	while (this->hp >= 0) {
		if (this->def >= hero.getAtk()) {return false;}
		this->hp -= (hero.getAtk() - this->def);
		if (this->hp <= 0) {return true;};
		hero.hurt(this->atk - hero.getDef());
		if (hero.getHp() <= 0) {return false;};
	}
	return false;









	std::cout << "illegal block" << std::endl;
	return true;
}

Enemy::Enemy() {
	hp = 0;
	def = 0;
	atk = 0;
}
