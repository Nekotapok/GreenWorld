#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SpriteManager.h"

class Tile : public SpriteManager{

	Tile(String &file, int X, int Y, int Width, int Height, String Name) : SpriteManager(file, x, y, width, height, name){
		file = "Dirt.png";
	}
};