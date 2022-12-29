#include "Span.hpp"
#include <algorithm>
#include <vector>

Span::Span(){}

Span::Span(const Span& other){ *this = other; }

Span::Span(unsigned int n):_capa(n) {}

Span& Span::operator=(const Span &other)
{
  if (this != &other)
  {
    _arr = other.getArr();
    _capa = other.getCapa();
  }
  return (*this);
}

Span::Span(iter& it1, iter& it2):_capa(0)
{
  for (; it1 != it2; ++it1)
  {
      _arr.push_back(*it1);
      ++_capa;
  }
}

Span::~Span(){}

unsigned int Span::getCapa() const { return (_capa); }

std::vector<int> Span::getArr() const { return (_arr); }

class Span::SpanFullException : public std::exception
{
  public:
    const char* what() const throw() { return "Span Already Full"; }
};

void Span::addNumber(unsigned int num)
{
  if (_arr.size() + 1 > _capa)
    throw SpanFullException();
  _arr.push_back(num);
}

unsigned int Span::longestSpan()
{
  std::sort(_arr.begin(), _arr.end());
  return (*std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end()));
}

unsigned int Span::shortestSpan() 
{
  std::vector<int> result;

  std::sort(_arr.begin(), _arr.end());

  std::vector<int>::iterator it = _arr.begin();
  std::vector<int>::iterator it2 = ++_arr.begin();

  while (it2 != _arr.end())
  {
      result.push_back(*it2 - *it);
      it = it2;
      ++it2;
  }
  return (*std::min_element(result.begin(), result.end()));
}
