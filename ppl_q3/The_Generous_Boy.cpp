#include "The_Generous_Boy.h"
#include<string>



string The_Generous_Boy::get_name()
{
	return name;
}

int The_Generous_Boy::get_attractiveness()
{
	return attractiveness;

}

int The_Generous_Boy::get_intelligence()
{
	return intelligence;
}

int The_Generous_Boy::get_budget()
{
	return budget;
}

int The_Generous_Boy::get_min_att_girl()
{
	return min_att_girl;
}

bool The_Generous_Boy::get_rel_status()
{
	return rel_status;
}

void The_Generous_Boy::set_name(string n)
{
	name=n;
}

void The_Generous_Boy::set_attractiveness(int a)
{
	attractiveness=a;
}

void The_Generous_Boy::set_intelligence(int intel)
{
	intelligence=intel;
}

void The_Generous_Boy::set_budget(int bud)
{
	budget=bud;
}

void The_Generous_Boy::set_min_att_girl(int girl)
{
	min_att_girl=girl;
}

void The_Generous_Boy::set_rel_status(bool status)
{
	rel_status=status;
}
