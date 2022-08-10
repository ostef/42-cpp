#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap ();
	FragTrap (const std::string &name);
	~FragTrap ();

	void attack (const std::string &target);
	void highFiveGuys ();
};

#endif
