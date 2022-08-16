#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource ();
	MateriaSource (const MateriaSource &other);
	~MateriaSource ();
	MateriaSource &operator= (const MateriaSource &other);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *m_materias[4];
};

#endif
