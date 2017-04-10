#include "input_q7.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
#include<algorithm>
#include "couple.h"

#include "The_Generous_Boy.h"
#include "The_Choosy_Girl.h"


using namespace std;
int binarySearch(string arr[], int l, int r, string x)
{

   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid].compare(x)==0)  return 1;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid].compare(x) > 0) return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}
bool acompare(couple lhs, couple rhs) 
{
 return lhs.get_n_1().compare(rhs.get_n_1()) < 0; 
}

/*bool bcompare(couple lhs,couple rhs)
{

}
*/

void create_couple_q7_1(The_Choosy_Girl x[],The_Generous_Boy y[])
{
	cout<<"with the help of array:"<<endl;
	ofstream f8;
	string b[10];
	int k;
	b[0]="Boy1",b[1]="Boy6",b[2]="Boy31",b[3]="Boy45",b[4]="Boy51",b[5]="Boy62",b[6]="Boy67",b[7]="Boy76",b[8]="Boy82",b[9]="Boy86";
	string name;
	int i;
	fstream f4,f5;
	f8.open("output_q7.txt");
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
		
		
		f5.close();

		couple cup[60];
		
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(x[i].get_name());
		}

		f8<<"status of some boys is :"<<endl;
		
		for(k=0;k<10;k++)
		{
			int ind,flag=0;
			for(i=0;i<60;i++)
			{
				if(cup[i].get_n_1()==b[k])
				{
					ind=i;
					flag=1;
					break;

				}

			}
			if(flag==0)
			{
				cout<<b[k]<<" is not committed to any girl(smart boy)"<<endl;
				f8<<b[k]<<" is not committed to any girl(smart boy)"<<endl;
			}
			if(flag==1)
			{
				f8<<b[k]<<"is committed to"<<" "<<cup[i].get_n_2()<<endl;
				cout<<b[k]<<"is committed to"<<" "<<cup[i].get_n_2()<<endl;
			}
		}

		 



return;
}




void create_couple_q7_2(The_Choosy_Girl x[],The_Generous_Boy y[])
{
	cout<<"with the help of binary search:"<<endl;
	string name;
	int i;
	ofstream f8;
	fstream f4,f5;
	f8.open("output_q7.txt");
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
		
		
		f5.close();

		couple cup[60];
		
		for(i=0;i<60;i++)
		{
			cup[i].set_n_1(y[i].get_name());
			cup[i].set_n_2(x[i].get_name());
		}


		/*for(i=0;i<60;i++)
   		{
   			cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<endl;
   		}
   		*/
		map<string,string> m;
		for(i=0;i<60;i++)
			m[cup[i].get_n_1()]=cup[i].get_n_2();

		/*for(i=0;i<60;i++)
			cout<<m[cup[i].get_n_1()]<<endl;
		*/
		cout<<endl;
   sort(cup, cup+60, acompare);
   string arr[60];
   for(i=0;i<60;i++)
   {
   	arr[i]=cup[i].get_n_1();
   }
   /*for(i=0;i<60;i++)
   {
   	cout<<cup[i].get_n_1()<<" "<<cup[i].get_n_2()<<endl;
    }
   	*/
   	   string b[10];
	int k;
	f8<<"status of some boys is :"<<endl;
	b[0]="Boy1",b[1]="Boy6",b[2]="Boy31",b[3]="Boy45",b[4]="Boy51",b[5]="Boy62",b[6]="Boy67",b[7]="Boy76",b[8]="Boy82",b[9]="Boy86";
   	   
		for(k=0;k<10;k++)
		{
   	   		int z=binarySearch(arr,0,59,b[k]);
   	   		if(z==1)
				{
   	   				cout<<b[k]<<" is committed to"<<" "<<m[b[k]]<<endl;
					f8<<b[k]<<" is committed to"<<" "<<m[b[k]]<<endl;
				}
   	   		if(z==-1)
				{

   	   				cout<<b[k]<<" is not committed to any girl"<<endl;
					f8<<b[k]<<" is not committed to any girl"<<endl;
				}

	}

f8.close();
		return;
		}	



void create_couple_q7_3(The_Choosy_Girl x[],The_Generous_Boy y[])
{
	cout<<"with the help of hashing:"<<endl;
	string name;
	int i;
	ofstream f8;
	f8.open("output_q7.txt");
	fstream f4,f5;
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
		
		
	f5.close();
	couple cup[60];
		f8<<"status of some boys is :"<<endl;
	for(i=0;i<60;i++)
	{
		cup[i].set_n_1(y[i].get_name());
		cup[i].set_n_2(x[i].get_name());
	}
	string b[10];

	b[0]="Boy1",b[1]="Boy6",b[2]="Boy31",b[3]="Boy45",b[4]="Boy51",b[5]="Boy62",b[6]="Boy67",b[7]="Boy76",b[8]="Boy82",b[9]="Boy86";

	map<string,string> m;
	for(i=0;i<60;i++)
		m[cup[i].get_n_1()]=cup[i].get_n_2();
	int k;
	for(k=0;k<10;k++)
	{
		if(m[b[k]].size()==0)
		{
		
			cout<<b[k]<<" is not committed to any girl"<<endl;
			f8<<b[k]<<" is not committed to any girl"<<endl;
		}
		else{

			cout<<b[k]<<" is committed to "<<m[b[k]]<<endl;
						f8<<b[k]<<" is committed to "<<m[b[k]]<<endl;
			}
	}


	return;
}
