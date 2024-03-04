#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	
	int Bil1, Bil2;
	string status;
	Bil1 = rand() % 11;
	Bil2 = rand() % 11;
	
	if (Bil1 == Bil2) {
		status = "Bilangannya sama";
	}
	else if (Bil1 > Bil2) {
		status = "Bilangan pertama lebih besar daripada Bilangan kedua";
	}
	else {
		status = "Bilangan kedua lebih besar daripada Bilangan pertama";
	}
	cout << "Bilangan pertama = " << Bil1 << endl;
	cout << "Bilangan kedua = " << Bil2 << endl;
	cout << "Status Bilangan = " << status << endl;
}