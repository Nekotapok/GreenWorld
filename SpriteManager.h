#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class SpriteManager {
public:
	Image image;
	Texture texture;
	Sprite sprite;
	String File, name;
	int width, height, x, y;

	SpriteManager(String &file, int X, int Y, int Width, int Height, String Name) {
		File = file;
		width = Width; height = Height; x = X; y = Y;
		name = Name;

		image.loadFromFile("Content/Images" + File);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setTextureRect(IntRect(x, y, width, height));
	}
};
