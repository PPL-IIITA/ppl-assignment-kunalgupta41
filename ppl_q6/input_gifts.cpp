#include "input_gifts.h"
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
#include "The_Essential_Gifts.h"
#include "The_Luxury_Gifts.h"
#include "The_Utility_Gifts.h"
#include "couple.h"

using namespace std;

void input_gifts()
{
	srand(time(NULL));
	ofstream f3("gifts.txt");
	int i,j,type,price,value,lux_rating,difficulty,util_value,util_class,n=100;//type=1 for essential gift,2 for luxury gift and 3 for utility gifts
	for(i=1;i<=n;i++)
	{
		type=rand()%3+1;
		price=rand()%10+12;
		value=rand()%10+24;
		lux_rating=rand()%10+1;
		difficulty=rand()%10+11;
		util_value=rand()%50+50;
		util_class=rand()%70+50;

		if(i<n)
		{
			f3<< "Gift" << i <<" "<< type <<" "<< price <<" "<< value <<"\n";
		}
		else
		{
			f3<< "Gift" << i <<" "<< type <<" " <<price <<" "<< value;

		}

	}

	f3.close();


}


void gifting(The_Utility_Gifts x[])
	{
		fstream f4,f5;
		f4.open("gifts.txt");
		string gift_name;
		int i,j,price,type,value,lux_rating,difficulty,util_value,util_class;
		int ess=0,lux=0,util=0;
		for(i=0;i<=99;i++)
		{
			
			f4>>gift_name>>type>>price>>value;
			x[i].set_value(value);
			x[i].set_price(price);
			x[i].set_util_value(type);

		}
		The_Generous_Boy y[60];
		The_Choosy_Girl z[60];
		f5.open("couple_attr.txt");
		string boy_name,girl_name;
		int boy_type,boy_attractiveness,boy_intelligence,boy_budget,girl_type,girl_attractiveness,girl_intelligence,girl_main_budget;
		for(i=0;i<=59;i++)
				{
					f5>>boy_name>>boy_type>>boy_attractiveness>>boy_intelligence>>boy_budget>>girl_name>>girl_type>>girl_attractiveness>>girl_intelligence>>girl_main_budget;
					y[i].set_name(boy_name);
					y[i].set_min_att_girl(boy_type);
					y[i].set_attractiveness(boy_attractiveness);	
					y[i].set_intelligence(boy_intelligence);
					y[i].set_budget(boy_budget);
					z[i].set_name(girl_name);
					z[i].set_selection_criteria(girl_type);
					z[i].set_attractiveness(girl_attractiveness);
					z[i].set_intelligence(girl_intelligence);	
					z[i].set_main_budget(girl_main_budget);
				}
		
		f4.close();
		f5.close();
		The_Utility_Gifts temp;
		for(i=0;i<=99;i++)
		{
			for(j=i;j<=99;j++)
			{
				if(x[i].get_price() < x[j].get_price())
				{
					temp=x[i];
					x[i]=x[j];
					x[j]=temp;
				}
			}
		}
		
		couple cup[60];
		int s;
		cout<<endl;
		ofstream f6,f7;
		f6.open("output_2.txt");
		f7.open("k_least_happy.txt");
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(z[i].get_name());
			cout<<y[i].get_name()<<" "<<z[i].get_name()<<"gets"<<endl;
			f6<<y[i].get_name()<<" "<<z[i].get_name()<<"gets"<<endl;
			if(y[i].get_min_att_girl()==1)
			{
				s=0;
				for(j=0;j<=99;j++)
				{
					s+=x[j].get_price();
					cout<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					f6<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					if(s>2*z[i].get_main_budget())
						break;
				}

			}

			else if(y[i].get_min_att_girl()==2)
			{

				s=0;
				for(j=0;j<=99;j++)
				{
					s+=x[j].get_price();
					cout<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					f6<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					if(s>z[i].get_main_budget())
						break;

				}
			}

			else if(y[i].get_min_att_girl()==3)
			{
				s=0;
				for(j=0;j<=99;j++)
				{
					s+=x[j].get_price();
					cout<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					f6<<x[j].get_util_value()<<" "<<x[j].get_price()<<" "<<x[j].get_value()<<endl;
					if(s>z[i].get_main_budget())
						break;

				}
			}
			int h,c;
			h=5*abs(y[i].get_budget()-z[i].get_main_budget());
			c=3*abs(y[i].get_intelligence()-z[i].get_intelligence());
			cup[i].set_h(h);
			cup[i].set_c(c);
			f6<<endl;
			printf("\n");
		}
		int k;
		cout<<"give the value of k";
		cin>>k;
		couple temp1;
		for(i=0;i<=59;i++)
		{
			for(j=i;j<=59;j++)
			{
				if(cup[i].get_h() < cup[j].get_h())
				{
					temp1=cup[i];
					cup[i]=cup[j];
					cup[j]=temp1;
				}
			}
		}
		cout<<"according to the happiness of the couples"<<endl;
		for(i=0;i<k;i++)
		{
			cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_h()<<endl;
		}
		for(i=0;i<=59;i++)
		{
			for(j=i;j<=59;j++)
			{
				if(cup[i].get_c() < cup[j].get_c())
				{
					temp1=cup[i];
					cup[i]=cup[j];
					cup[j]=temp1;
				}
			}
		}
		cout<<"according to the compatibility of the couples"<<endl;
		for(i=0;i<k;i++)
		{
			cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_c()<<endl;
		}


		for(i=59;i>59-k;i--)
		{
			f7<<y[i].get_name()<<" "<<z[i].get_name()<<endl;
		}
		
		f7.close();

	}
