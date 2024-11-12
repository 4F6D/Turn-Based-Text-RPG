#pragma once
#include "hp.h"
#include "statblock.h"

class Rogue : public hp, public StatBlock {

public:
	static const hptype HPGROWTH = (hptype)8u;
	static const stattype BASESTR = (stattype)2u;
	static const stattype BASEINT = (stattype)1u;
	static const stattype BASEDEX = (stattype)3u;

	Rogue() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT, BASEDEX) {}


private:


};