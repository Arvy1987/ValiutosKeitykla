#include <iostream>
using namespace std;

int main() {
    int pasirinkimas;

    cout << "VALIUTOS KEITYKLA\n";
    cout << "1. Palyginti valiutu kursus\n";
    cout << "2. Pirkti valiuta\n";
    cout << "3. Parduoti valiuta\n";
    cout << "0. Iseiti\n";
    cout << "Pasirinkite veiksma: ";

    cin >> pasirinkimas;

    if (pasirinkimas == 1) {
        cout << "Pasirinkote kursu palyginima.\n";
    } else if (pasirinkimas == 2) {
        cout << "Pasirinkote valiutos pirkima.\n";
    } else if (pasirinkimas == 3) {
        cout << "Pasirinkote valiutos pardavima.\n";
    } else if (pasirinkimas == 0) {
        cout << "Programa baigia darba.\n";
    } else {
        cout << "Neteisingas pasirinkimas!\n";
    }

    return 0;
}