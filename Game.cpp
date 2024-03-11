#include "Game.h"
#include <iostream>

void Game::initialize(int xb,int yb,int w,int l) {
	int j = 0;
	int i = 0;
	//Game::xIndex=w;
	for(j<l;++j;){
		for (i < w; ++i;) {
			if(yb==0||yb==l){
				std::cout<<"+";
			}
			else if(xb==0||xb==w){
				std::cout<<"+";
			}
			else{
				std::cout<<" ";
			}		
			xb++;
		}
	yb++;
	}
}