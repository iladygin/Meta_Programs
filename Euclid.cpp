#include <iostream>

template <int fst, int snd>
class Euclid 
{
public:
    static const int tmp = snd ? Euclid<snd, fst % snd>::tmp : fst;
};

template <int fst>
class Euclid<fst, 0> 
{
public:
    static const int tmp = fst;
};

template <int fst>
class Euclid<0, fst> 
{
public:
    static const int tmp = fst;
};

template <int n>
class Print {};

int what = Print <Euclid<675, 825>::tmp>::pr;