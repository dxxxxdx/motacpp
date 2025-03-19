//
// Created by zys on 25-3-18.
//

#include "Floor1.h"
#include "Map.h"
#include "Block.h"
const int Floor1::Floor1Config[16] = {
	  1,0,1,0,
    1,0,1,0,
    5,0,0,0,
    1,0,1,0,
  };

Floor1::Floor1():Map(nullptr,1,"Floor1",4){
  	blocks_list = new Block* [lenth] ;
    for(int i = 0; i < lenth; i++){
          blocks_list[i] = new Block [lenth];
    }
    for(int i = 0; i < lenth; i++){
      for(int j = 0; j < lenth; j++){
        blocks_list[i][j] = Block(i,j,Floor1::Floor1Config[i+lenth*j]);
      }
    }
}

Floor1::~Floor1()= default;



