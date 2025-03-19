#include "Block.h"
#include <iostream>

Block::Block(const int x,const int y,const int id) {
	posx = x ;posy = y ;this -> id = id ;passable = false ;
}
Block::Block () {
	this -> id = 0 ;
	this -> posx = -1 ;
	this -> posy = -1 ;
	passable = false ;
}
void Block::setPos(const int x,const int y) {
	posx = x ;posy = y ;
}

void Block::setId(const int id) {
	this->id = id ;
}

int Block::getx() const {
	return posx;
}
int Block::gety() const {
	return posy;
}
bool Block::interact() {
	std::cout << "error in click a block" << std::endl;
	return false;
}

int Block::getId() const {
	return id ;
}




