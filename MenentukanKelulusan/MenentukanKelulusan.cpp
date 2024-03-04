#include <iostream>
using namespace std;

int main() {
	
	float nilFisika, nilMat, rata2;
	string status;
	
	cout << "Masukan nilai matematika = ";
	cin >> nilMat;
	cout << "Masukan nilai fisika = ";
	cin >> nilFisika;

	rata2 = (nilFisika + nilMat) / 2;

	if (rata2 >= 60) {
		status = "Anda dinyatakan lulus jalur rerata";
	}
	else if (nilMat >= 70) {
		status = "Anda dinyatakan lulus jalur matematika";
	}
	else {
		status = "Anda dinyatakan belum lulus";
	}

	cout << "Status Kelulusan = " << status << endl;
}