#include <iostream>
#include <stdlib.h>

#define SDL_MAIN_HANDLED
#include <SDL.h>

int main(int argc, char* argv[])
{
	SDL_Window* window = SDL_CreateWindow("Welcome to the New World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Renderer* render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_Init(SDL_INIT_EVERYTHING);

	bool isRunning = true;
	while (isRunning) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				isRunning = false;
			}
		}
	}
	return 0;
}