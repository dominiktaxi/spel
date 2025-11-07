#pragma once
class Effect
{
public:
	Effect() = default;
	virtual void apply(Player&) = 0;
protected:
};

