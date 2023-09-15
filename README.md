# C++ (starter)

<img src="https://global-prog.com/wp-content/uploads/2019/07/cpp-e1572092855695.jpg.webp"/>

C++ is the first programming language that I have learned.

My Editor for C++ is Code::Blocks but you can use visual studio code as well.
If you want to use Visual studio, you should first download some extensions for C++.

In this repository I wanna put some simple C++ codes.

It's a good language to start studying.

### Give star⭐ if it was useful 😉

```cpp
cpp
#include <SDL2/SDL.h>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// Initialize SDL and create the game window
bool init()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_Log("SDL could not initialize! SDL_Error: %s", SDL_GetError());
        return false;
    }

    SDL_Window* window = SDL_CreateWindow("Football Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr)
    {
        SDL_Log("Window could not be created! SDL_Error: %s", SDL_GetError());
        return false;
    }

    return true;
}

int main(int argc, char* args[])
{
    if (!init())
    {
        return 1;
    }

    // Game loop
    bool quit = false;
    SDL_Event e;
    while (!quit)
    {
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
        }

        // Game logic

        // Rendering

        // Update the screen
        SDL_RenderPresent(renderer);
    }

    // Clean up and exit the game
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
```
