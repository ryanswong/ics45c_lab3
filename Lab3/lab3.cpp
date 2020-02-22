#include "MovieManager.h"

int main()
{
	//contruct MovieManager and calls run
	Renter x;
	Renter y(123, "ryan", "wong");
	Renter z(456, "jinsoo", "song");
	Renter z2(124, "jinsoo", "song");
	Renter z3(125, "jinso", "song");

	//cout << y.getRenterId() << endl;
	//cout << y.getRenterFn() << endl;
	//cout << y.getRenterLn() << endl;
	//cout << z.getRenterId() << endl;
	//cout << z.getRenterFn() << endl;
	//cout << z.getRenterLn() << endl;

	Movie m_obj;
	m_obj.rentMovie(y);
	m_obj.rentMovie(z);
	m_obj.rentMovie(z2);
	m_obj.rentMovie(z3);
	m_obj.show_array();




	return 0;
}
