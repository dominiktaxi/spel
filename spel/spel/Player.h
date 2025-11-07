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
    int speed() const;
    void speed(int);
    int health() const;
    int attack() const;
    int damage() const;
    void takeDamage(int); 
    
private:
    std::string _name;
    int _level;
    int _speed;
    int _health;
    int _attack;
    int _damage;

}; 