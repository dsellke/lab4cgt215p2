#include <iostream>

using namespace std;

//Print out the menu of choices for the user to select from 
void printMenu() {
	cout << "Please Slect wich operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	long long factorial = 1;
	int A;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> A;
	while (A < 0) {
		cout << "Nice try, please enter a POSITIVE number...";
		cin >> A;
	}
	if (A > 0) {
		cout << A << "! = ";
		for (int i = 1; i <= A; ++i) {
			cout << i;
			factorial *= i;

			if (i < A) {
				cout << " * ";
			}
		}
		long long result = factorial;
		cout << " = " << result << endl;
	}
	//Value for A // factorial code here 
}
void arithmetic() {
	long long arithmetic = 1;
	int A;
	int B;
	int C;
	int sum = 0;
	cout << "Arithmetic:" << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter a number of elements in the series: ";
	cin >> C;

	for (int i = 0; i < C; ++i) {
		cout << A;
		sum += A;
		A += B;

		if (i < C - 1) {
			cout << " + ";
		}

	}

	cout << " = " << sum << endl;
	// arithmetic code here 
}
void geometric() {
	int A;
	int B;
	int C;
	int sum = 0;
	cout << "Geomtric:" << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to mutiply by each time: ";
	cin >> B;
	cout << "Enter a number of elements in the series: ";
	cin >> C;

	for (int i = 0; i < C; ++i) {
		cout << A;
		sum += A;
		A *= B;

		if (i < C - 1) {
			cout << " + ";
		}

	}

	cout << " = " << sum << endl;

	// geometric code here 
}
int main() {
	int A;
	int B;
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;
		int A;

		//Quit if user choses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}

		else if (choice == 1) {
			factorial();


		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "GO Again ? [Y/N} ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}