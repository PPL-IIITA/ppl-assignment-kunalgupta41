#include "couple.h"
#include <string>
using namespace std;

string couple::get_n_1()
{
	return n1;
}

string couple::get_n_2()
{
	return n2;
}

int couple::get_h()
{
	return h;
}

int couple::get_c()
{
	return c;
}

void couple::set_n_1(string na1)
{
	n1=na1;
}

void couple::set_n_2(string na2)
{
	n2=na2;
}

void couple::set_h(int ha)
{
	h=ha;
}

void couple::set_c(int ca)
{
	c=ca;
}
