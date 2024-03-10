#include "Game.h"
#include <iostream>

void Game::initialize(int xb,int yb,int w,int l) {
	int b = l;
	int i = l;
	const int xpos;
	for (l > 0; --l;) {
		std::cout<<"+";
	}
	std::cout << std::endl;
	l = i;
	for(i > 0;--i;){
		std::cout << "+";
		for (l >= 2; --l;) {
			std::cout << " ";
		}
		std::cout <<"+" << std::endl;
		l = o;
	}
	l = o;
	for (l > 0; --l;) {
		std::cout << "+";
	}
	
}