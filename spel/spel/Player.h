#pragma once
#include <string>

class Player {
public:

    Player(const std::string& name, int level,int speed,  int health, int attack, int damage)
        : _name(name), _level(level), _health(health), _attack(attack), _damage(damage) {
    }

    std::string name() const;
    void name(std::string&);
    int level() const;
    void level(int);
    void changeSpeed(int);
    int health() const;
    int attack() const;
    void takeDamage(int);
    int damage() const;

private:
    std::string _name;
    int _level;
    int _health;
    int _attack;
    int _damage;

};