#ifndef RENTER_H_
#define RENTER_H_

#include "Exceptions.cpp"

class Renter {

private:
	int		renter_id;
	string	renter_fn;
	string	renter_ln;

public:
	Renter();
	Renter(int renter_id, string renter_fn, string renter_ln);

	void	setRenterId(int renter_id);
	int		getRenterId();

	void	setRenterFn(string renter_fn);
	string	getRenterFn();

	void	setRenterLn(string renter_Ln);
	string	getRenterLn();

};

#endif
