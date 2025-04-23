#include <SDL3/SDL_init.h>

int main() {
  SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO);

  return 0;
}
