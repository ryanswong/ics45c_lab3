#include "Renter.h"



// default contructor
Renter::Renter() {
	renter_id = 0;
	renter_fn = "";
	renter_ln = "";
}



// contructor
Renter::Renter(int renter_id, string renter_fn, string renter_ln) {
	this->renter_id = renter_id;
	this->renter_fn = renter_fn;
	this->renter_ln = renter_ln;
}

// setters and getters
void	Renter::setRenterId(int renter_id) { this->renter_id = renter_id; }
int		Renter::getRenterId() { return renter_id; }
	
void	Renter::setRenterFn(string renter_fn) { this->renter_fn = renter_fn; }
string	Renter::getRenterFn() {return renter_fn; }

void	Renter::setRenterLn(string renter_Ln) { this->renter_ln = renter_ln; }
string	Renter::getRenterLn() {return renter_ln; }

 