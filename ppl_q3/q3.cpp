#include "The_Miser_Boy.h"
#include "The_Generous_Boy.h"
#include "The_Geeks_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Normal_Girl.h"
#include "The_Desperate_Girl.h"
#include "input.h"
#include "input_gifts.h"
#include "The_Luxury_Gifts.h"
#include "The_Essential_Gifts.h"
#include "The_Utility_Gifts.h"
#include "couple.h"
#include<string>
using namespace std;
int main()
{
	
	The_Utility_Gifts x[100];
	input_gifts();
	gifting(x);
	return 0;
}