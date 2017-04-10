#include "The_Desperate_Girl.h"
#include<string>

string The_Desperate_Girl::get_name()
{
	return name;
}

int The_Desperate_Girl::get_attractiveness()
{
	return attractiveness;
}

int The_Desperate_Girl::get_intelligence()
{
	return intelligence;
}

int The_Desperate_Girl::get_main_budget()
{
	return main_budget;
}

bool The_Desperate_Girl::get_rel_status()
{
	return rel_status;
}

int The_Desperate_Girl::get_selection_criteria()
{
	return selection_criteria; 
}

void The_Desperate_Girl::set_name(string n)
{
	name=n;
}

void The_Desperate_Girl::set_attractiveness(int a)
{
	attractiveness=a;
}

void The_Desperate_Girl::set_intelligence(int intel)
{
	intelligence=intel;
}


void The_Desperate_Girl::set_main_budget(int budget)
{
	main_budget=budget;
}

void The_Desperate_Girl::set_rel_status(bool status)
{
	rel_status=status;
}

void The_Desperate_Girl::set_selection_criteria(int criteria)
{
	selection_criteria=criteria;
}
