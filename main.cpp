#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void zerlegung(int n)
{
    int r = 0; // neue Integer, um Rest von n/10 zu speichern
    if (n > 10)
    {
        r = n % 10;
        zerlegung(n / 10); // rekursiver Anruf
        cout << endl
             << r;
    }
    else
        cout << endl
             << n;
}

void aufgabe_6_A()
{
    int n;
    cout << "Geben Sie eine dreistellige ganze Zahl ein: "; // die eingegebene Zahl steht in der gleicnen Zeile
    cin >> n;
    zerlegung(n);
}

void aufgabe_6_D()
{
    unsigned long long input{};
    unsigned long long ten = 10;
    // avoid conversion to int
    vector<unsigned long long> arr;
    cout << "Geben Sie ein ganze Zahl ein: " << endl;
    cin >> input;
    while (input != 0)
    {
        arr.push_back(input % ten);
        input = (input - input % ten) / ten;
    };
    for (unsigned long long int i = arr.size() - 1; i != -1; i--)
    {
        cout << arr.at(i) << endl;
    }
};

void verzinsung(float k, float z, int j)
{

    for (int i = 1; i <= j; i++)
    {
        k += k * z / 100; // jedes Jahr ab zweitem Jahr werden die Zinsen des letzten Jahres addiert
        cout << endl
             << "Jahr " << i << ": " << setprecision(5) << k; // Jahreswerte des Sparbuchs ausgeben
    }
}

void aufgabe_7_A()
{

    int jahr;                // Laufzeit in Jahren
    float kapital, zinssatz; // Anfangkapital und %, Dezimahlbrüche erlaubt

    cout << "Geben Sie bitte ein Anfangkapital ein: ";
    cin >> kapital;

    cout << endl
         << "Geben Sie bitte einen Zinssatz in Prozent ein: ";
    cin >> zinssatz;

    cout << endl
         << "Geben Sie bitte eine Laufzeit in Jahren ein: ";
    cin >> jahr;

    verzinsung(kapital, zinssatz, jahr);
}

void aufgabe_7_D()
{
    long double saldo{}, time{}, zinRate{};
    long double now = 2023;
    cout << "Please enter your starting balance" << endl;
    cin >> saldo;
    if (saldo == 0)
    {
        cout << "Your Balance will always be 0" << endl;
        return;
    }

    cout << "Please enter yearly interest rate with percentage sign (e.g. 4%):" << endl;
    scanf("%La%%", &zinRate);
    //  cout << zinRate;
    // % L - length for Long double
    // a - take in floating point
    // %% literal for reading a "%"

    cout << "Please enter how many year you want to run your account: " << endl;
    cin >> time;
    cout << endl
         << "In year " << now << "you have: " << saldo << endl;
    while (time > 0)
    {
        time = time - 1;
        now = now + 1;
        saldo = saldo + saldo * (zinRate / 100.0);
        cout << endl
             << "In year " << now << " you have: " << setprecision(5) << saldo << endl;
    }
}

void aufgabe_8_A()
{
    char auswahl = ' ';
    int anzahl = 1, zahl, min = 0;
    bool status = true;

    while (status)
    {

        cout << "Menu:" << endl;
        cout << "1 - Anzahl festlegen" << endl;
        cout << "2 - Zahlen eingeben" << endl;
        cout << "3 - Minimum anzeigen" << endl;
        cout << "x - Beenden" << endl;
        cin >> auswahl;

        switch (auswahl)
        {
        case '1':
            cout << "Legen Sie die Anzahl fest: " << endl;
            cin >> anzahl;
            break;

        case '2':
            cout << "Geben Sie nicht negative Zahlen ein: " << endl;
            for (int i = 1; i <= anzahl; i++)
            {
                cin >> zahl;
                if (i == 1)
                {
                    min = zahl;
                }
                else if (min > zahl)
                {
                    min = zahl;
                }
            }
            break;

        case '3':
            cout << "Minimum ist " << min << endl;
            break;

        case 'x':
        case 'X':
            status = false;
            break;

        default:
            cout << endl
                 << endl
                 << "Bitte geben Sie eine gültige Option an" << endl;
            break;
        }
    }
}

void aufgabe_8_D()
{
    string input;
    char auswahl;
    int anzahl = 1, zahl, min = 0;
    bool status = true;

    while (status)
    {

        cout << "Menu:" << endl;
        cout << "1 - Anzahl festlegen" << endl;
        cout << "2 - Zahlen eingeben" << endl;
        cout << "3 - Minimum anzeigen" << endl;
        cout << "x - Beenden" << endl;
        getline(cin, input);
        if (input.length() > 1)
        {
            auswahl = '5';
        }
        else
        {
            auswahl = input[0];
        };

        switch (auswahl)
        {
        case '1':
            cout << "Legen Sie die Anzahl fest: " << endl;
            cin >> anzahl;
            break;

        case '2':
            cout << "Geben Sie nicht negative Zahlen ein: " << endl;
            for (int i = 1; i <= anzahl; i++)
            {
                cin >> zahl;
                if (i == 1)
                {
                    min = zahl;
                }
                else if (min > zahl)
                {
                    min = zahl;
                }
            }
            break;

        case '3':
            cout << "Minimum ist " << min << endl;
            break;

        case 'x':
        case 'X':
            status = false;
            break;

        default:
            cout << endl
                 << endl
                 << "Bitte geben Sie eine gültige Option an" << endl;
            break;
        }
    }
}

double quadratwuerzel(double a, double x, double y)
{

    if (a > 0.0)
    {

        while (abs(x - y) > 0.000000000001)
        {
            x = 0.5 * (x + y);
            y = a / x;
            x = quadratwuerzel(a, x, y);
            break;
        }
        return x;
    }
    return 0;
}

void aufgabe_9_A()
{
    double a, x, y;
    cout << "Geben Sie eine positive reele Zahl ein: " << endl;
    cin >> a;
    x = a;
    y = 1.0;
    x = quadratwuerzel(a, x, y);
    cout << endl
         << "Quadratwuerzel von " << a << " ist " << x << endl;
}
void aufgabe_9_D()
{
    long double x0 = 10;
    long double numToFindRoot{}, x2{}, x1{};

    cout << "Enter the any number to find its square root: " << endl;
    cin >> numToFindRoot;

    do
    {
        x1 = 0.5 * (x0 + numToFindRoot / x0);
        x2 = 0.5 * (x1 + numToFindRoot / x1);
        x0 = x1;
        cout << x1 << "   " << x2 << endl;
    } while (abs(x2 - x1) > 0.00000001);

    cout << x2;
}
int main()
{
    aufgabe_8_D();
    return 0;
};
