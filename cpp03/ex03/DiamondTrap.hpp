#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap ();
	DiamondTrap (const std::string &name, const std::string &clap_name);
	DiamondTrap (const DiamondTrap &other);
	~DiamondTrap ();
	DiamondTrap &operator = (const DiamondTrap &other);

	void whoAmI ();
	using ScavTrap::attack;

private:
	std::string m_name;
	using FragTrap::m_hit_points;
	using ScavTrap::m_energy_points;
	using FragTrap::m_attack_damage;
};

#endif
