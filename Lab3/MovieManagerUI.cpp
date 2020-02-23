#include "MovieManagerUI.h"


static void printMenu() {
	string menu_string = "";
	menu_string += "Welcome to Movie Rental Kiosk!\n\n";
	menu_string += "----------\n\n";
	menu_string += "am: Add Movie\n\n";
	menu_string += "dm: Discontinue Movie\n\n";
	menu_string += "rm: Rent Movie\n\n";
	menu_string += "rr: Return Rental\n\n";
	menu_string += "p: Print Movie Inventory\n\n";
	menu_string += "q: Quit Program\n\n";
	menu_string += "----------\n\n";
	cout << menu_string << endl;

}

static string getCommand() {
	string user_input;
	cin >> "Enter Command: " >> user_input;
	string options[6] = { "am", "dm", "rm", "rr", "p", "q" };
	while (true) {
		for (int i = 0; i < 6; i++) {
			if (user_input == options[i])
				return user_input;
		}
		cout << "Invalid input. Please enter a valid input." << endl;
		cin >> "Enter Command: " >> user_input;
	}
}
static void getMovieInfo() {
	cin << 
}
static void getMovieCode();
static void getRenterInfo();
static void getRenterId();