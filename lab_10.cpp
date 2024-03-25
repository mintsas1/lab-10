#include <iostream>
#include <string>;
using namespace std;

struct Employee {
	string Surname;
	int id;
	int birthMonth;
};

int main() {
	const int max_employees = 5;
	Employee employees[max_employees];

	int numEmployees = 0;

	employees[numEmployees++] = { "Panchenko", 1, 7 };
	employees[numEmployees++] = { "Karas", 2, 1 };
	employees[numEmployees++] = { "Evas", 3, 12 };
	employees[numEmployees++] = { "Shevchenko", 4, 9 };
	employees[numEmployees++] = { "Volochenko", 5, 4 };

	cout << "Full list ofemployees:\n";
	for (int i = 0; i < numEmployees; ++i) {
		cout << "Surname: " << employees[i].Surname << ", sequence number: " << employees[i].id << ", birth Month: " << employees[i].birthMonth << endl;
	}
	int requestedMonth;
	cout<< "\nEnter the month number to display employees born in this month: ";
	cin >> requestedMonth;
	cout << "\nEmployees who were born in the month " << requestedMonth << ":\n";
	for (int i = 0; i < numEmployees; ++i) {
		if (employees[i].birthMonth == requestedMonth) {
			cout << "Surname: " << employees[i].Surname << ", sequence number: " << employees[i].id << endl;
		}
	}

	return 0;

}



