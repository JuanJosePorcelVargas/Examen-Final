#include "soilHielo.h"
#include "../Const.h"

soilHielo::soilHielo(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer)
    : Soil(_texture, _renderer)
{

}

void soilHielo::update(const unsigned int delta)
{
    Soil::update(delta);
}


