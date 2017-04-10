#include "The_Utility_Gifts.h"
#include<string>


int The_Utility_Gifts::get_util_value()
{
	return util_value;
}

int The_Utility_Gifts::get_util_class()
{
	return util_class;
}

int The_Utility_Gifts::get_value()
{
	return value;
}

int The_Utility_Gifts::get_price()
{
	return price;
}

int The_Utility_Gifts::get_marked()
{
	return marked;
}

int The_Utility_Gifts::get_marked1()
{
	return marked1;
}

int The_Utility_Gifts::get_marked2()
{
	return marked2;
}

void The_Utility_Gifts::set_util_value(int value)
{
	util_value=value;
}

void The_Utility_Gifts::set_util_class(int u_class)
{
	util_class=u_class;

}

void The_Utility_Gifts::set_value(int v)
{
	value=v;
}

void The_Utility_Gifts::set_marked(int m)
{
	marked=m;
}

void The_Utility_Gifts::set_marked1(int m)
{
	marked1=m;
}

void The_Utility_Gifts::set_marked2(int m)
{
	marked2=m;
}

void The_Utility_Gifts::set_price(int p)
{
	price=p;
}
