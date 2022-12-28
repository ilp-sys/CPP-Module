#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

typedef std::vector<int>::iterator iter;

class Span
{
    Span();

    std::vector<int> _arr;
    unsigned int	   _capa;
    unsigned int	   _size;
  public:
    Span(unsigned int);
    Span(const Span&);
    Span(iter&, iter&);
    ~Span();

    Span& operator=(const Span&);

    unsigned int	    getCapa() const ;
    unsigned int	    getSize() const ;
    std::vector<int>	getArr() const;

    void	            addNumber(unsigned int);
    unsigned int	    longestSpan();
    unsigned int	    shortestSpan();

    class SpanFullException;
};

#endif
