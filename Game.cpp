#include "Game.h"
#include <iostream>

void Game::initialize(int size) {
	int i = size;
	for (size > 0; --size;) {
		std::cout<<"+";
	}
	std::cout << std::endl;
	size = i;
	for(i > 0;--i;){
		std::cout << "+";
		for (size > 2; --size;) {
			std::cout << " ";
		}
		std::cout <<"+" << std::endl;
	}

	for (size > 0; --size;) {
		std::cout << "+";
	}
	
}