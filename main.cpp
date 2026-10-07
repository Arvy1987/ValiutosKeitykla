#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pasirinkimas;
    cout << fixed << setprecision(2);

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
        double eurai;
        cout<< "Iveskite suma eurais: ";
        cin>>eurai;
        double svarai = eurai * 0.8600;
        cout<< "Gausite " <<svarai<<" GBP\n";

    } else if (pasirinkimas == 3) {
        double svarai;
        cout << "Iveskite suma svarais: ";
        cin >> svarai;
        double eurai = svarai / 0.9220;
        cout << "Gausite "<< eurai<< " EUR\n";
    } else if (pasirinkimas == 0) {
        cout << "Programa baigia darba.\n";
    } else {
        cout << "Neteisingas pasirinkimas!\n";
    }

    return 0;
}