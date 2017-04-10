#ifndef _The_Utility_Gifts_h
#define _The_Utility_Gifts_h
using namespace std;
class The_Utility_Gifts
{
	private:
		int util_value,util_class,value,price;
	public:
		int get_util_value();
		int get_util_class();
		int get_value();
		int get_price();
		void set_util_value(int);
		void set_util_class(int);
		void set_value(int);
		void set_price(int);

};
#endif