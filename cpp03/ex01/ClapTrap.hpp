#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap ();
	ClapTrap (const std::string &name);
	ClapTrap (const ClapTrap &other);
	~ClapTrap ();
	ClapTrap &operator = (const ClapTrap &other);

	void attack (const std::string &target);
	void takeDamage (unsigned int amount);
	void beRepaired (unsigned int amount);
	void setAttackDamage (unsigned int damage);

protected:
	std::string m_name;
	unsigned int m_hit_points;
	unsigned int m_energy_points;
	unsigned int m_attack_damage;
};

#endif
