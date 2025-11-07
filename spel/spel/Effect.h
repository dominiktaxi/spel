#pragma once
class Effect
{
public:
	Effect( int effect );
	virtual void apply(Player&) = 0;
protected:
	int _effect;
};

