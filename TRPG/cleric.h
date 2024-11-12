#pragma once
#include "hp.h"
#include "statblock.h"

class Cleric : public hp, public StatBlock {

public:
	static const hptype HPGROWTH = (hptype)13u;
	static const stattype BASESTR = (stattype)2u;
	static const stattype BASEINT = (stattype)3u;
	static const stattype BASEDEX = (stattype)1u;

	Cleric() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT, BASEDEX) {}

private:


};