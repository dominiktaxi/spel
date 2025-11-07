#pragma once
#include "Effect.h"
class Burn : public Effect
{
public:
	Burn(int);
	void apply(Player&) override;
private:
	int _damage;
};

