#include "Movies.h"


// default constructor
Movie::Movie() {
	movie_code = "";
	movie_name = "";
	num_copies = 0;
}

// contructor
Movie::Movie(string movie_code, string movie_name, int num_copies) {
	this->movie_code = movie_code;
	this->movie_name = movie_name;
	this->num_copies = num_copies;
}

// adds renter to the renters array
void Movie::rentMovie(Renter r) {

	// error checks
	if (r.getRenterId() < 0)
		throw InvalidRenterIDException();
	if (r.getRenterFn().length() == 0 || r.getRenterLn().length() == 0)
		throw EmptyRenterNameException();

	bool limit_reach = true;
	for (int i = 0; i < 10; i++) {
		if (renters[i].getRenterId() == r.getRenterId())
			throw DuplicateRenterException();
		if (renters[i].getRenterId() == 0)
			limit_reach = false;
	}
	if (limit_reach == true)
		throw RenterLimitException();

	// add to array
	for (int i = 0; i < 10; i++) {
		if (renters[i].getRenterId() == 0) {
			renters[i] = r;
			break;
		}
	}

	// selection sort
	int min, temp;
	for (int i = 0; i < 9; i++) {
		min = i;
		for (int j = i + 1; j < 10; j++) {
			int cmp_fn = renters[j].getRenterFn().compare(renters[min].getRenterFn());
			int cmp_ln = renters[j].getRenterLn().compare(renters[min].getRenterLn());
			bool cmp_id = (renters[j].getRenterId() < renters[min].getRenterId());

			// boolean var to determine if there is a Renter with values less than the start Renter
			bool need_switch = 
				(renters[j].getRenterFn() != "" &&
					((cmp_fn < 0) ||
					 (cmp_fn == 0 && cmp_ln < 0) ||
					 (cmp_fn == 0 && cmp_ln == 0 && cmp_id == true))
				);
			// If there is a min, the start and min renters are swapped 
			if (need_switch)
			min = j;
		}

		Renter temp = renters[i];
		renters[i] = renters[min];
		renters[min] = temp;
	}
}



// removes renter from the renters array
void Movie::returnRental(int renterId) {

	if (renterId < 0)
		throw InvalidRenterIDException();


	bool renter_found = false;
	bool empty_renters_array = true;
	for (int i = 0; i < 10; i++) {

		if (renters[i].getRenterId() > 0)
			empty_renters_array = false;

		if (renters[i].getRenterId() == renterId) {
			renter_found = true;
			for (int j = i; j < 9; j++) {
				renters[j] = renters[j + 1];
			}
			Renter default_renter;
			renters[9] = default_renter;
			break;
		}
	}

	if (empty_renters_array)
		throw EmptyRenterListException();
	if (renter_found == false)
		throw RenterNotFoundException();

}

void	Movie::setMovieCode(string movie_code) { this->movie_code = movie_code; }
string	Movie::getMovieCode() { return movie_code; }

void	Movie::setMovieName(string movie_name) { this->movie_name = movie_name; }
string	Movie::getMovieName() { return movie_name; }

void	Movie::setNumCopies(int num_copies) { this->num_copies = num_copies; }
int		Movie::getNumCopies() { return num_copies; }

void Movie::show_array() {
	//int* ptr = renters;
	for (int i = 0; i < 10; i++) {
		cout << "index " << i << " id: " << renters[i].getRenterId() 
		<< " fn: " << renters[i].getRenterFn()
		<< " ln: " << renters[i].getRenterLn()
		<< " size: " << sizeof(renters[i]) << endl;
	}
}


ostream& operator<<(ostream& os, Movie& m) {
	string movie_info = "";
	string renter_info = "";
	for (int i = 0; i < 10; i++) {
		if (m.renters[i].getRenterId() > 1) {
			renter_info += to_string(m.renters[i].getRenterId()) + " ";
			renter_info += m.renters[i].getRenterFn() + " ";
			renter_info += m.renters[i].getRenterLn() + "\n";
		}
	} 
	movie_info +=
		"Movie Code: " + m.getMovieCode() +
		"\nMovie Name: " + m.getMovieName() +
		"\nNumber of Copies: " + to_string(m.getNumCopies()) +
		"\nRenters: \n" + renter_info;

		os << movie_info;
		return os;
}

