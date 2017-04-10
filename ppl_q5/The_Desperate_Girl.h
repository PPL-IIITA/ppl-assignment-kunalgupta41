#ifndef _The_Desperate_Girl_h
#define _The_Desperate_Girl_h
#include<string>
using namespace std;
class The_Desperate_Girl
{
	private:
		string name;
		int attractiveness,intelligence,main_budget,rel_status,selection_criteria;

	public:

		
		string get_name();
		int get_attractiveness(); int get_intelligence();
		int get_main_budget(); bool get_rel_status();
		int get_selection_criteria(); void set_name(string);
		void set_attractiveness(int); void set_intelligence(int);
		void set_main_budget(int); void set_rel_status(bool);
		void set_selection_criteria(int);

};
#endif
