#ifndef _input_h
#define _input_h
#include "The_Miser_Boy.h"
#include "The_Generous_Boy.h"
#include "The_Geeks_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Normal_Girl.h"
#include "The_Desperate_Girl.h"

class xyz{
	friend void input();
	friend void create_couple(The_Choosy_Girl x[],The_Generous_Boy y[]);

};


void input();
void create_couple(The_Choosy_Girl x[],The_Generous_Boy y[]);
#endif
