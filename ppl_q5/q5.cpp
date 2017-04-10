#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Utility_Gifts.h"
#include "input_q5.h"
#include "couple.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	The_Choosy_Girl x[60];
	The_Generous_Boy y[90];
	The_Utility_Gifts z[100];
	int c;
	c=(((rand())%2)+1);
	
	if(c==1)
		create_couple1(x,y,z);
	else if(c==2)
		create_couple2(x,y,z);
	else
		create_couple2(x,y,z);
		
	return 0;
}
