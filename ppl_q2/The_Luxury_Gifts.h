#ifndef _The_Luxury_Gifts_h
#define _The_Luxury_Gifts_h
using namespace std;
class The_Luxury_Gifts
{
	private:
		int lux_rating,difficulty,value,price;
	public:
		
		
		int get_value();
		int get_price();
		
		void set_value(int);
		void set_price(int);

};
#endif