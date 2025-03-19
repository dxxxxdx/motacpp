//
// Created by zys on 25-3-18.
//

#ifndef MAPREADER_H
#define MAPREADER_H
#include "GameStage.h"


class MapReader {
	public:
	MapReader() = delete;

	static GameStage* CreateGameStage(int floorID,Hero&hero);





};



#endif //MAPREADER_H
