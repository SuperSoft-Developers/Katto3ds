#include "game.h"
#include <3ds.h>

void Game::update() {
    hidScanInput();
    u32 kDown = hidKeysDown();

    if (kDown & KEY_LEFT)  player.moveLeft();
    if (kDown & KEY_RIGHT) player.moveRight();
    if (kDown & KEY_UP)    player.moveUp();
    if (kDown & KEY_DOWN)  player.moveDown();
}
