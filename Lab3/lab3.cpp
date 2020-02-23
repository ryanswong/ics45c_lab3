#include "MovieManager.h"

int main()
{
	//contruct MovieManager and calls run
	Renter x;
	Renter y(123, "ryan", "wong");
	Renter z(456, "jin-woo", "sung");
	Renter z2(124, "jin-woo", "sung");
	Renter z3(125, "jin", "sung");
	Renter z4(2468, "tristin", "bui");

	//cout << y.getRenterId() << endl;
	//cout << y.getRenterFn() << endl;
	//cout << y.getRenterLn() << endl;
	//cout << z.getRenterId() << endl;
	//cout << z.getRenterFn() << endl;
	//cout << z.getRenterLn() << endl;

	Movie m_obj;
	m_obj.setMovieCode("PSTE");
	m_obj.setMovieName("Parasite");
	m_obj.setNumCopies(10);
	m_obj.rentMovie(y);
	m_obj.rentMovie(z);
	m_obj.rentMovie(z2);
	m_obj.rentMovie(z3);
	m_obj.show_array();
	cout << m_obj << endl;




	return 0;
}
