#include "Burn.h"

void Burn::apply(Player& player)
{
	player.changeSpeed( _effect );
}