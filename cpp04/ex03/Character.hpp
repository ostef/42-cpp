#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual const std::string &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
	Character ();

public:
	Character (const std::string &name);
	Character (const Character &other);
	~Character ();
	Character &operator= (const Character &other);

	const std::string &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string m_name;
	AMateria *m_items[4];
};

#endif
