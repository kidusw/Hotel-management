#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct paymentinfo
{
    string paymenttype;
    float amount;
};

struct checkin
{
    string firstname, middlename, lastname;
    string telephoneno;
    string roomtype;
    paymentinfo payinfo;
};
struct gymandspa
{
    string firstname, middlename, lastname;
    int age;
    paymentinfo payinfo;
    string timeperiod;
    int persons;
};
struct table
{
    string firstname, middlename, lastname;
    int peoples;
    string date;
    string type;
    string time;
};

int welcome_page();
void roomReservation();
void tableReservation();
void gymAndSpa();
void additonalInfo();
int main()
{

    int user_input = welcome_page();

    switch (user_input)
    {
    case 1:
        roomReservation();
        break;
    case 2:
        tableReservation();
        break;
    case 3:
        gymAndSpa();
        break;
    case 4:
        additonalInfo();
        break;
    case 0:
        return 0;
    default:
        cout << "Invalid input" << endl;
        break;
    }
}
int welcome_page()
{
    system("cls");

    cout << "==============================================================" << endl;
    cout << "==============================================================" << endl;
    cout << "                     WELCOME TO HAHA HOTEL                    " << endl;
    cout << "==============================================================" << endl;
    cout << "==============================================================" << endl;
    cout << endl
         << endl;
    cout << "Our service" << endl;
    cout << "1. Hotel Room " << endl;
    cout << "2. Restorant " << endl;
    cout << "3. Gymnasium and Spa" << endl;
    cout << "4. Additional Info" << endl
         << endl;
    cout << "press 0 to quit" << endl;

    int user_input;
    cout << "Which sevice do you want: ";
    cin >> user_input;
    return user_input;
}
void roomReservation()
{
    system("cls");
    // menu for the room reservation page
    cout << "==============================================================" << endl;
    cout << "                        Rooms we offer                        " << endl;
    cout << "==============================================================" << endl;
    cout << endl
         << endl;
    cout << "1. King size" << endl;
    cout << "2. single" << endl;
    cout << "3. twin" << endl;
    cout << "                           price of rooms                         " << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << left << "|" << setw(10) << "Rooms"
         << "|"
         << "price per night"
         << "|" << endl;
    cout << left << "|" << setw(10) << "king size"
         << "|" << setw(15) << "2000br"
         << "|" << endl;
    cout << left << "|" << setw(10) << "single"
         << "|" << setw(15) << "1000br"
         << "|" << endl;
    cout << left << "|" << setw(10) << "twin size"
         << "|" << setw(15) << "900br"
         << "|" << endl;
    cout << "---------------------------//---------------------------------" << endl
         << endl;

    char user_input2;
    int roomtype;

    cout << ">>Enter 'y' to book room and 'm' to return to main menu: " << endl;
    cin >> user_input2;
    if (user_input2 == 'y')
    {
        // output for book room

        checkin chk;

        cout << "Which type of room do you want to book?" << endl;
        cout << "1. king size   2.singel   3.twin : ";
        cin >> roomtype;

        if (roomtype == 1)
        {
            chk.roomtype = "king size";
            chk.payinfo.amount = 2000;
        }
        else if (roomtype == 2)
        {
            chk.roomtype = "single";
            chk.payinfo.amount = 1000;
        }
        else if (roomtype == 3)
        {
            chk.roomtype = "twin";
            chk.payinfo.amount = 900;
        }

        cout << "enter first name: ";
        cin >> chk.firstname;
        cout << "enter middle name :";
        cin >> chk.middlename;
        cout << "enter last name: ";
        cin >> chk.lastname;
        cout << "enter phone number: ";
        cin >> chk.telephoneno;

        int paytype, paymentConfirmation, end;
        cout << "Payment type:  1.cash  2.credit card  : ";
        cin >> paytype;
        if (paytype == 1)
        {
            chk.payinfo.paymenttype = "Cash";
        }
        else if (paytype == 2)
        {
            chk.payinfo.paymenttype = "Credit card";
        }

        int fnamel, mnamel, lnamel, addressline, phoneline, paymentline;

        fnamel = chk.firstname.length();
        mnamel = chk.middlename.length();
        lnamel = chk.lastname.length();
        phoneline = chk.telephoneno.length();
        paymentline = chk.payinfo.paymenttype.length();

        int nameline = fnamel + mnamel + lnamel + 2;
        int line = 10;

        cout << "**********************************RECIEPT INFORMATION*********************************" << endl;
        cout << left << "|" << setw(nameline) << "name"
             << "|" << setw(phoneline) << "phone"
             << "|" << setw(paymentline) << "paymenttype"
             << "|" << setw(line) << "amount payed"
             << "|" << setw(line) << "Room type"
             << "|" << endl;
        cout << "--------------------------------------------------------------------------------------" << endl;

        cout << left << "|" << chk.firstname << " " << chk.middlename << " " << chk.lastname << "|" << setw(phoneline) << chk.telephoneno << "|" << setw(11) << chk.payinfo.paymenttype << "|" << setw(12) << chk.payinfo.amount << "|" << setw(10) << chk.roomtype << "|" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl
             << endl;

        cout << "If the reciept is correct, Please confirm your room: " << endl;
        cout << "Enter 1 to confirm and 0 to discard: ";
        cin >> paymentConfirmation;
        if (paymentConfirmation == 1)
        {
            cout << "You are successfully booked room !!!" << endl;
        }
        else if (paymentConfirmation == 0)
        {
            cout << "Booking discarded!!!" << endl;
        }

        cout << "press 1 to go to home page and press 0 to exit: ";
        cin >> end;
        if (end == 1)
        {
            main();
        }
        else if (end == 0)
        {
            cout << "program terminated" << endl;
            exit(0);
        }
    }
    else if (user_input2 == 'm')
    {
        main();
    }
}
void tableReservation()
{
    system("cls");
    cout << "==============================================================" << endl;
    cout << "                               TABLES                         " << endl;
    cout << "==============================================================" << endl;
    cout << endl;

    int tableclass, paymentConfirmation, end;

    table reserveTable;
    cout << "Tables we have: " << endl;
    cout << "1. VIP		2.Standard" << endl;

    char user_input;
    cout << ">>Enter 'y' to resurve table and 'm' to return to main menu: " << endl;
    cin >> user_input;
    if (user_input == 'y')
    {
        cout << "Which type of table do you want: ";
        cout << "1.VIP   2. Standard: ";
        cin >> tableclass;

        if (tableclass == 1)
        {
            reserveTable.type = "VIP";
        }
        else if (tableclass = 2)
        {
            reserveTable.type = "Standard";
        }
        else
        {
            cout << "invalid input";
        }

        cout << "Enter your first name: ";
        cin >> reserveTable.firstname;
        cout << "Enter your middle name: ";
        cin >> reserveTable.middlename;
        cout << "Enter your last name: ";
        cin >> reserveTable.lastname;
        cout << "Enter number of people: ";
        cin >> reserveTable.peoples;

        cout << "Enter the date in the following format: (DD/MM/YY): ";
        cin >> reserveTable.date;
        cout << "Enter the time you want to reserve your table (hh:mm AM/PM): ";
        cin >> reserveTable.time;
        cout << endl
             << endl;

        int fnamel, mnamel, lnamel;
        fnamel = reserveTable.firstname.length();
        mnamel = reserveTable.middlename.length();
        lnamel = reserveTable.lastname.length();

        int nameline = fnamel + mnamel + lnamel + 2;

        cout << "********************************* RECIEPT INFORMATION ********************************" << endl;
        cout << left << "|" << setw(nameline) << "NAME"
             << "|" << setw(10) << "Number of people"
             << "|" << setw(10) << "DATE"
             << "|" << setw(10) << "TIME"
             << "|" << endl;
        cout << left << "|" << setw(nameline) << reserveTable.firstname + " " + reserveTable.middlename + " " + reserveTable.lastname << "|" << setw(10) << reserveTable.peoples << "|" << setw(10) << reserveTable.date << "|" << setw(10) << reserveTable.time << "|" << endl;
        cout << endl;

        cout << "If the reciept is correct, Please confirm your reservation: " << endl;
        cout << "Enter 1 to confirm and 0 to discard: ";
        cin >> paymentConfirmation;
        if (paymentConfirmation == 1)
        {
            cout << "You have successfully reserved your table!!!" << endl;
        }
        else if (paymentConfirmation == 0)
        {
            cout << "Reservation discarded!!!" << endl;
        }

        cout << "press 1 to go to home page and press 0 to exit: ";
        cin >> end;
        if (end == 1)
        {
            main();
        }
        else if (end == 0)
        {
            cout << "program terminated" << endl;

            exit(0);
        }
    }
    else if (user_input == 'm')
    {
        main();
    }
}
void gymAndSpa()
{
    system("cls");
    cout << "==============================================================" << endl;
    cout << "                        Gym and Spa                           " << endl;
    cout << "==============================================================" << endl;
    cout << endl
         << endl;

    cout << "                     Packages we offer                         " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << left << "|"
         << "time period"
         << "|" << setw(20) << "Individual packages"
         << "|" << setw(15) << "Group packages per person"
         << "|" << endl;
    cout << left << "|" << setw(11) << "one month"
         << "|" << setw(20) << "1,800br"
         << "|" << setw(15) << "1,400br"
         << "|" << endl;
    cout << left << "|" << setw(10) << "Three month"
         << "|" << setw(20) << "4,800br"
         << "|" << setw(15) << "4,000br"
         << "|" << endl;
    cout << left << "|" << setw(11) << "six month"
         << "|" << setw(20) << "9,000br"
         << "|" << setw(15) << "8,000br"
         << "|" << endl;
    cout << left << "|" << setw(11) << "one year"
         << "|" << setw(20) << "15,000br"
         << "|" << setw(15) << "14,000br"
         << "|" << endl;
    cout << "-------------------------------//------------------------------" << endl
         << endl;

    char user_input3;
    cout << ">> enter 'y' to register and 'm' to go back to main menu" << endl;
    cout << ">> ";
    cin >> user_input3;
    gymandspa gns;
    if (user_input3 == 'y')
    {
        cout << ">> "
             << "choose a plan: ";
        cout << "1.individual 2.group" << endl;
        cin >> gns.persons;
        if (gns.persons == 1)
        {
            cout << "enter first name: ";
            cin >> gns.firstname;
            cout << "enter middle name: ";
            cin >> gns.middlename;
            cout << "enter last name: ";
            cin >> gns.lastname;
            cout << "enter age: ";
            cin >> gns.age;

            cout << "enter time period: " << endl;
            cout << "enter '1' for one month" << endl;
            cout << "enter '2' for three months" << endl;
            cout << "enter '3' for six months" << endl;
            cout << "enter '4' for a year" << endl;

            int timerange;

            cin >> timerange;

            if (timerange == 1)
            {
                gns.timeperiod = "One month";
                gns.payinfo.amount = 1800;
            }
            else if (timerange == 2)
            {
                gns.timeperiod = "Three month";
                gns.payinfo.amount = 4800;
            }
            else if (timerange == 3)
            {
                gns.timeperiod = "Six month";
                gns.payinfo.amount = 9000;
            }
            else if (timerange == 4)
            {
                gns.timeperiod = "Twelve month";
                gns.payinfo.amount = 15000;
            }

            int paytype, paymentConfirmation, end;
            cout << "Payment type:  1.cash  2.credit card  : ";
            cin >> paytype;
            if (paytype == 1)
            {
                gns.payinfo.paymenttype = "Cash";
            }
            else if (paytype == 2)
            {
                gns.payinfo.paymenttype = "Credit card";
            }
            int fnamel, mnamel, lnamel;
            fnamel = gns.firstname.length();
            mnamel = gns.middlename.length();
            lnamel = gns.lastname.length();

            int nameline = fnamel + mnamel + lnamel + 2;

            cout << "****************************************RECIPT INFORMATION*************************************************" << endl;
            cout << left << "|" << setw(nameline) << "Name"
                 << "|" << setw(10) << "Age"
                 << "|" << setw(10) << "Time period in month"
                 << "|" << setw(10) << "Amount"
                 << "|" << setw(10) << "Payment type"
                 << "|" << endl;
            cout << "---------------------------------------------------------------------------------------------------------" << endl;
            cout << left << "|" << gns.firstname << " " << gns.middlename << " " << gns.lastname << "|" << setw(10) << gns.age << "|" << setw(20) << gns.timeperiod << "|" << setw(10) << gns.payinfo.amount << "|" << setw(10) << gns.payinfo.paymenttype << endl;
            cout << "---------------------------------------------------------------------------------------------------" << endl;

            cout << "If the reciept is correct, Please confirm your rigistration: " << endl;
            cout << "Enter 1 to confirm and 0 to discard: ";
            cin >> paymentConfirmation;
            if (paymentConfirmation == 1)
            {
                cout << "You are successfully regeistered to our gym program !!!" << endl;
            }
            else if (paymentConfirmation == 0)
            {
                cout << "Registration discarded!!!" << endl;
            }

            cout << "press 1 to go to home page and press 0 to exit: ";
            cin >> end;
            if (end == 1)
            {
                main();
            }
            else if (end == 0)
            {
                cout << "program terminated" << endl;
                exit(0);
            }
        }

        if (gns.persons == 2)
        {
            int n;
            cout << "how many people are you?" << endl;
            cout << "REMINDER: One group must have 3 and more members" << endl;
            cin >> n; // number of people

            if (n < 3)
            {
                cout << "you can't buy this group package if you don't have group with 3 and more members";
                gymAndSpa();
            }

            gymandspa gns2[n];

            int grouptimerange, totalamount, grouppaytype, paymentConfirmation, end;

            cout << "enter time period: " << endl;
            cout << "enter '1' for one month" << endl;
            cout << "enter '2' for three months" << endl;
            cout << "enter '3' for six months" << endl;
            cout << "enter '4' for a year" << endl;

            cin >> grouptimerange;

            cout << "Payment type:  1.cash  2.credit card  : ";
            cin >> grouppaytype;

            for (int i = 0; i < n; i++)
            {
                cout << "person" << i + 1 << ": " << endl;
                cout << "enter first name: ";
                cin >> gns2[i].firstname;
                cout << "enter middle name: ";
                cin >> gns2[i].middlename;
                cout << "enter last name: ";
                cin >> gns2[i].lastname;
                cout << "enter age: ";
                cin >> gns2[i].age;

                if (grouptimerange == 1)
                {
                    gns2[i].timeperiod = "One month";
                    gns2[i].payinfo.amount = 1400;
                }
                else if (grouptimerange == 2)
                {
                    gns2[i].timeperiod = "Three month";
                    gns2[i].payinfo.amount = 4000;
                }
                else if (grouptimerange == 3)
                {
                    gns2[i].timeperiod = "Six month";
                    gns2[i].payinfo.amount = 8000;
                }
                else if (grouptimerange == 4)
                {
                    gns2[i].timeperiod = "Twelve month";
                    gns2[i].payinfo.amount = 14000;
                }

                if (grouppaytype == 1)
                {
                    gns2[i].payinfo.paymenttype = "Cash";
                }
                else if (grouppaytype == 2)
                {
                    gns2[i].payinfo.paymenttype = "Credit card";
                }
            }

            totalamount = gns2[0].payinfo.amount * n;

            int groupfnamel, groupmnamel, grouplnamel;
            int longestname = 0;
            for (int i = 0; i < n; i++)
            {
                groupfnamel = gns2[i].firstname.length();
                groupmnamel = gns2[i].middlename.length();
                grouplnamel = gns2[i].lastname.length();

                int nameline = groupfnamel + groupmnamel + grouplnamel + 2;

                if (nameline > longestname)
                {
                    longestname = nameline;
                }
            }

            cout << "**************************************** GROUP RECIPT INFORMATION *************************************************" << endl;

            cout << left << "|" << setw(longestname) << "Name"
                 << "|" << setw(10) << "Age"
                 << "|" << setw(10) << "Time period in month"
                 << "|" << setw(10) << "Amount"
                 << "|" << setw(10) << "Payment type"
                 << "|" << endl;
            cout << "---------------------------------------------------------------------------------------------------------" << endl;

            for (int i = 0; i < n; i++)
            {
                cout << left << "|" << setw(longestname) << gns2[i].firstname + " " << gns2[i].middlename + " " + gns2[i].lastname << "|" << setw(10) << gns2[i].age << "|" << setw(10) << gns2[i].timeperiod << "|" << setw(10) << gns2[i].payinfo.amount << "|" << setw(10) << gns2[i].payinfo.paymenttype << endl;
            }

            cout << "---------------------------------------------------------------------------------------------------" << endl;
            cout << "Total Amout = " << totalamount << endl
                 << endl;

            cout << "If the reciept is correct, Please confirm your rigistration: " << endl;
            cout << "Enter 1 to confirm and 0 to discard: ";
            cin >> paymentConfirmation;
            if (paymentConfirmation == 1)
            {
                cout << "You are successfully regeistered to our gym program !!!" << endl;
            }
            else if (paymentConfirmation == 0)
            {
                cout << "Registration discarded!!!" << endl;
            }

            cout << "press 1 to go to home page and press 0 to exit: ";
            cin >> end;
            if (end == 1)
            {
                main();
            }
            else if (end == 0)
            {
                cout << "program terminated" << endl;
                exit(0);
            }
        }
    }
    else if (user_input3 == 'm')
    {
        main();
    }
}
void additonalInfo()
{
    system("cls");
    cout << "==============================================================" << endl;
    cout << "                        About us                              " << endl;
    cout << "==============================================================" << endl;
    cout << endl
         << endl;

    fstream myfile;
    myfile.open("info.txt", ios ::in);
    if (myfile.is_open())
    {
        string line;
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }

    int end;
    cout << "press 1 to go to home page and press 0 to exit: ";
    cin >> end;
    if (end == 1)
    {
        main();
    }
    else if (end == 0)
    {
        cout << "program terminated" << endl;
        exit(0);
    }
}
