#ifndef _couple_h
#define _couple_h
#include <string>
using namespace std;
class couple
{
	private:
		string n1,n2;
		int h,c;
	public:
		string get_n_1();
		string get_n_2();
		int get_h();
		int get_c();
		void set_n_1(string);
		void set_n_2(string);
		void set_c(int);
		void set_h(int);

};
#endif