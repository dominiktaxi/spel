#pragma once
#include <string>

class Player {
public:

    Player(const std::string& name, int level,int speed,  int health, int attack, int damage)
        : _name(name), _level(level), _health(health), _attack(attack), _damage(damage) {
    }

    std::string name() const { return _name; }
    int level() const { return _level; }
	void changeSpeed(int speed) { /* Implementation for changing speed */ }
    int health() const { return _health; }
    int attack() const { return _attack; }
	void takeDamage(int damage) { _health -= damage; }
	int damage() const { return _damage; }

private:
    std::string _name;
    int _level;
    int _health;
    int _attack;
    int _damage;

};