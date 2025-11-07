#include "Slow.h"

Slow::Slow(int slow) : _slow(slow) {}

void Slow::apply(Player& player)
{
	player.changeSpeed( _slow );
}