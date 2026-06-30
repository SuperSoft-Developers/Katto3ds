#include "player.h"

Player::Player() {
    x = 10;
    y = 10;
    speed = 1.5f;
}

void Player::update() {
    // lógica futura (colisão etc)
}

void Player::moveLeft()  { x -= speed; }
void Player::moveRight() { x += speed; }
void Player::moveUp()    { y -= speed; }
void Player::moveDown()  { y += speed; }
