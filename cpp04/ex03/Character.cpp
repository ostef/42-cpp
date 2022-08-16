#include "Character.hpp"

Character::Character () : m_name ("")
{
	for (int i = 0; i < 4; i += 1)
		m_items[i] = NULL;
}

Character::Character (const std::string &name) : m_name (name)
{
	for (int i = 0; i < 4; i += 1)
		m_items[i] = NULL;
}

Character::Character (const Character &other)
{
	*this = other;
}

Character::~Character ()
{
	for (int i = 0; i < 4; i += 1)
		delete m_items[i];
}

Character &Character::operator= (const Character &other)
{
	for (int i = 0; i < 4; i += 1)
		delete m_items[i];
	for (int i = 0; i < 4; i += 1)
	{
		if (other.m_items[i])
			m_items[i] = other.m_items[i]->clone ();
	}

	return *this;
}

const std::string &Character::getName() const
{
	return m_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i += 1)
	{
		if (!m_items[i])
		{
			m_items[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	m_items[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return;
	if (m_items[idx])
		m_items[idx]->use (target);
}
