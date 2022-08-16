#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string m_type;

private:
	AMateria ();

public:
	AMateria (const std::string &type);
	AMateria (const AMateria &other);
	virtual ~AMateria ();
	AMateria &operator= (const AMateria &other);

	const std::string &getType () const;

	virtual AMateria *clone () const = 0;
	virtual void use (ICharacter &target);
};

#endif
