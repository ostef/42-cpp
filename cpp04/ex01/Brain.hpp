#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	Brain ();
	Brain (const Brain &other);
	~Brain ();
	Brain &operator= (const Brain &other);

private:
	std::string m_ideas[100];
};

#endif
