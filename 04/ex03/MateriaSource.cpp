#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < MAX_SLOT; ++i)
	{
		_capa[i] = false;
		_slot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) { *this = other; }

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < MAX_SLOT; ++i)
		_capa[i]  = other.getCapaIdx(i);
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		delete _slot[i];
    _slot[i] = other.getSlotIdx(i);
	}
  return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_capa[i] == true)
		  delete _slot[i];
	}
}

void  MateriaSource::learnMateria(AMateria *materia)
{
  bool flag = true;

  if (materia->getType() != "ice" && materia->getType() != "cure")
  {
    std::cerr << "unknown type" << std::endl;
    return ;
  }

  //capacity check
  for (int i = 0; i < MAX_SLOT; ++i)
    flag |= _capa[i];
  if (flag == true) 
  {
    std::cerr << "Slot already full, can't learn anymore" << std::endl;
    return ;
  }

  //redundancy check
  for (int i = 0; i < MAX_SLOT; ++i)
  {
      if (_capa[i] && _slot[i]->getType() == materia->getType())
        flag = true;
  }
  if (flag == true)
  {
    std::cerr << "Type " << materia->getType() << " alreay exist" << std::endl;
    return;
  }

  //learning new materia
  for (int i = 0; i < MAX_SLOT; ++i)
  {
      if (_capa[i] == false)
      {
        if (materia->getType() == "cure")
          _capa[i] = new Cure();
        else
          _capa[i] = new Ice();
        break;
      }
  }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
  for (int i = 0; i < MAX_SLOT; ++i)
  {
      if (_capa[i] && _slot[i]->getType() == type)
        return (_slot[i]);
  }
  return (0);
}

bool MateriaSource::getCapaIdx(unsigned int idx) const
{
	if (idx >= MAX_SLOT)
	{
		std::cerr << "Index out of range" << std::endl;
		return (false);
	}
	return (_capa[idx]);
}

AMateria* MateriaSource::getSlotIdx(unsigned int idx) const
{
	if (idx >= MAX_SLOT)
	{
		std::cerr << "Index out of range" << std::endl;
		return (NULL);
	}
	return (_slot[idx]);
}
