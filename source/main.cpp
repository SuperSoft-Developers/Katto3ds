#include <3ds.h>
#include "game.h"

int main() {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    Game game;

    while (aptMainLoop()) {
        game.update();

        printf("\x1b[1;1HPlayer: %.1f , %.1f\n", game.player.x, game.player.y);

        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
