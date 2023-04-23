#include<iostream>
#include<string.h>
using namespace std;

class Bills
{
    private:
        long lpg_id,amount;
        string name,cstmr_id;
    public:
        void PayGas();
        void BookGas();
        void Electricity();
};
void Bills::PayGas()
{
    int choice,select;
    cout<<endl<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
    cout<<"Enter your 10 digit Consumer Number : ";
    cin>>cstmr_id;
    fflush(stdin);
    cout<<"Enter Name : ";
    getline(cin,name);
    cout<<endl<<"1. Proceed To Pay 640.00"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Select from above - ";
    cin>>select;
    switch(select)
    {
        case 1:
            cout<<endl<<"    \"PAYMENT SUCCESSFUL\""<<endl<<endl;
            cout<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
            cout<<"Consumer ID - "<<cstmr_id<<endl;
            cout<<"Customer Name - "<<name<<endl;
            cout<<"Amount - 640"<<endl;
            break;
        case 2:
            cout<<endl<<"\'EXIT SUCCESSFUL\'"<<endl;
            break;
        default:
            cout<<endl<<"Invalid Choice"<<endl;
            break;
    }
}
void Bills::BookGas()
{
    int select;
    cout<<endl<<"Gas Provider - Bharatgas"<<endl<<endl;
    cout<<"Registered Mobile Number or LPG ID : ";
    cin>>lpg_id;
    fflush(stdin);
    cout<<"Enter Name : ";
    getline(cin,name);
    cout<<endl<<"1. Proceed To Pay 955.00"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Select - ";
    cin>>select;
    switch(select)
    {
        case 1:
            cout<<endl<<"  Satyajit Gas Agency"<<endl;
            cout<<"  -------------------"<<endl;
            cout<<endl<<"   \"Order Placed Successfully\""<<endl;
            cout<<endl<<endl<<"Transaction ID - NX2203221958431"<<endl;
            cout<<"Customer Name - "<<name<<endl;
            cout<<"Distributor Name - Satyajit Gas Agency"<<endl;
            cout<<"Distributor ID - 118144"<<endl;
            cout<<"Amount - 955"<<endl;
            break;
        case 2:
            cout<<endl<<"\'EXIT SUCCESSFUL\'"<<endl;
            break;
    }
}
void Bills::Electricity()
{
    int select;
    cout<<endl<<"State - Gujarat"<<endl;
    cout<<"Electricity Board - Paschim Gujarat Vij Company Limited (PGVCL)"<<endl;
    cout<<"Enter Consumer Number : ";
    cin>>cstmr_id;
    cout<<"Enter Amount : ";
    cin>>amount;
    fflush(stdin);
    cout<<"Enter Name : ";
    getline(cin,name);
    cout<<endl<<"Proceed To Pay"<<endl;
    cout<<"Exit"<<endl;
    cout<<"Select - ";
    cin>>select;
    switch(select)
    {
        case 1:
            cout<<endl<<"    \"PAYMENT SUCCESSFUL\""<<endl<<endl;
            cout<<"Bill Details"<<endl<<endl;
            cout<<"Electricity Board - Paschim Gujarat Vij Company Limited (PGVCL)"<<endl;
            cout<<"Customer Name - "<<name<<endl;
            cout<<"Consumer Id - "<<cstmr_id<<endl;
            cout<<"Amount - "<<amount<<endl;
            break;
        case 2:
            cout<<endl<<"\'EXIT SUCCESSFUL\'"<<endl;
            break;
    }
}
void Bill()
{
    Bills B;
    int ch,select;
    cout<<endl<<"1. Gas Bill"<<endl;
    cout<<"2. Electricity Bill"<<endl<<endl;
    cout<<"Select Your Choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<endl<<"1. Pay Gas Bill"<<endl;
            cout<<"2. Book Cylinder"<<endl;
            cout<<endl<<"Select : ";
            cin>>select;
            switch(select)
            {
                case 1:
                    B.PayGas();
                    break;
                case 2:
                    B.BookGas();
                    break;
                default:
                    cout<<endl<<"Invalid Choice..."<<endl;
            }
            break;
        case 2:
            B.Electricity();
            break;
        default:
            cout<<endl<<"Invalid Choice..."<<endl;
            break;
    }
}
class Insurance
{
    private:
        char email[100],policy[11];

