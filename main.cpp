#include <iostream>
using namespace std;

// Valiutų kursai
double GBP_Bendras   = 0.8729;
double GBP_Pirkti    = 0.8600;
double GBP_Parduoti  = 0.9220;
double USD_Bendras   = 1.1793;
double USD_Pirkti    = 1.1460;
double USD_Parduoti  = 1.2340;
double INR_Bendras   = 104.6918;
double INR_Pirkti    = 101.3862;
double INR_Parduoti  = 107.8546;

// Paslaugos

string PALYGINIMAS="PALYGINIMAS";
string PIRKIMAS = "PIRKIMAS";
string PARDAVIMAS = "PARDAVIMAS";

double apdorotiValiuta(double valiutosIndexas, double kiekis)
{
    return valiutosIndexas * kiekis;
}

void displayServices() {
    cout << "Pasirinkite norima paslauga, parasydami teksta kabutese" << endl;
    cout << "Valiutos kurso palyginimas su kita valiuta. \"palyginimas\"" << endl;
    cout << "Galimybė įsigyti valiutos (t. y. pirkti valiutą). \"pirkti\"" << endl;
    cout << "Galimybė parduoti valiutą (t. y. parduoti valiutą). \"parduoti\"" << endl;
}

string getService() {
    string norimaPaslauga;


    while (norimaPaslauga != PALYGINIMAS||norimaPaslauga !=PIRKIMAS||norimaPaslauga !=PARDAVIMAS); {
        displayServices();
        cin>>norimaPaslauga _toupper();
        if (norimaPaslauga!=PALYGINIMAS||norimaPaslauga!=PIRKIMAS||norimaPaslauga!=PARDAVIMAS) {
            cout << "Klaidinga pasirinkimo įvestis, bandykite dar kartą" << endl;
        }
    }

    return norimaPaslauga;
}

int main() {
getService();
// string norimaPaslauga = "";
//     string valiuta="";
//     double valiutosKiekis=0;
//
//
//     switch (norimaPaslauga) {
//         case "palyginimas":
//         cout << "Su kokia valiuta norite palyginti? \"GBP\", \"USD\", \"INR\"" << endl;
//         cin >> valiuta;
//         cout << "Valiutos Kiekis? pvz: \"5.12\"";
//         cin>>valiutosKiekis;
//
//         switch (valiuta) {
//             case "GBP":
//                 cout << apdorotiValiuta(GBP_Bendras,valiutosKiekis) <<endl;
//             break;
//             case "USD":
//                 cout << apdorotiValiuta(USD_Bendras,valiutosKiekis) <<endl;
//             break;
// case "INR":
//     cout << apdorotiValiuta(INR_Bendras,valiutosKiekis) <<endl;
//             break;
//         }
//
//         break;
//         case 'pirkti':
//             cout << "Kokia valiuta norite pirkti? \"GBP\", \"USD\", \"INR\"" << endl;
//         cin >> valiuta;
//         cout << "Valiutos Kiekis? pvz: \"5.12\"";
//         cin>>valiutosKiekis;
//         switch (valiuta) {
//             case 'GBP':
//                 cout << apdorotiValiuta(GBP_Pirkti,valiutosKiekis) <<endl;
//             case 'USD':
//                 cout << apdorotiValiuta(USD_Pirkti,valiutosKiekis) <<endl;
//             case 'INR':
//                 cout << apdorotiValiuta(INR_Pirkti,valiutosKiekis) <<endl;
//         }
//         break;
//         case 'parduoti':
//             cout << "Kokia valiuta norite parduoti? \"GBP\", \"USD\", \"INR\"" << endl;
//         cin >> valiuta;
//         cout << "Valiutos Kiekis? pvz: \"5.12\"";
//         cin>>valiutosKiekis;
//         switch (valiuta) {
//             case 'GBP':
//                 cout << apdorotiValiuta(GBP_Parduoti,valiutosKiekis) <<endl;
//             case 'USD':
//                 cout << apdorotiValiuta(USD_Parduoti,valiutosKiekis) <<endl;
//             case 'INR':
//                 cout << apdorotiValiuta(INR_Parduoti,valiutosKiekis) <<endl;
//         }
//         default:
//             return 0;
//     }
//     return 0;
}