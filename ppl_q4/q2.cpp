
#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "input_gifts.h"
#include "The_Utility_Gifts.h"
#include "couple.h"
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	The_Utility_Gifts x[100];
	input_gifts();
	gifting(x);
	return 0;
}
