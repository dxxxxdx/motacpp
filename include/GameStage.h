//
// Created by zys on 25-3-18.
//

#ifndef GAMESTAGE_H
#define GAMESTAGE_H
#include "Map.h"


class GameStage {

Map map;
int stageId;
Hero hero;


public:
	explicit GameStage(Map& map,Hero hero,int id);
	~GameStage();
	void load();




};



#endif //GAMESTAGE_H
