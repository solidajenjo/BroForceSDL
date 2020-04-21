#include "input.h"
#include "SDL_events.h"

bool Input_t::Update(){
    SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_KEYDOWN:
			quit = event.key.keysym.sym == SDLK_ESCAPE;
			break;

		case SDL_QUIT:
			quit = true;
			break;
/*
		case SDL_MOUSEBUTTONDOWN:
		{
			if (event.button.button == SDL_BUTTON_LEFT)
				leftClick = true;
			else if (event.button.button == SDL_BUTTON_RIGHT)
				rightClick = true;
			break;
		}
		case SDL_MOUSEBUTTONUP:
		{
			if (event.button.button == SDL_BUTTON_LEFT)
				leftClick = false;
			else if (event.button.button == SDL_BUTTON_RIGHT)
				rightClick = false;
			break;
		}
        */
		default:
			break;
		}
	}
    return true;
}