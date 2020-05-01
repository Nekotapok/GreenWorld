#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
class Player {
private:
	Image image;
	Texture texture;
	Sprite sprite;
	String file;
	float x, y, width, height;
public:
	Player(String File, float X, float Y, float Width, float Height){
		x = X; y = Y; width = Width; height = Height;
		file = File;
		image.loadFromFile("Content/Images/" + file);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setTextureRect(IntRect(0, 0, width, height));
		sprite.setPosition(x, y);
		
	}

	Sprite getSprite() {
		return sprite;
	}
};