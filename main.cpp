#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GBP_Pirkti = 0.8600;
    const double USD_Pirkti = 1.1460;
    const double INR_pirkti = 101.3862;
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
        int valiuta;
        cout << "Kokia valiuta norite pirkti? 1 - GBP, 2 - USD, 3 - INR \n";
        cin >> valiuta;
        if (valiuta < 1 || valiuta > 3) {
            cout << "Neteisingas valiutos pasirinkimas!\n";
        }   else {
            double eurai;
            cout<< "Kiek euru norite skirti valiutai pirkti? ";
            cin>>eurai;
            if (eurai <= 0) {
                cout << "Suma turi buti teigiama.\n";
            } else {
                if (valiuta ==1){
                    double svarai = eurai * GBP_Pirkti;
                    cout<< "Gausite " <<svarai<<" GBP\n";
                }
                else if (valiuta == 2) {
                    double doleriai = eurai * USD_Pirkti;
                    cout<< "Gausite " <<doleriai<<" USD\n";
                }
                else if (valiuta == 3) {
                    double rupijos = eurai * INR_pirkti;
                    cout<< "Gausite " <<rupijos<<" INR\n";
                }


            }


        }
    }else if (pasirinkimas == 3) {
        double svarai;
        cout << "Iveskite suma svarais: ";
        cin >> svarai;
        if (svarai <= 0) {
            cout << "Suma turi buti teigiama.\n";
        } else {
            double eurai = svarai / 0.9220;
            cout << "Gausite "<< eurai<< " EUR\n";
        }
    } else if (pasirinkimas == 0) {
        cout << "Programa baigia darba.\n";
    } else {
        cout << "Neteisingas pasirinkimas!\n";
    }

    return 0;
}