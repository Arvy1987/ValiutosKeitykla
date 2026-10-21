#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double USD_Bendras = 1.1793;
    const double INR_Bendras = 104.6918;

    const double GBP_Pirkti = 0.8600;
    const double USD_Pirkti = 1.1460;
    const double INR_pirkti = 101.3862;

    const double GBP_parduoti = 0.9220;
    const double USD_parduoti = 1.2340;
    const double INR_parduoti = 107.8546;

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
        int valiuta;
        cout << "Pasirinkite valiuta, kurios kursa norite palyginti su euru:\n";
        cout << "1 - GBP, 2 - USD, 3 - INR\n";
        cin >> valiuta;
        if (valiuta < 1 || valiuta > 3) {
            cout << "Neteisingas valiutos pasirinkimas!\n";
        }else {
            if (valiuta == 1) {
                cout << "Pagal bendra kursa:\n";
                cout << "1 EUR atitinka " << GBP_Bendras << " GBP\n";
                cout << "1 GBP atitinka " << 1.0 / GBP_Bendras << " EUR\n";
            }
            else if (valiuta == 2) {
                cout<<"Pagal bendra kursa:\n";
                cout<<"1 EUR atitinka " << USD_Bendras << " USD\n";
                cout<<"1 USD atitinka " << 1.0/USD_Bendras<< " EUR\n";
            }
            else if (valiuta == 3) {
                cout<<"Pagal bendra kursa:\n";
                cout<<"1 EUR atitinka " << INR_Bendras << " INR\n";
                cout<<"1 INR atitinka " << 1.0/INR_Bendras<< " EUR\n";
            }
        }
    }else if (pasirinkimas == 2) {
        int valiuta;
        cout << "Kokia valiuta norite pirkti? 1 - GBP, 2 - USD, 3 - INR \n";
        cin >> valiuta;
        if (valiuta < 1 || valiuta > 3) {
            cout << "Neteisingas valiutos pasirinkimas!\n";
            }else{
            double eurai;
            cout<< "Kiek euru norite skirti valiutai pirkti? ";
            cin>>eurai;
            if (eurai <= 0){
                cout << "Suma turi buti teigiama.\n";
                }else{
                    if(valiuta ==1){
                    double svarai = eurai * GBP_Pirkti;
                        cout << eurai << " EUR -> " << svarai << " GBP\n";
                    }
                    else if (valiuta == 2) {
                    double doleriai = eurai * USD_Pirkti;
                        cout << eurai << " EUR -> " << doleriai << " USD\n";
                    }
                    else if (valiuta == 3) {
                    double rupijos = eurai * INR_pirkti;
                        cout << eurai << " EUR -> " << rupijos << " INR\n";
                    }
                }
            }
    }else if (pasirinkimas == 3) {
        int valiuta;
        cout << "Kokia valiuta norite parduoti? 1 - GBP, 2 - USD, 3 - INR \n";
        cin >> valiuta;
        if (valiuta < 1 || valiuta > 3) {
            cout << "Neteisingas valiutos pasirinkimas!\n";
            } else {
            double suma;
            cout << "Kiek pasirinktos valiutos norite parduoti? ";
            cin >> suma;
            if (suma <= 0) {
                cout << "Suma turi buti teigiama.\n";
                } else {
                    if (valiuta ==1) {
                    double eurai = suma/ GBP_parduoti;
                        cout << suma << " GBP -> " << eurai << " EUR\n";
                    }else if (valiuta == 2) {
                    double eurai = suma/ USD_parduoti;
                        cout << suma << " USD -> " << eurai << " EUR\n";
                    }else if (valiuta == 3) {
                    double eurai = suma/ INR_parduoti;
                        cout << suma << " INR -> " << eurai << " EUR\n";
                }
            }
        }
            }else if (pasirinkimas == 0) {
        cout << "Programa baigia darba.\n";
    } else {
        cout << "Neteisingas pasirinkimas!\n";
    }

    return 0;
}