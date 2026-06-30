#pragma once

class Player {
public:
    float x, y;
    float speed;

    Player();

    void update();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
};
