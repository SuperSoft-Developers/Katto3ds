#pragma once

class Map {
public:
    static const int width = 10;
    static const int height = 10;

    int grid[height][width];

    Map();

    void load();
    bool isWall(int x, int y);
};
