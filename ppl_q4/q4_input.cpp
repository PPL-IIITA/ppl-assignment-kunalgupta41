#include "q4_input.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "q4_input.h"
#include <fstream>
#include <iostream>
#include <ctime>
#include "The_Choosy_Girl.h"
#include "The_Generous_Boy.h"

using namespace std;


void make_couple(The_Choosy_Girl x[],The_Generous_Boy y[])
{
	int i,k;
	string name1,name2;
	fstream f;
	f.open("k_least_happy.txt");
	f>>k;
	for(i=0;i<k;i++)
	{
		f>>name1>>name2;
		x[i].set_name(name2);
		y[i].set_name(name1);
	}
	f.close();


	ofstream fi;
	fi.open("q4_output.txt");
	cout<<"the girls who broke up are now paired as:"<<endl;
	for(i=0;i<k;i++)
	{
		fi<<x[i].get_name()<<" "<<"now gets"<<" "<<y[(i+1)%k].get_name()<<endl;
		cout<<x[i].get_name()<<" "<<"now gets"<<" "<<y[(i+1)%k].get_name()<<endl;
		
	}
	fi.close();
	return;

}
