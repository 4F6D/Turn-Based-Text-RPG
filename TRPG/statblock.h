#pragma once
#include "typedef.h"

struct StatBlock
{
	stattype Strength;
	stattype Intellect;
	stattype Dexterity;
	StatBlock()
	{ 
		Strength = (stattype)1u; 
		Intellect = (stattype)1u; 
		Dexterity = (stattype)1u;
	}

	explicit StatBlock(stattype s, stattype i, stattype d) 
	{ 
		Strength = s;
		Intellect = i;
		Dexterity = d;
	}

	stattype GetStrength() { return Strength; }
	stattype GetIntellect() { return Intellect; }
	stattype GetDexterity() { return Dexterity; }

};