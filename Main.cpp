
#include <stdio.h>

#include <stdlib.h>
#include <stdint.h>



#include "SDL.h"
#include "SDL_image.h"
const int SCREEN_WIDTH = 720;
const int SCREEN_HEIGHT = 480;
const char* DIR_IMAGE = "C:/Box/Box Sync/Data/Images/";

bool LoadImage(char* fn) {

}

int main(int argc, char* args[]){

	uint16_t* pixels;
	pixels = (uint16_t*)calloc(SCREEN_WIDTH * SCREEN_HEIGHT, sizeof(uint16_t));

	SDL_Window*		window = nullptr;
	SDL_Surface*	surface = nullptr;
	SDL_Event		event;

	SDL_Init(SDL_INIT_EVERYTHING);
	surface = SDL_SetVideoMode(SCREEN_W*SCREEN_SCALE, SCREEN_H*SCREEN_SCALE, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);



	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0);
	else{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{

			surface = SDL_GetWindowSurface(window);

			SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0x00, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(window);

			//Wait two seconds
			SDL_Delay(2000);
		}
	}

	//SDL_Load
	SDL_FreeSurface(surface);
	surface = nullptr;
	SDL_DestroyWindow(window);
	window = nullptr;
	SDL_Quit();


	return 0;
}


struct Actor {
	int x, y, w, h;
	int spr;
};