#ifndef _The_Generous_Boy_h
#define _The_Generous_Boy_h
#include<string>
using namespace std;
class The_Generous_Boy
{
	

		private:
			
		string name;
		int attractiveness,intelligence,budget,min_att_girl,rel_status;
		
		public:
		string get_name();
		int get_attractiveness(); int get_intelligence();
		int get_budget(); int get_min_att_girl();
		bool get_rel_status(); void set_name(string);
		void set_attractiveness(int); void set_intelligence(int);
		void set_budget(int); void set_min_att_girl(int);
		void set_rel_status(bool);

};
#endif
