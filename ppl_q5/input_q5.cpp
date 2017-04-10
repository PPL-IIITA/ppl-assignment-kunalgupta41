#include "input_q5.h"
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


void create_couple1(The_Choosy_Girl x[],The_Generous_Boy y[],The_Utility_Gifts z[])
{
	cout<<"using algorithm of question 1 "<<endl;
	fstream f;
	ofstream fi,fo;
	f.open("girls_file.txt");
	string name;
	int i,j;
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
	fi.open("output_5.txt");
	fo.open("couple_attr5.txt");
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


	fstream f4,f5;
		f4.open("gifts.txt");
		string gift_name;
		int price,type,value,lux_rating,difficulty,util_value,util_class;
		int ess=0,lux=0,util=0;
		for(i=0;i<=99;i++)
		{
			
			f4>>gift_name>>type>>price>>value;
			z[i].set_value(value);
			z[i].set_price(price);
			z[i].set_util_value(type);

		}
		
		f5.open("couple_attr5.txt");
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
		The_Utility_Gifts temp3;
		for(i=0;i<=99;i++)
		{
			for(j=i;j<=99;j++)
			{
				if(z[i].get_price() < z[j].get_price())
				{
					temp3=z[i];
					z[i]=z[j];
					z[j]=temp3;
				}
			}
		}


		couple cup[60];
		int s;
		ofstream f6,f7;
		
		f7.open("k_most_happy_q5.txt");
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(x[i].get_name());
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
		int k;
		srand(time(NULL));
		k=((rand())%16)+5;
		cout<<"randomly generated value of k is :";
		cout<<k<<endl;
		couple temp4;
		for(i=0;i<=59;i++)
		{
			for(j=i;j<=59;j++)
			{
				if(cup[i].get_h() < cup[j].get_h())
				{
					temp4=cup[i];
					cup[i]=cup[j];
					cup[j]=temp4;
				}
			}
		}
		cout<<"according to the happiness of the couples, "<<k<<" most happiest couples are:"<<endl;
		for(i=0;i<k;i++)
		{
			cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_h()<<endl;
			f7<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_h()<<endl;
		}
		f7.close();



	return;


}


void create_couple2(The_Choosy_Girl x[],The_Generous_Boy y[],The_Utility_Gifts z[])
{
	cout<<"using new algorithm of question 5 "<<endl;

	int i,j,flag;
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

	fi.open("output_5.txt");
	fo.open("couple_attr5.txt");
	The_Choosy_Girl temp;
	for(i=0;i<=59;i++)
	{
		for(j=i;j<=59;j++)
		{
			if(x[i].get_main_budget()>x[j].get_main_budget())
			{

				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	The_Generous_Boy temp1;
	for(i=0;i<=89;i++)
	{
		for(j=i;j<=89;j++)
		{
			if(y[i].get_attractiveness()>y[j].get_attractiveness())
			{

				temp1=y[i];
				y[i]=y[j];
				y[j]=temp1;
			}
		}
	}


	int count=0;
	for(i=0;i<=120;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<=89;j++)
			{
				if(y[j].get_rel_status()==false&&x[i/2].get_rel_status()==false&&x[i/2].get_main_budget()<=y[j].get_budget()&&y[j].get_min_att_girl()<=x[i/2].get_attractiveness())
				{
					x[i/2].set_rel_status(true);
					y[j].set_rel_status(true);
					cout<<y[j].get_name()<<" "<<x[i/2].get_name()<<" "<<endl;
					fi<<x[i/2].get_name()<<" "<<y[j].get_name()<<endl;

			fo<<y[j].get_name()<<" "<<rand()%3+1<<" "<<y[j].get_attractiveness()<<" "<<y[j].get_intelligence()<<" "<<y[j].get_budget()<<" "<<x[i/2].get_name()<<" "<<rand()%3+1<<" "<<x[i/2].get_attractiveness()<<" "<<x[i/2].get_intelligence()<<" "<<x[i/2].get_main_budget()<<endl;
					break;
				}
			}

		}
		else
		{
			int cuattraction=-999,ind=-1;
			for(j=0;j<=59;j++)
			{
				if(x[j].get_rel_status()==false&&y[i/2].get_rel_status()==false&&x[j].get_main_budget()<=y[i/2].get_budget()&&x[j].get_attractiveness()>cuattraction)
				{
					ind=j;
					cuattraction=x[j].get_attractiveness();
				}
			}
			if(ind!=-1)
			{
				x[ind].set_rel_status(true);
				y[i/2].set_rel_status(true);
				cout<<y[i/2].get_name()<<" "<<x[ind].get_name()<<" "<<endl;
				fi<<x[ind].get_name()<<" "<<y[i/2].get_name()<<endl;

			fo<<y[i/2].get_name()<<" "<<rand()%3+1<<" "<<y[i/2].get_attractiveness()<<" "<<y[i/2].get_intelligence()<<" "<<y[i/2].get_budget()<<" "<<x[ind].get_name()<<" "<<rand()%3+1<<" "<<x[ind].get_attractiveness()<<" "<<x[ind].get_intelligence()<<" "<<x[ind].get_main_budget()<<endl;
			}
		}
	}



fi.close();
fo.close();

fstream f4,f5;
		f4.open("gifts.txt");
		string gift_name;
		int price,type,value,lux_rating,difficulty,util_value,util_class;
		int ess=0,lux=0,util=0;
		for(i=0;i<=99;i++)
		{
			
			f4>>gift_name>>type>>price>>value;
			z[i].set_value(value);
			z[i].set_price(price);
			z[i].set_util_value(type);

		}
		
		f5.open("couple_attr5.txt");
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
		The_Utility_Gifts temp3;
		for(i=0;i<=99;i++)
		{
			for(j=i;j<=99;j++)
			{
				if(z[i].get_price() < z[j].get_price())
				{
					temp3=z[i];
					z[i]=z[j];
					z[j]=temp3;
				}
			}
		}


		couple cup[60];
		int s;
		ofstream f6,f7;
		
		f7.open("k_most_happy_q5.txt");
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(x[i].get_name());
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
		int k;
		srand(time(NULL));
		k=((rand())%16)+5;
		cout<<"randomly generated value of k is :";
		cout<<k<<endl;
		couple temp4;
		for(i=0;i<=59;i++)
		{
			for(j=i;j<=59;j++)
			{
				if(cup[i].get_h() < cup[j].get_h())
				{
					temp4=cup[i];
					cup[i]=cup[j];
					cup[j]=temp4;
				}
			}
		}
		cout<<"according to the happiness of the couples, "<<k<<" most happiest couples are:"<<endl;
		for(i=0;i<k;i++)
		{
			cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_h()<<endl;
			f7<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<" "<<cup[i].get_h()<<endl;
		}
		f7.close();

return;


}
