#ifndef _input_q7_h
#define _input_q7_h
#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "couple.h"


class xyz{

	friend bool acompare(couple lhs,couple rhs);
	friend int binarySearch(string arr[], int l, int r, string x);
	friend void create_couple_q7_1(The_Choosy_Girl x[],The_Generous_Boy y[]);
	friend void create_couple_q7_2(The_Choosy_Girl x[],The_Generous_Boy y[]);
	friend void create_couple_q7_3(The_Choosy_Girl x[],The_Generous_Boy y[]);

};

int binarySearch(string arr[], int l, int r, string x);
bool acompare(couple lhs,couple rhs);
void create_couple_q7_1(The_Choosy_Girl x[],The_Generous_Boy y[]);
void create_couple_q7_2(The_Choosy_Girl x[],The_Generous_Boy y[]);
void create_couple_q7_3(The_Choosy_Girl x[],The_Generous_Boy y[]);
#endif
