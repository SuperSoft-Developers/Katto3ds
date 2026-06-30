#pragma once

#include "player.h"
#include "map.h"

class Game {
public:
    Player player;
    Map map;

    void update();
};
