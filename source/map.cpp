#include "map.h"

Map::Map() {
    load();
}

void Map::load() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            grid[y][x] = 0;
        }
    }

    // paredes simples
    for (int i = 0; i < width; i++) {
        grid[0][i] = 1;
        grid[height - 1][i] = 1;
    }
}

bool Map::isWall(int x, int y) {
    if (x < 0 || y < 0 || x >= width || y >= height)
        return true;

    return grid[y][x] == 1;
}
