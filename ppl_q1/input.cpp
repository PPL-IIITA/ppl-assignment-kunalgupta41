#include "input.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "The_Miser_Boy.h"
#include "The_Generous_Boy.h"
#include "The_Geeks_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Normal_Girl.h"
#include "The_Desperate_Girl.h"

using namespace std;


void input()
{
	srand(time(NULL));
	ofstream f1("girls_file.txt");
	int w,x,y,z,n,i,type;
	n=60;
	for(i=1;i<=n;i++)
	{
		type=rand()%3+1;
		w=rand()%500+120; //value of attractiveness
		x=rand()%20+10; //maintenance cost for girl
		y=rand()%150+40; //intelligence of girl
		z=rand()%3+1; //(most attractive ,most richest and most intelligent boy respectively )

		if(i<n)
		{
			f1<< "Girl" << i <<" "<< w <<" "<< x <<" "<< y <<" "<< z<<"\n";

		}
		else
		{
			f1<< "Girl" << i <<" "<< w <<" "<< x <<" "<< y <<" "<< z;
		}



	}

	f1.close();
	ofstream f2("boys_file.txt");


	n=90;
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			f2<< "Boy" << i <<" "<< rand()%400+200 <<" "<< rand()%40+20 <<" "<<rand()%200+50 <<" "<< rand()%200+100 <<"\n";
		}
		else
		{
			f2<< "Boy" << i <<" "<< rand()%400+200 <<" "<< rand()%40+20 <<" "<<rand()%200+50 <<" "<< rand()%200+100;
		}


	}

	f2.close();

}


void create_couple(The_Choosy_Girl x[],The_Generous_Boy y[])
{
	fstream f;
	ofstream fi,fo;
	f.open("girls_file.txt");
	string name;
	int attractive,p,q,main_cost,intelligence,preference,budget,min_attr;
	for(p=0;p<=59;p++)
	{
		f>>name>>attractive>>main_cost>>intelligence>>preference;
		x[p].set_name(name);
		x[p].set_attractiveness(attractive);
		x[p].set_intelligence(intelligence);
		x[p].set_main_budget(main_cost);
		x[p].set_rel_status(false);
		x[p].set_selection_criteria(preference);
	}
	f.close();
	f.open("boys_file.txt");
	for(p=0;p<=89;p++)
	{
		f>>name>>attractive>>budget>>intelligence>>min_attr;
		y[p].set_name(name);
		y[p].set_attractiveness(attractive);
		y[p].set_intelligence(intelligence);
		y[p].set_budget(budget);
		y[p].set_min_att_girl(min_attr);
		y[p].set_rel_status(false);
	}

	f.close();
	fi.open("output_1.txt");
	fo.open("couple_attr.txt");
	for(p=0;p<=59;p++)
	{
		if(x[p].get_selection_criteria()==1 && x[p].get_rel_status()==false)
		{
			int att=0,flag=-1;
			for(q=0;q<=89;q++)
			{
				if( (y[q].get_rel_status()==false) && (y[q].get_min_att_girl() <= x[p].get_attractiveness()) && (y[q].get_budget()>=x[p].get_main_budget())  )
				{
					if(y[q].get_attractiveness()>att)
					{
						att=y[q].get_attractiveness();
						flag=q;
					}
				}
			}

				y[flag].set_rel_status(true);
				x[p].set_rel_status(true);
				cout<<y[flag].get_name()<<" gets "<<x[p].get_name()<<"\n";
				fi<<x[p].get_name()<<" "<<y[flag].get_name()<<endl;
fo<<y[flag].get_name()<<" "<<rand()%3+1<<" "<<y[flag].get_attractiveness()<<" "<<y[flag].get_intelligence()<<" "<<y[flag].get_budget()<<" "<<x[p].get_name()<<" "<<rand()%3+1<<" "<<x[p].get_attractiveness()<<" "<<x[p].get_intelligence()<<" "<<x[p].get_main_budget()<<endl;

		}

		if(x[p].get_selection_criteria()==2 && x[p].get_rel_status()==false)
		{
			int rich=0,flag=-1;
			for(q=0;q<=89;q++)
			{
				if( (y[q].get_rel_status()==false) && (y[q].get_min_att_girl() <= x[p].get_attractiveness()) && (y[q].get_budget()>=x[p].get_main_budget())  )
				{
					if(y[q].get_budget()>rich)
					{
						rich=y[q].get_budget();
						flag=q;
					}
				}
			}

				y[flag].set_rel_status(true);
				x[p].set_rel_status(true);
				cout<<y[flag].get_name()<<" gets "<<x[p].get_name()<<"\n";
				fi<<x[p].get_name()<<" "<<y[flag].get_name()<<endl;

			fo<<y[flag].get_name()<<" "<<rand()%3+1<<" "<<y[flag].get_attractiveness()<<" "<<y[flag].get_intelligence()<<" "<<y[flag].get_budget()<<" "<<x[p].get_name()<<" "<<rand()%3+1<<" "<<x[p].get_attractiveness()<<" "<<x[p].get_intelligence()<<" "<<x[p].get_main_budget()<<endl;

		}


		if(x[p].get_selection_criteria()==3 && x[p].get_rel_status()==false)
		{
			int intel=0,flag=-1;
			for(q=0;q<=89;q++)
			{
				if( (y[q].get_rel_status()==false) && (y[q].get_min_att_girl() <= x[p].get_attractiveness()) && (y[q].get_budget()>=x[p].get_main_budget())  )
				{
					if(y[q].get_intelligence()>intel)
					{
						intel=y[q].get_intelligence();
						flag=q;
					}
				}
			}

				y[flag].set_rel_status(true);
				x[p].set_rel_status(true);
				cout<<y[flag].get_name()<<" gets "<<x[p].get_name()<<"\n";
				fi<<x[p].get_name()<<" "<<y[flag].get_name()<<endl;
	fo<<y[flag].get_name()<<" "<<rand()%3+1<<" "<<y[flag].get_attractiveness()<<" "<<y[flag].get_intelligence()<<" "<<y[flag].get_budget()<<" "<<x[p].get_name()<<" "<<rand()%3+1<<" "<<x[p].get_attractiveness()<<" "<<x[p].get_intelligence()<<" "<<x[p].get_main_budget()<<endl;
		}
	}
	fi.close();
	fo.close();


	return;


}
