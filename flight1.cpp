#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

class Details
{
public:
    static string Name;
    static string Gender;
    int Phonenumber;
    int age;
    string Address;
    static int CID;
    char arr[100];
    void information()
    {
        cout << "\nEnter the Customer ID :-";
        cin >> CID;
        cout << "\nEnter the Name :-";
        cin >> Name;
        cout << "\nEnter your Gender :-";
        cin >> Gender;
        cout << "\nEnter your Age :-";
        cin >> age;
        cout << "\nEnter your Address :-";
        cin >> Address;
        cout << "\nEnter your Contect Number :-";
        cin >> Phonenumber;
        cout << "\nYour Details are saved with us";
        
    }
};
int Details::CID;
string Details::Name;
string Details::Gender;
//

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float Charges;
    void Flight()
    {
        string FlightN[] = {"Dubai","London","Paris","Bijing","Tokyo"};
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". Flight to" << FlightN[i] << endl;
        }
        cout << "\nWelcone to the BHARATAIRLINE!" << endl;
        cout << "press the number of the country of which you want to book the Flight ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "_________Welcome to Dubai Emirates_______\n"
                 << endl;
            cout << "Your comfort is our priority;So Enjoy your Journey!" << endl;
            cout << "fllowing are the Flight \n"
                 << endl;
            cout << "1.DUB_498" << endl;
            cout << "\n to Sunday 8:00 am 10 hrs RS:-140000" << endl;
            cout << "2.DUB_598" << endl;
            cout << "\n to Wednesday 4:00 am 18 hrs RS:-100000" << endl;
            cout << "3.DUB_698" << endl;
            cout << "\n to Saturday 9:00 pm 12 hrs RS:-240000" << endl;
            cout << "\nSelect the Flight you want to book:";
            cin >> choice1;
            if (choice1 == 1)
            {
                Charges = 140000;
                cout << "\n you have successfully booked flight DUB_498" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 2)
            {
                Charges = 100000;
                cout << "\n you have successfully booked flight DUB_598" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 3)
            {
                Charges = 240000;
                cout << "\n you have successfully booked flight DUB_698" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else
            {
                cout << "invalid input ,Shifting to the mainmenu and choose the Right path" << endl;
                Flight();
                return;
            }
            
        }
        case 2:
        {
            cout << "_________Welcome to BRITAIn Airline_______\n"
                 << endl;
            cout << "Your comfort is our priority;So Enjoy your Journey!" << endl;
            cout << "fllowing are the Flight \n"
                 << endl;
            cout << "1.BE_461" << endl;
            cout << "\n to Monday 6:00 am 20 hrs RS:-270000" << endl;
            cout << "2.BE_561" << endl;
            cout << "\n to Thrusday 4:00 am 18 hrs RS:-250000" << endl;
            cout << "3.BE_661" << endl;
            cout << "\n to Friday 9:00 pm 16 hrs RS:-240000" << endl;
            cout << "\nSelect the Flight you want to book:";
            cin >> choice1;
            if (choice1 == 1)
            {
                Charges = 270000;
                cout << "\n you have successfully booked flight BE_461" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 2)
            {
                Charges = 250000;
                cout << "\n you have successfully booked flight BE_561" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 3)
            {
                Charges = 240000;
                cout << "\n you have successfully booked flight BE_661" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else
            {
                cout << "invalid input ,Shifting to the mainmenu and choose the Right path" << endl;
                Flight();
                return;
            }
            
        }
        case 3:
        {
            cout << "_________Welcome to Paris Airline_______\n"
                 << endl;
            cout << "Your comfort is our priority;So Enjoy your Journey!" << endl;
            cout << "fllowing are the Flight \n"
                 << endl;
            cout << "1.PE_491" << endl;
            cout << "\n to sunday 8:00 am 9 hrs RS:-240000" << endl;
            cout << "2.PE_591" << endl;
            cout << "\n to Friday 4:00 am 15 hrs RS:-200000" << endl;
            cout << "3.PE_691" << endl;
            cout << "\n to Saturday 9:00 pm 11 hrs RS:-240000" << endl;
            cout << "\nSelect the Flight you want to book:";
            cin >> choice1;
            if (choice1 == 1)
            {
                Charges = 240000;
                cout << "\n you have successfully booked flight PE_491" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 2)
            {
                Charges = 200000;
                cout << "\n you have successfully booked flight PE_591" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 3)
            {
                Charges = 240000;
                cout << "\n you have successfully booked flight PE_691" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else
            {
                cout << "invalid input ,Shifting to the mainmenu and choose the Right path" << endl;
                Flight();
                return;
            }
            
        }
        case 4:
        {
            cout << "_________Welcome to CHINA Airline_______\n"
                 << endl;
            cout << "Your comfort is our priority;So Enjoy your Journey!" << endl;
            cout << "fllowing are the Flight \n"
                 << endl;
            cout << "1.CH_488" << endl;
            cout << "\n to Tuesday 8:00 am 4 hrs RS:-140000" << endl;
            cout << "2.CH_588" << endl;
            cout << "\n to Friday 4:00 am 8 hrs RS:-100000" << endl;
            cout << "3.CH_688" << endl;
            cout << "\n to sunday 9:00 pm 12 hrs RS:-240000" << endl;
            cout << "\nSelect the Flight you want to book:";
            cin >> choice1;
            if (choice1 == 1)
            {
                Charges = 40000;
                cout << "\n you have successfully booked flight CH_488" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 2)
            {
                Charges = 50000;
                cout << "\n you have successfully booked flight CH_588" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 3)
            {
                Charges = 40000;
                cout << "\n you have successfully booked flight CH_688" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else
            {
                cout << "invalid input ,Shifting to the mainmenu and choose the Right path" << endl;
                Flight();
                return;

            }
            
        }
        case 5:
        {
            cout << "_________Welcome to Tokyo airline_______\n"
                 << endl;
            cout << "Your comfort is our priority;So Enjoy your Journey!" << endl;
            cout << "fllowing are the Flight \n"
                 << endl;
            cout << "1.tt_498" << endl;
            cout << "\n to Monday 8:00 am 10 hrs RS:-140000" << endl;
            cout << "2.DUB_598" << endl;
            cout << "\n to Tuesday 4:00 am 18 hrs RS:-100000" << endl;
            cout << "3.DUB_698" << endl;
            cout << "\n to sunday 9:00 pm 12 hrs RS:-240000" << endl;
            cout << "\nSelect the Flight you want to book:";
            cin >> choice1;
            if (choice1 == 1)
            {
                Charges = 140000;
                cout << "\n you have successfully booked flight tt_498" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 2)
            {
                Charges = 100000;
                cout << "\n you have successfully booked flight tt_598" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else if (choice1 == 3)
            {
                Charges = 240000;
                cout << "\n you have successfully booked flight DUB_698" << endl;
                cout << "you can go  back to menu and take the ticket" << endl;
                return;
            }
            else
            {
                cout << "invalid input ,Shifting to the mainmenu and choose the Right path" << endl;
                Flight();
                return;
            }
            
        default:
        {
            cout << "invalid input ,Shifting to the mainmenu and choose the correct path" << endl;
            return;
        }
        }
        }
    }
};
float Registration::Charges;
int Registration::choice;
// Ticket Class
class ticket : public Registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "_______BHARAT_ AIRLINE______";
            outf << "_________Ticket________";
            outf << "_____________________________";
            outf << "Customer ID:" << Details::CID << endl;
            outf << "Customer Name" << Details::Name << endl;
            outf << "Customer Gender" << Details::Gender << endl;
            outf << "\tDescription" << endl
                 << endl;
            if (Registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (Registration::choice == 2)
            {
                destination = "London";
            }
            else if (Registration::choice == 3)
            {
                destination = "Paris";
            }
            else if (Registration::choice == 4)
            {
                destination = "Bijing";
            }
            else if (Registration::choice == 5)
            {
                destination = "Tokyo";
            }
            outf << "Destination\t\t" << destination << endl;
            outf << "Flight cost:\t\t" << Registration::Charges << endl;
        }
        outf.close();
    }
    void disBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "file error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};
