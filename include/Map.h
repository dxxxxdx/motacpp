//
// Created by zys on 25-3-17.
//

#ifndef MAP_H
#define MAP_H
#include <String>
#include <Block.h>

class Map {
protected:
	int id{};
	int lenth{};
	std::string name;
	Block **blocks_list{};

public:
	Map(const Block *blocks_list,int id ,const std::string& name,int lenth);
	int getBlockId(int x,int y) const;
	~Map();
	Map();
	void showMap() const;
};







#endif //MAP_H
