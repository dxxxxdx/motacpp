//
// Created by zys on 25-3-19.
//

#include "../../include/ImgManager.h"
std::string ImgManager::ImgPath(const std::string& imgName) {
	std::string absPath = "../assets/" + imgName + ".png";
	return absPath;
}

