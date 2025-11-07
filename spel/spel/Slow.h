#pragma once
#include "Effect.h"
class Slow : public Effect
{
public:
	Slow(int);
	void apply(Player&) override;

private:
	
};

