#include "Player.h"
#include <string>


std::string Player::name() const {
	return _name;
}

void Player::name(std::string &name) {
	_name = name;
}

int Player::level() const {
	return _level;
}

void Player::level(int level) {
	_level = level;
}

int Player::speed() const {
	return _speed;
}
void Player::speed(int speed) {
	_speed = speed;
}

int Player::health() const {
	return _health;
}

int Player::attack() const {
	return _attack;
}

int Player::damage() const {
	return _damage;
}

void Player::takeDamage(int damage) {
    _damage = damage;
}

