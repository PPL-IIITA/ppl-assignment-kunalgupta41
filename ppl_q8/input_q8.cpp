#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "input_q8.h"
#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"
#include "The_Utility_Gifts.h"
#include "couple.h"

using namespace std;

void gifting_1(The_Utility_Gifts x[])
{

		cout<<"using the algorithm in question 2"<<endl;
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
		f6.open("output_8.txt");
		//f7.open("k_least_happy.txt");
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(z[i].get_name());
			cout<<endl;
			cout<<y[i].get_name()<<" "<<z[i].get_name()<<" gets gifts"<<endl;
			f6<<endl;
			f6<<y[i].get_name()<<" "<<z[i].get_name()<<"gets gifts"<<endl;
			if(y[i].get_min_att_girl()==1)
			{
				s=0;
				for(j=0;j<=99;j++)
				{
					s+=x[j].get_price();
					cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
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
					cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
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
					cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					if(s>z[i].get_main_budget())
						break;

				}
			}

		}

			return;
}		




void gifting_2(The_Utility_Gifts x[])
{
	cout<<"using new algorithm"<<endl;
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
				if(x[i].get_price() > x[j].get_price())
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
		f6.open("output_8.txt");
		//f7.open("k_least_happy.txt");

		int a;
		for(a=0;a<99;a++)
		{
			x[a].set_marked(0);
			x[a].set_marked1(0);
			x[a].set_marked2(0);

		}
		for(i=0;i<60;i++)
		{

			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(z[i].get_name());
			cout<<endl;
			f6<<endl;
			cout<<y[i].get_name()<<" "<<z[i].get_name()<<" gets gifts"<<endl;
			
			f6<<y[i].get_name()<<" "<<z[i].get_name()<<"gets gifts"<<endl;
			if(y[i].get_min_att_girl()==1)
			{

				s=0;
				int check_1=0,check_2=0,check_3=0;
				for(j=0;j<=99;j++)
				{
					
					if(x[j].get_util_value()==1 && check_1==0)
					{
						x[j].set_marked(1);

						check_1=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==2 && check_2==0)
					{
						x[j].set_marked(1);

						check_2=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==3 && check_3==0)
					{
						x[j].set_marked(1);
						check_3=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}

				}

				if(s<y[i].get_budget())
				{
					for(j=0;j<=99;j++)
					{
						if(x[j].get_marked()==0)
						{
							if(s>2*z[i].get_main_budget())
								break;
							s+=x[j].get_price();
							cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
							
						}
					}
				}




			}

			else if(y[i].get_min_att_girl()==2)
			{

				s=0;
				int check_1=0,check_2=0,check_3=0;
				for(j=0;j<=99;j++)
				{
					
					if(x[j].get_util_value()==1 && check_1==0)
					{
						x[j].set_marked1(1);

						check_1=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==2 && check_2==0)
					{
						x[j].set_marked1(1);

						check_2=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==3 && check_3==0)
					{
						x[j].set_marked1(1);
						check_3=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}

				}

				if(s<y[i].get_budget())
				{
					for(j=0;j<=99;j++)
					{
						if(x[j].get_marked1()==0)
						{
							if(s>z[i].get_main_budget())
								break;
							s+=x[j].get_price();
							cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
							
						}
					}
				}




			}



			else if(y[i].get_min_att_girl()==3)
			{

				s=0;
				int check_1=0,check_2=0,check_3=0;
				for(j=0;j<=99;j++)
				{
					
					if(x[j].get_util_value()==1 && check_1==0)
					{
						x[j].set_marked2(1);

						check_1=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==2 && check_2==0)
					{
						x[j].set_marked2(1);

						check_2=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}


					if(x[j].get_util_value()==3 && check_3==0)
					{
						x[j].set_marked2(1);
						check_3=1;
						s+=x[j].get_price();
						cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
					
					}

				}

				if(s<y[i].get_budget())
				{
					for(j=0;j<=99;j++)
					{
						if(x[j].get_marked2()==0)
						{
							if(s>z[i].get_main_budget())
								break;
							s+=x[j].get_price();
							cout<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
						f6<<"type "<<x[j].get_util_value()<<" "<<"price "<<x[j].get_price()<<" "<<"value "<<x[j].get_value()<<endl;
							
						}
					}
				}

			}

		}

			return;
}