    public:
       void Life1();
       void Life2();
       void input();
}i2;
void Insurance::input()
{
    fflush(stdin);
    cout<<"Enter Policy Number : ";
    cin>>policy;
    fflush(stdin);
    cout<<"Enter Registerd E-Mail Id : ";
    cin.getline(email,100);
}
void Insurance::Life1()
{
    int pay,pin;
    char ac_no[12];
    cout<<endl<<"Insurance Provider - "<<"\"L.I.C. (Life Insurance Corporation)\""<<endl<<endl;
    i2.input();
    fflush(stdin);
    cout<<endl<<"1. Debit Card (Wallet)"<<endl;
    cout<<"2. BHIM UPI";
    cout<<endl<<"Select Payment Method : ";
    cin>>pay;
    if(pay == 1)
    {
        cout<<"Enter 4 - digit PIN : ";
        cin>>pin;
        cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl;
    }
    else
    {
        cout<<"Enter Account Number : ";
        cin>>ac_no;
        cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl;
    }
}
void Insurance::Life2()
{
    int pay,pin;
    char ac_no[12];
    cout<<endl<<"Insurance Provider - "<<"\"Aditya Birla Sun Life Insurance\""<<endl<<endl;
    i2.input();
    fflush(stdin);
    cout<<endl<<"1. Debit Card (Wallet)"<<endl;
    cout<<"2. BHIM UPI";
    cout<<endl<<"Select Payment Method : ";
    cin>>pay;
    if(pay == 1)
    {
        cout<<"Enter 4 - digit PIN : ";
        cin>>pin;
        cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl;
    }
    else
    {
        cout<<"Enter Account Number : ";
        cin>>ac_no;
        cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl;
    }
}
void Insure()
{
    Insurance i;
    i.Life1();
}
class Bookings
{
    private:
        float convfees,base,igst,amount;
        char name[1000],card_no[12];
    public:
        void Moviedisplay();
        void Movieinfo();
        void payment();
        void Movie();
}r2;
void Bookings::Moviedisplay()
{
    cout<<endl<<endl<<"\"BOOKING CONFIRMED\""<<endl<<endl;
    cout<<"Bhool Bhulaiyaa 2"<<endl;
    cout<<"INOX: Reliance Mega Mall,Rajkot"<<endl;
}
void Bookings::payment()
{
    fflush(stdin);
    cout<<endl<<"Enter Card Number : ";
    cin.getline(card_no,12);
    cout<<"Enter Name : ";
    cin.getline(name,1000);
}
void Bookings::Movieinfo()
{
    cout<<endl<<"Now Showing"<<endl<<endl;
    cout<<"Bhool Bhulaiyaa 2"<<endl<<endl;
    cout<<endl<<"\"Bhool Bhulaiyaa 2\""<<endl;
    cout<<" 2D\tHindi"<<endl;
    cout<<" 2h 23m\t Comedy,Horror\t UA"<<endl;
    cout<<endl<<"INOX: Reliance Mega Mall,Rajkot"<<endl;
}
void Bookings::Movie()
{
    int seat;
    r2.Movieinfo();
    int show,select,pay,ticket;
    cout<<" 9:00 am\t4:45 pm"<<endl;
    cout<<endl<<" Select Show : ";
    cin>>show;
    switch(show)
    {
        case 1:
            cout<<endl<<"1  2  3  4  5  6  7  8  9  10"<<endl;
            cout<<endl<<"How Many Seats? : ";
            cin>>seat;
            while(seat>0 && seat<=10)
            {
                cout<<endl<<"Royal 200.00\nClub 180.00\nExecutive 160.00"<<endl<<endl;
                cout<<"Select Price : ";
                cin>>select;
                switch(select)
                {
                    case 1:
                        ticket = 200 * seat;
                        cout<<endl<<"1. Pay "<<ticket<<".00"<<endl;
                        cout<<"2. Exit"<<endl;
                        cout<<endl<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    case 2:
                        ticket = 180 * seat;
                        cout<<endl<<"1. Pay "<<ticket<<".00"<<endl;
                        cout<<"2. Exit"<<endl;
                        cout<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    case 3:
                        ticket = 160 * seat;
                        cout<<endl<<"Pay "<<ticket<<".00"<<endl;
                        cout<<"Exit"<<endl;
                        cout<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    default:
                        cout<<endl<<"Invalid Choice..."<<endl;
                        break;
                }
                break;
        case 2:
            cout<<endl<<"1  2  3  4  5  6  7  8  9  10"<<endl;
            cout<<endl<<"How Many Seats? : ";
            cin>>seat;
            while(seat>0 && seat<=10)
            {
                cout<<endl<<"Royal 240.00\nClub 220.00\nExecutive 200.00"<<endl<<endl;
                cout<<"Select Price : ";
                cin>>select;
                switch(select)
                {
                    case 1:
                        ticket = 240 * seat;
                        cout<<endl<<"1. Pay "<<ticket<<".00"<<endl;
                        cout<<"2. Exit"<<endl;
                        cout<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    case 2:
                        ticket = 220 * seat;
                        cout<<endl<<"1. Pay "<<ticket<<".00"<<endl;
                        cout<<"2. Exit"<<endl;
                        cout<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    case 3:
                        ticket = 200 * seat;
                        cout<<endl<<"Pay "<<ticket<<".00"<<endl;
                        cout<<"Exit"<<endl;
                        cout<<"Select : ";
                        cin>>pay;
                        base = ticket * 0.15;
                        igst = base * 0.18;
                        convfees = base + igst;
                        amount = ticket + convfees;
                        if(pay==1)
                        {
                            r2.payment();
                            r2.Moviedisplay();
                            cout<<"Ticket(s) - "<<seat<<endl;
                            cout<<"Amount Paid - "<<amount<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                        }
                        break;
                    default:
                        cout<<endl<<"Invalid Choice..."<<endl;
                        break;
                }
        }
        default:
            cout<<endl<<"\"NO SHOWS FOUND\""<<endl;
            break;
        }
    }
}
void Movie()
{
    Bookings b;
    b.Movie();
}
class Recharge
{
        char phone[15],card_no[12],cstmr_id[12],name[1000];
    public:
        void getdataMobile();
        void Prepaid();
        void Predisplay();
        void DTH();
        void DTHdisplay();
        void payment();
};
void Recharge::getdataMobile()
{
    fflush(stdin);
    cout<<endl<<"Enter Mobile Number : ";
    cin.getline(phone,15);
    cout<<endl;
}
void Recharge::payment()
{
    fflush(stdin);
    cout<<endl<<"Enter Card Number : ";
    cin.getline(card_no,12);
    cout<<"Enter Name : ";
    cin.getline(name,1000);
}
void Recharge::Prepaid()
{
    int plan,select;
    Recharge r2;
    cout<<"1. Price - 719\tValidity - 84 Days"<<endl;
    cout<<"2. Price - 2999\tValidity - 365 Days"<<endl;
    cout<<endl<<"Select Plan : ";
    cin>>plan;
    switch(plan)
    {
        case 1:
            cout<<endl<<"1. Pay 719.00"<<endl;
            cout<<"2. Exit"<<endl;
            cout<<endl<<"Select : ";
            cin>>select;
            switch(select)
            {
                case 1:
                    r2.payment();
                    break;
                case 2:
                    cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                    break;
                default:
                    cout<<endl<<"\"Invalid Choice\""<<endl;
                    break;
            }
            break;
        case 2:
            cout<<endl<<"1. Pay 2999.00"<<endl;
            cout<<"2. Exit"<<endl;
            cout<<endl<<"Select : ";
            cin>>select;
            switch(select)
            {
                case 1:
                    r2.payment();
                    break;
                case 2:
                    r2.payment();
                    break;
                default:
                    cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
                    break;
            }
            break;
        default:
            cout<<endl<<"\"NO PLANS FOUND\""<<endl;
            break;
    }
}
void Recharge::Predisplay()
{
    cout<<endl<<endl<<"\"RECHARGE SUCCESSFUL\""<<endl;
                            cout<<endl<<endl<<"Plan Details"<<endl;
                            cout<<"Data   2.5 GB/Day"<<endl;
                            cout<<"Voice    Unlimited"<<endl;
                            cout<<"SMS    100 SMS/Day"<<endl<<endl;
                            cout<<"Subscription    Disney+Hotstar (1 Year)"<<endl;
                            cout<<"                Amazon Prime (30 Days Trial)"<<endl;
                            cout<<"                Apollo 24x7,Wynk Music"<<endl;

}
void Recharge::DTH()
{
    Recharge r2;
    int select;
    cout<<endl<<"Service Provider - GTPL"<<endl;
    cout<<endl<<"Your Current Plan is : Price 360 Validity 30 Days"<<endl;
    cout<<endl<<"1. Pay 360.00"<<endl;
    cout<<"2. Exit"<<endl<<endl;
    cout<<endl<<"Select : ";
    cin>>select;
    switch(select)
    {
        case 1:
            r2.payment();
            break;
        case 2:
            r2.payment();
            break;
        default:
            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl;
            break;
    }
}
void Recharge::DTHdisplay()
{
    cout<<endl<<endl<<"\"RECHARGE SUCCESSFUL\""<<endl;
                cout<<endl<<"Mobile Number - "<<phone<<endl;
}
void recharge()
{
    Recharge r;
    int choice;
    cout<<"1. Mobile Recharge"<<endl;
    cout<<"2. DTH Recharge"<<endl;
    cout<<endl<<"Select - ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            r.getdataMobile();
            r.Prepaid();
            r.Predisplay();
            break;
        case 2:
            r.getdataMobile();
            r.DTH();
            r.DTHdisplay();
            break;
        default:
            cout<<endl<<"Invalid Choice"<<endl<<endl;
    }
}
class Bus
{
    private:
        double fair,reserv=10,tax,amount,seats;
        char card_no[13];
        string name;
    public:
        void displayDetails();
        void Transportaion();
        void Book();
}t1;
void Bus::displayDetails()
{
    cout<<endl<<"Source - Rajkot\nDestination - Ahmedabad"<<endl<<endl;
}
void Bus::Book()
{
    cout<<endl<<endl<<"\"BOOKING CONFIRMED\""<<endl;
    cout<<endl<<"Source - Rajkot\nDestination - Ahmedabad"<<endl<<endl;
}
void Bus::Transportaion()
{
    char date[11],contact[11];
    t1.displayDetails();
    cout<<"Enter Date : ";
    cin.getline(date,11);
    cout<<endl<<"Bus - 1     8:20 am    Price : 170"<<endl;
    cout<<endl<<"1  2  3  4  5  6  7  8  9  10"<<endl;
    cout<<"Select No. of Seats : ";
    cin>>seats;
    while(seats>0 && seats<=10)
    {
        for(int i=1;i<=seats;i++)
        {
            cout<<endl<<"Passenger "<<i<<endl;
            fflush(stdin);
            cout<<"Enter Name : ";
            getline(cin,name);
        }
        break;
    }
    cout<<endl<<"Enter Mobile Number : ";
    cin.getline(contact,11);
    amount = 170 * seats;
    tax = amount * 0.025 * 2;
    fair = amount + tax + reserv;
    cout<<endl<<"Enter Card Number : ";
    cin.getline(card_no,13);
    t1.Book();
    cout<<"Fair = "<<fair<<endl;
}
void bus()
{
    Bus b;
    b.Transportaion();
}

void choice()
{
    int choice;
    cout<<"1. Bills"<<endl;
    cout<<"2. Movie "<<endl;
    cout<<"3. Recharge"<<endl;
    cout<<"4. Bus Booking"<<endl;
    cout<<"5. Insurance"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<endl<<"Select Your Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            Bill();
            break;
        case 2:
            Movie();
            break;
        case 3:
            recharge();
            break;
        case 4:
            bus();
            break;
        case 5:
            Insure();
            break;
        case 6:
            cout<<endl<<"\"EXIT SUCCESSFUL\""<<endl<<endl;
            exit(0);
            break;
        default:
            cout<<endl<<"Invalid Choice...."<<endl<<endl;
            break;
    }
}
void menu()
{
    while(1)
    {
        cout<<endl<<"                                                   HEEV Multi-Services"<<endl;
        cout<<"                                                   -------------------"<<endl<<endl<<endl;
        choice();
    }
}
int main()
{
    menu();
    return 0;
}
