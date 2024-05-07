#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No induk = " << nim << endl;
    }
};

int main() {

	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim(); //Member Access Operator

	mahasiswa& refMhs = mhs; //Pointer Reference refMhs
	refMhs.nim = 2; //Member Access Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer Derreference pMhs
	pMhs->nim = 3; // Arrow operator
	pMhs->showNim();
	return 0;
}