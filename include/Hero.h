//
// Created by zys on 25-3-17.
//

#ifndef HERO_H
#define HERO_H
#include <string>
#include "ImgManager.h"


class Hero {
	int hp;
	int sp;
	int atk;
	int def;
	int coin;
	std::string imgPath ;

public:
	[[nodiscard]]int getHp() const;
	[[nodiscard]]int getSp()const;
	[[nodiscard]]int getAtk()const;
	[[nodiscard]]int getDef()const;
	[[nodiscard]] int getCoin()const;
	void hurt(int damage);


	Hero();
	bool getItem();
	bool fight();
	bool communicate();
};



#endif //HERO_H
