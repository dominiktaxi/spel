#include "Burn.h"

Burn::Burn(int effect) : Effect() {}

void Burn::apply(Player& player)
{
	player.takeDamage( _damage );
}