#include<iostream>
using namespace std;

string selectCity()
    {
    rev:
        int city,state;

        cout << endl
             << "\t--- Select your State ---" << endl
             << "\t\t1) Rajasthan" << endl
             << "\t\t2) Gujarat" << endl
             << "\t\t3) Maharastra" << endl
             << endl;
             cin >> state;

        switch (state)
        {
        case 1:
        back1:
            cout << endl
                 << "\t\t\t--- Select your City ---" << endl
                 << "\t\t\t\t1) Jaipur" << endl
                 << "\t\t\t\t2) Jhodhpur" << endl
                 << "\t\t\t\t3) Kota" << endl
                 << "\t\t\t\t4) Udaipur" << endl
                 << "\t\t\t\t5) Ajmer" << endl
                 << "\t\t\t\t6) Jaisalmer" << endl
                 << "\t\t\t\t7) Sri Nagar" << endl
                 << endl;
                 cin >> city;

            switch (city)
            {
            case 1:
                return "Jaipur";

            case 2:
                return "Jhodhpur";

            case 3:
                return "Kota";

            case 4:
                return "Udaipur";

            case 5:
                return "Ajmer";

            case 6:
                return "Jaisalmer";

            case 7:
                return "Sri Nagar";

            default:
                cout << endl
                     << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
                goto back1;
            }

        case 2:
        back2:
            cout << endl
                 << "\t\t\t--- Select your City ---" << endl
                 << "\t\t\t\t1) Ahmedabad" << endl
                 << "\t\t\t\t2) Gandhinagar" << endl
                 << "\t\t\t\t3) Surat" << endl
                 << "\t\t\t\t4) Rajkot" << endl
                 << "\t\t\t\t5) Bhavnagar" << endl
                 << "\t\t\t\t6) Vadodara" << endl
                 << "\t\t\t\t7) Dwarka" << endl
                 << endl;
                 cin >> city;

            switch (city)
            {
            case 1:
                return "Ahmedabad";

            case 2:
                return "Gandhinagar";

            case 3:
                return "Surat";

            case 4:
                return "Rajkot";

            case 5:
                return "Bahavnagar";

            case 6:
                return "Vadodara";

            case 7:
                return "Dwarka";

            default:
                cout << endl
                     << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
                goto back2;
            }

        case 3:
        back3:
            cout << endl
                 << "\t\t\t--- Select your City ---" << endl
                 << "\t\t\t\t1) Mumbai" << endl
                 << "\t\t\t\t2) Pune" << endl
                 << "\t\t\t\t3) Nashik" << endl
                 << "\t\t\t\t4) Nagpur" << endl
                 << "\t\t\t\t5) Navi Mumbai" << endl
                 << "\t\t\t\t6) Panvel" << endl
                 << "\t\t\t\t7) Ratnagiri" << endl
                 << endl;
                 cin >> city;

            switch (city)
            {
            case 1:
                return "Mumbai";

            case 2:
                return "Pune";

            case 3:
                return "Nashik";

            case 4:
                return "Nagpur";

            case 5:
                return "Navi Mumbai";

            case 6:
                return "Panvel";

            case 7:
                return "Ratnagiri";

            default:
                cout << endl
                     << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
                goto back3;
            }

        default:
            cout << endl
                 << "Sorry, We Can't find your state Please Re-Enter !!" << endl;
            goto rev;
        }
    }
