#include "MateriaSource.hpp"

MateriaSource::MateriaSource ()
{
	for (int i = 0; i < 4; i += 1)
		m_materias[i] = NULL;
}

MateriaSource::MateriaSource (const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource ()
{
}

MateriaSource &MateriaSource::operator= (const MateriaSource &other)
{
	for (int i = 0; i < 4; i += 1)
		m_materias[i] = other.m_materias[i];

	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i += 1)
	{
		if (!m_materias[i])
		{
			m_materias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *src = NULL;
	for (int i = 0; i < 4; i += 1)
	{
		if (m_materias[i]->getType () == type)
		{
			src = m_materias[i];
			break;
		}
	}

	if (!src)
		return NULL;

	return src->clone ();
}