class flightbookingSystem{
    private:
    Details del;
    Registration reg;
    ticket tic;

    public:
    Management() {
        mainmenu();
    }
void mainmenu()
{
    int harr;
    int back;
    cout << "\t       BHARATAIRLINE\n"
         << endl;
    cout << "\t_______mainmenu_______" << endl;
    cout << "\t___________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t|\t  press 1 to add the Costomer Details  \t|" << endl;
    cout << "\t|\t  press 2 for Flight Registration      \t|" << endl;
    cout << "\t|\t  press 3  for Ticket and Charges      \t|" << endl;
    cout << "\t|\t  press 4 for Exit                     \t|" << endl;
    cout << endl;
    cout << "\t____________________________________________________" << endl;
    cout << "Enter the choice :";
    cin >> harr;
    Details d;
    Registration r;
    ticket t;
    switch (harr)
    {
    case 1:
    {
        cout << "________Customer_________\n"
             << endl;
        d.information();
        cout << "press any key for go back to mainmenu";
        cin >> back;
        if (back == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
        break;
    }
    
    case 2:
    {
        cout << "________Book a Flight using this System________\n"
             << endl;
        r.Flight();
        cout << "press any key for go back to mainmenu";
        cin >> back;
        if (back == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
        
        break;
    }
    case 3:
    {
        cout << "________Get Your Tickets________\n"
             << endl;
        t.Bill();
        cout << "Your Tickets is printed You can Collect it" << endl;
        cout << "press 1 to Display Your Ticket" << endl;
        cin >> back;
        if (back == 1)
        {
            t.disBill();
            cout << "press any key for go to back" << endl;
            cin >> back;
            if (back == 1)
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
            break;
        }
    }
    case 4:
    {
        cout << "\n\n\t___Thank-You___" << endl;
        break;
    }
    default:
    {
        cout << "Invalid input Please try again:\n"
             << endl;
        mainmenu();
        break;
    }
    }
}
};
int main()
{
    flightbookingSystem fly;
    fly.mainmenu();
    return 0;
}