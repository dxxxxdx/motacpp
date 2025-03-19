//
// Created by zys on 25-3-17.
//

#ifndef ENEMY_H
#define ENEMY_H
#include "Block.h"
#include "Hero.h"


class Enemy : public Block{
protected:
	int hp,def,atk;
	bool passable = false;

public:
	Enemy(int hp, int def, int atk,int id);
	Enemy();
	bool interact (Hero& hero) override;
};


#endif //ENEMY_H
