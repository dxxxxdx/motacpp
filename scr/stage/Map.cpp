//
// Created by zys on 25-3-17.
//
#include <iostream>
#include "Block.h"
#include "Map.h"
Map::Map  (const Block* blocks_list,const int id ,const std::string& name,const int lenth)
{
  if (lenth < 1 || lenth > 12) {
    throw std::invalid_argument("Error in map constructor: length must be between 1 and 12.");
  return;}

  this->id = id;
  this->name = name;
  this->lenth = lenth;

  this->blocks_list = new Block* [lenth];
  for (int i = 0; i < lenth; i++){
    this->blocks_list[i] = new Block[lenth];
  }
  for (int i = 0; i < lenth; i++){
    for (int j = 0; j < lenth; j++){
      this->blocks_list[i][j].setPos(i,j);
    }
  }
}
Map::Map()= default;


Map::~Map(){
  for (int i = 0; i < lenth; i++){
    delete[] this->blocks_list[i];
  };
  delete[] this->blocks_list;
}

int Map::getBlockId(const int x, const int y) const {
  return this->blocks_list[x][y].getId();
}


void Map::showMap()const{
  for (int i = 0; i < lenth; i++){
    for (int j = 0; j < lenth; j++){
      std::cout<<this->blocks_list[j][i].getId()<<"-";
    }
    std::cout<<std::endl;
  }
}















