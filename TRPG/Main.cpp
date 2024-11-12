#include <iostream>
#include "allClasses.h"

int main()
{
	Warrior war1;
	Wizard wiz1;
	Cleric cle1;
	Rogue rog1;

	std::cout << "Warrior Gondorf" << std::endl;
	std::cout << "HP: " << war1.GetCurrentHP() << " / " << war1.GetMaxHP() << std::endl;
	std::cout << "STR: " << war1.GetStrength() << std::endl;
	std::cout << "INT: " << war1.GetIntellect() << std::endl;
	std::cout << "DEX: " << war1.GetDexterity() << std::endl;
	
}
