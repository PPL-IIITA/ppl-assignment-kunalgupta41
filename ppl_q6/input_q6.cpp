#include "input_q6.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "couple.h"

#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Utility_Gifts.h"

using namespace std;

void create_couple_q6(The_Choosy_Girl x[],The_Generous_Boy y[],The_Utility_Gifts z[])
{

	fstream f4,f5;
		f4.open("gifts.txt");
		string gift_name;
		int i,j,price,type,value,lux_rating,difficulty,util_value,util_class;
		int ess=0,lux=0,util=0;
		for(i=0;i<=99;i++)
		{
			
			f4>>gift_name>>type>>price>>value;
			z[i].set_value(value);
			z[i].set_price(price);
			z[i].set_util_value(type);

		}

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
					x[i].set_name(girl_name);
					x[i].set_selection_criteria(girl_type);
					x[i].set_attractiveness(girl_attractiveness);
					x[i].set_intelligence(girl_intelligence);	
					x[i].set_main_budget(girl_main_budget);
				}
		
		f4.close();
		f5.close();
		The_Utility_Gifts temp;
		for(i=0;i<=99;i++)
		{
			for(j=i;j<=99;j++)
			{
				if(z[i].get_price() < z[j].get_price())
				{
					temp=z[i];
					z[i]=z[j];
					z[j]=temp;
				}
			}
		}




		couple cup[60];
		int s;
		cout<<endl;
		ofstream f6,f7;
		
		cout<<"original couples are:"<<endl;
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(x[i].get_name());
			cout<<y[i].get_name()<<" "<<x[i].get_name()<<endl;
			if(y[i].get_min_att_girl()==1)
			{
				s=0;
				for(j=0;j<=99;j++)
				{
					s+=z[j].get_price();
					if(s>2*x[i].get_main_budget())
						break;
				}

			}

			else if(y[i].get_min_att_girl()==2)
			{

				s=0;
				for(j=0;j<=99;j++)
				{
					s+=z[j].get_price();
					if(s>x[i].get_main_budget())
						break;

				}
			}

			else if(y[i].get_min_att_girl()==3)
			{
				s=0;
				for(j=0;j<=99;j++)
				{
					s+=z[j].get_price();
					if(s>x[i].get_main_budget())
						break;

				}
			}
			int h,c;
			h=5*abs(y[i].get_budget()-x[i].get_main_budget());
			c=3*abs(y[i].get_intelligence()-x[i].get_intelligence());
			cup[i].set_h(h);
			cup[i].set_c(c);


		}
			
			srand(time(NULL));
						
			int t,w1,count =0,count1=0,w2;
			t=((rand())%20)+10;
			cout<<"randomly generated value of t is : "<<t<<endl;
			
			couple unhappy[60],happy[60];
			cout<<"couples with happiness less than t are:"<<endl;
			for(i=0;i<=59;i++)
			{
				if(cup[i].get_h() < t)
				{
					w1=count;					
					cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<endl;
					unhappy[w1].set_n_1(cup[i].get_n_1());
					unhappy[w1].set_n_2(cup[i].get_n_2());
					count++;	

				}
				else
				{
					w2=count1;
					happy[w2].set_n_1(cup[i].get_n_1());
					happy[w2].set_n_2(cup[i].get_n_2());
					count1++;

				}

			}
			ofstream f8;
			f8.open("new_couples.txt");
			cout<<"after alloting partners to girls and boys who broke up;new couples are:"<<endl;
			f8<<"the couples who broke up have now found their new partners as follows:"<<endl;
			for(i=0;i<count;i++)
			{
				cout<<unhappy[i].get_n_1()<<" "<<unhappy[(i+1)%count].get_n_2()<<endl;
				f8<<unhappy[i].get_n_1()<<" "<<unhappy[(i+1)%count].get_n_2()<<endl;
			}

			for(i=0;i<count1;i++)
			{
				cout<<happy[i].get_n_1()<<" "<<happy[i].get_n_2()<<endl;
				
			}
f8.close();

			printf("\n");

			return;
		



		
}
