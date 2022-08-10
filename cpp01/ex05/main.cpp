#include "Karen.hpp"

int main ()
{
	Karen karen = Karen ();
	karen.complain ("DEBUG");
	karen.complain ("INFO");
	karen.complain ("WARNING");
	karen.complain ("ERROR");
	karen.complain ("Yabadabadoo");
	
	return 0;
}
