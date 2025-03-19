#ifndef BLOCK_H
#define BLOCK_H
#include "Hero.h"

class Block {
protected:
	int posx, posy;
	int id;
	bool passable;
public:
	virtual ~Block() = default;
	Block(int x,int y, int id);
	Block();
	void setPos(int x,int y);
	void setId(int id);
	[[nodiscard]] int getId() const;
	[[nodiscard]] int getx() const;
	[[nodiscard]] int gety() const;
	virtual bool interact(Hero& hero) ;
};

#endif // BLOCK_H
