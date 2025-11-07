#include "Slow.h"

Slow::Slow(int effect) : Effect(effect) {}

void Slow::apply(Player& player)
{
	player.changeSpeed( _effect );
}