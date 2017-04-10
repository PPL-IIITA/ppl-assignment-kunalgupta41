#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include <bits/stdc++.h>
#include<algorithm>
#include "input_q7.h"
#include "couple.h"
using namespace std;

int main()
{
	The_Choosy_Girl x[60];
	The_Generous_Boy y[90];
	int choice;
	srand(time(NULL));
	choice=((rand())%3)+1;
	cout<<"randomly generated choice is "<<choice<<endl;
	
	if(choice==1)
		create_couple_q7_1(x,y);
	else if(choice==2)
		create_couple_q7_2(x,y);
	else if(choice==3)
		create_couple_q7_3(x,y);
	else
		create_couple_q7_2(x,y);
	return 0;
}
