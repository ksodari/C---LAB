#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int Width     = 20;

    cout << left << setw(Width) << "S.N";
    cout << left << setw(Width) << "Roll Number";
    cout << left << setw(Width) << "Name";
    cout << left << setw(Width) << "Age";
    cout << endl;
    cout << left << setw(Width) << 1;
    cout << left << setw(Width) << 101;
    cout << left << setw(Width) << "Ram";
    cout << left << setw(Width) << 25;
    cout << endl;
    cout << left << setw(Width) << 2;
    cout << left << setw(Width) << 102;
    cout << left << setw(Width) << "Sita";
    cout << left << setw(Width) << "23";
    cout << endl;


}
