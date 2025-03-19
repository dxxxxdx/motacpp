//
// Created by zys on 25-3-17.
//

#include "Hero.h"
Hero::Hero(){
  hp = 100;
  atk = 10;
  def = 10;
  sp = 10;
  coin = 0;
  imgPath = ImgManager::ImgPath("hero");
}
int Hero::getHp() const{
  return hp;
}
int Hero::getAtk()const{
  return atk;
}
int Hero::getDef()const{
  return def;
}
int Hero::getSp()const{
  return sp;
}
int Hero::getCoin()const{
  return coin;
}

void Hero::hurt(const int damage) {
  hp -= damage;
}