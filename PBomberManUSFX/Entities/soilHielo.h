#pragma once
#include "Soil.h"
class soilHielo :
    public Soil
{
public:
    soilHielo(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer);
    virtual void update(const unsigned int delta) override;
};

