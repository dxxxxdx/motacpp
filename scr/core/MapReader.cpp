//
// Created by zys on 25-3-18.
//

#include "MapReader.h"
#include "fstream"
#include "nlohmann/json.hpp"
#include <Block.h>

GameStage *MapReader::CreateGameStage(const int floorID,Hero& hero) {

	std::string tarPath = "../source/map";
	const std::string finalPath = tarPath.append(std::to_string(floorID)).append(".json");
	std::ifstream ifs (finalPath);
	if (!ifs.is_open()) {return nullptr;}
	nlohmann::json Data;
	ifs >> Data;
	ifs.close();
	const int lenth = Data["lenth"];
	const int id = Data["id"];
	auto* block_list = new Block[lenth * lenth];
	for (int i = 0; i < lenth * lenth; i++) {
		block_list[i].setId(Data["map"][i]);
		block_list[i].setPos(i%lenth, i/lenth);
	}
	Map *m = new Map(block_list, Data["id"], Data["name"], Data["lenth"]);
	GameStage* game = new GameStage(*m , hero,id);
	return game;




}


