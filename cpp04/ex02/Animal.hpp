#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal ();
	Animal (const Animal &other);
	virtual ~Animal ();

	Animal &operator = (const Animal &other);

	std::string getType () const;
	virtual void makeSound () const = 0;

protected:
	Animal (const std::string &type);

	std::string m_type;
};

#endif
