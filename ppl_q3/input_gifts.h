#ifndef _input_gifts_h
#define _input_gifts_h
#include "The_Miser_Boy.h"
#include "The_Generous_Boy.h"
#include "The_Geeks_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Normal_Girl.h"
#include "The_Desperate_Girl.h"
#include "The_Utility_Gifts.h"
#include "couple.h"
class uvw{
	friend void input_gifts();
	friend void gifting(The_Utility_Gifts x[]);
};

void input_gifts();
void gifting(The_Utility_Gifts x[]);
#endif