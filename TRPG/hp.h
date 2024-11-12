#pragma once
#include "typedef.h"

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
	hp()
	{
		currentHP = 1;
		maxHP = 1;
	}
	hp(hptype _currentHP, hptype _maxHP)
	{
		currentHP = _currentHP;
		maxHP = _maxHP;

		if (currentHP > maxHP)
			currentHP = maxHP;
	}

private:
	hptype currentHP;
	hptype maxHP;
};