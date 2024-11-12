#pragma once
#include "hitpointtypes.h"

class hp
{
public:
	bool SetMaxHP(hptype new_max_hp)
	{
		if (new_max_hp < 1)
			return false;
	
		maxHP = new_max_hp;

		if (currentHP > maxHP)
			currentHP = maxHP;

		return true;
	}

	void TakeDamage(hptype damage)
	{
		if (damage > currentHP)
		{
			currentHP = 0;
			return;
		}
		
		currentHP -= damage;
	}

	void Heal(hptype amount)
	{
		if (amount + currentHP > maxHP)
		{
			currentHP = maxHP;
			return;
		}

		currentHP += amount;
	}

	hptype GetMaxHP()
	{
		return maxHP;
	}

	hptype GetCurrentHP()
	{
		return currentHP;
	}

private:
	hptype currentHP;
	hptype maxHP;
};