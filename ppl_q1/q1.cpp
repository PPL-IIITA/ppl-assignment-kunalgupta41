#include "The_Miser_Boy.h"
#include "The_Generous_Boy.h"
#include "The_Geeks_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Normal_Girl.h"
#include "The_Desperate_Girl.h"
#include "input.h"
#include<string>
using namespace std;
int main()
{
	The_Choosy_Girl x[60];
	The_Generous_Boy y[90];
	input();
	create_couple(x,y);
	return 0;
}
