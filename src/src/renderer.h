#ifndef RENDERER_H
#define RENDERER_H

#include <memory>
#include <vector>
#include <mutex>

#include "SDL.h"
#include "food.h"
#include "snake.h"

using namespace std;

class Renderer {
   public:
    Renderer(const std::size_t screen_width, const std::size_t screen_height, const std::size_t grid_width, const std::size_t grid_height);
    ~Renderer();

    void Render(Snake const snake, unique_ptr<Food> const &food);
    void RenderFood(unique_ptr<Food> const &food, SDL_Rect &block);
    void RenderSnake(Snake const snake, SDL_Rect &block);
    void UpdateWindowTitle(int score, int fps);

   private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;
    mutex _mutex;
    const std::size_t screen_width;
    const std::size_t screen_height;
    const std::size_t grid_width;
    const std::size_t grid_height;
};

#endif