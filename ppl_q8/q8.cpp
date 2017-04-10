
#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "input_q8.h"
#include "The_Utility_Gifts.h"
#include "couple.h"
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int choice;
	srand(time(NULL));
	choice=((rand())%2)+1;
	The_Utility_Gifts x[100];
	
	cout<<"randomly generated choice is "<<choice<<endl;
	if(choice==1)   //choice 1 is for algorithm of ques 1
		gifting_1(x);
	else if(choice==2)   //choice 2 is for new algo i which each type of gift is to be distributed first
		gifting_2(x);
	else		// default choice
		gifting_2(x);
		
	return 0;
}
