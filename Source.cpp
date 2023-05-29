/**Created By : Het Buch
   Date Created : 10/06/2022
   Time Created : 07:47:40 PM
   Concepts Used : Functions,Classes,Conditionals,Loops
*/
#include<iostream>
#include<string.h>
using namespace std;
                                /**Bills*/
class Bills{
    long lpg_id,amount;
    string name,cstmr_id;
    int select;
public:
    void PayGas();
    void BookGas();
    void Electricity();
    void PayOpt();
    void Exit();
    void UsrData();
    void Default();
    void PaySuccess();
}b1;
void Bills::PaySuccess(){cout<<endl<<"    \"PAYMENT SUCCESSFUL\""<<endl<<endl;}
void Bills::PayOpt(){
    cout<<endl<<"1. Proceed To Pay"<<endl;
    cout<<"2. Exit"<<endl;
}
void Bills::Exit(){cout<<endl<<"\'EXIT SUCCESSFUL\'"<<endl;}
void Bills::Default(){cout<<endl<<"Invalid Choice..."<<endl<<endl;}
void Bills::UsrData(){
    cout<<"Enter your Consumer Number : ";
    cin>>cstmr_id;
    fflush(stdin);
    cout<<"Enter Name : ";
    getline(cin,name);
}
void Bills::PayGas(){
    cout<<endl<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
    b1.UsrData();
    b1.PayOpt();
    cout<<"Select from above - ";
    cin>>select;
    switch(select){
    case 1:
        b1.PaySuccess();
        cout<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
        cout<<"Consumer ID - "<<b1.cstmr_id<<endl;
        cout<<"Customer Name - "<<b1.name<<endl;
        cout<<"Amount - 640"<<endl;
        break;
    case 2:b1.Exit();break;
    default:b1.Default();
    }
}
void Bills::BookGas(){
    cout<<endl<<"Gas Provider - Bharatgas"<<endl<<endl;
    b1.UsrData();
    b1.PayOpt();
    cout<<"Select from above - ";
    cin>>select;
    switch(select){
    case 1:
        cout<<endl<<"  Satyajit Gas Agency"<<endl;
        cout<<"  -------------------"<<endl;
        cout<<endl<<"   \"Order Placed Successfully\""<<endl;
        cout<<endl<<endl<<"Transaction ID - NX2203221958431"<<endl;
        cout<<"Customer Name - "<<b1.name<<endl;
        cout<<"Distributor Name - Satyajit Gas Agency"<<endl;
        cout<<"Distributor ID - 118144"<<endl;
        cout<<"Amount - 955"<<endl;
        break;
    case 2:b1.Exit();break;
    default:b1.Default();
    }
}
void Bills::Electricity(){
    cout<<endl<<"State - Gujarat"<<endl;
    cout<<"Electricity Board - Paschim Gujarat Vij Company Limited (PGVCL)"<<endl;
    b1.UsrData();
    cout<<"Enter Amount : ";
    cin>>amount;
    b1.PayOpt();
    cout<<"Select from above - ";
    cin>>select;
    switch(select){
    case 1:
        b1.PaySuccess();
        cout<<"Bill Details"<<endl<<endl;
        cout<<"Electricity Board - Paschim Gujarat Vij Company Limited (PGVCL)"<<endl;
        cout<<"Customer Name - "<<b1.name<<endl;
        cout<<"Consumer Id - "<<b1.cstmr_id<<endl;
        cout<<"Amount - "<<b1.amount<<endl;
        break;
    case 2:b1.Exit();break;
    default:b1.Default();
    }
}
void Bill(){
    Bills B;
    int ch,select;
    cout<<endl<<"1. Gas Bill"<<endl;
    cout<<"2. Electricity Bill"<<endl<<endl;
    cout<<"Select Your Choice : ";
    cin>>ch;
    switch(ch){
    case 1:
        cout<<endl<<"1. Pay Gas Bill"<<endl;
        cout<<"2. Book Cylinder"<<endl;
        cout<<endl<<"Select : ";
        cin>>select;
        switch(select){
        case 1:B.PayGas();break;
        case 2:B.BookGas();break;
        default:b1.Default();
        }
        break;
    case 2:B.Electricity();break;
    default:b1.Default();
    }
}
                                /**Insurance*/
class Insurance{
    char email[100],ac_no[12],policy[11];
    int pay,pin;
public:
    void Life1();
    void Life2();
    void Input();
    void InsureSuccess();
    void PayOpt();
    void InpPin();
    void InpAcc();
    void PayType(int p);
} i,i2;
void Insurance::InsureSuccess(){cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl;}
void Insurance::PayOpt(){
    cout<<endl<<"1. Debit Card (Wallet)"<<endl;
    cout<<"2. BHIM UPI";
}
void Insurance::PayType(int p){
    if(p == 1){i2.InpPin();i2.InsureSuccess();}
    else{i2.InpAcc();i2.InsureSuccess();}
}
void Insurance::InpPin(){
    cout<<endl<<"Enter 4 - digit PIN : ";
    cin>>pin;
}
void Insurance::InpAcc(){
    cout<<endl<<"Enter your account number : ";
    cin>>ac_no;
}
void Insurance::Input(){
    fflush(stdin);
    cout<<"Enter Policy Number : ";
    cin>>policy;
    fflush(stdin);
    cout<<"Enter Registerd E-Mail Id : ";
    cin.getline(email,100);
}
void Insurance::Life1(){
    cout<<endl<<"Insurance Provider - "<<"\"L.I.C. (Life Insurance Corporation)\""<<endl<<endl;
    i2.Input();
    fflush(stdin);
    i2.PayOpt();
    cout<<endl<<endl<<"Select Payment Method : ";
    cin>>pay;
    i2.PayType(pay);
}
void Insurance::Life2(){
    cout<<endl<<"Insurance Provider - "<<"\"Aditya Birla Sun Life Insurance\""<<endl<<endl;
    i2.Input();
    fflush(stdin);
    i2.PayOpt();
    cout<<endl<<endl<<"Select Payment Method : ";
    cin>>pay;
    i2.PayType(pay);
}
void Insure(){
    int ch;
    cout<<endl<<"1. Insurance - 1 : L.I.C. (Life Insurance Corporation) Price : Rs. 500/month"<<endl;
    cout<<"2. Insurance - 2 : Aditya Birla Sun Life Insurance Price : Rs. 649/month"<<endl;
    cout<<endl<<"Select Insurance Provider : ";
    cin>>ch;
    switch(ch){
        case 1:{i.Life1();break;}
        case 2:{i.Life2();break;}
        default:b1.Default();
    }
}
                                    /**Movie Ticket Booking*/
class MovieBook{
    float convfees,base,igst,amount;
    char name[1000],card_no[12];
    int seat,select,pay,ticket;
public:
    void MovieDisplay();
    void MovieInfo();
    void Payment();
    void Movie();
    void AmtTotal(int amt);
    int Seat();
    void SelectPrice();
    void FinalDisplay();
    void PayInit(int payticket);
    void Display(int t);
} r2;
void MovieBook::FinalDisplay(){
    r2.Payment();
    r2.MovieDisplay();
    cout<<"Ticket(s) - "<<r2.seat<<endl;
    cout<<"Amount Paid - "<<r2.amount<<endl;
}
void MovieBook::AmtTotal(int amt){
    base = amt * 0.15;
    igst = base * 0.18;
    convfees = base + igst;
    amount = amt + convfees;
}
int MovieBook::Seat(){
    cout<<endl<<"1  2  3  4  5  6  7  8  9  10"<<endl;
    cout<<endl<<"How Many Seats? : ";
    cin>>seat;
    return seat;
}
void MovieBook::SelectPrice(){
    cout<<"Select Price : ";
    cin>>select;
}
void MovieBook::PayInit(int payticket){
    cout<<endl<<"1. Pay "<<payticket<<".00"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<endl<<"Select : ";
    cin>>pay;
}
void MovieBook::MovieDisplay(){
    cout<<endl<<endl<<"\"BOOKING CONFIRMED\""<<endl<<endl;
    cout<<"Bhool Bhulaiyaa 2"<<endl;
    cout<<"INOX: Reliance Mega Mall,Rajkot"<<endl;
}
void MovieBook::Display(int t){
    r2.PayInit(t);
    r2.AmtTotal(t);
}
void MovieBook::Payment(){
    fflush(stdin);
    cout<<endl<<"Enter Card Number : ";
    cin.getline(card_no,12);
    cout<<"Enter Name : ";
    cin.getline(name,1000);
}
void MovieBook::MovieInfo(){
    cout<<endl<<"Now Showing"<<endl<<endl;
    cout<<endl<<"\"Bhool Bhulaiyaa 2\""<<endl;
    cout<<" 2D\tHindi"<<endl;
    cout<<" 2h 23m\t Comedy,Horror\t UA"<<endl;
    cout<<endl<<"INOX: Reliance Mega Mall,Rajkot"<<endl;
}
void MovieBook::Movie(){
    r2.MovieInfo();
    int show,seats;
    cout<<" 9:00 am\t4:45 pm"<<endl;
    cout<<endl<<" Select Show : ";
    cin>>show;
    switch(show){
        case 1:
            seats = r2.Seat();
            while(seats>0 && seats<=10){
                cout<<endl<<"Royal 200.00\nClub 180.00\nExecutive 160.00"<<endl<<endl;
                r2.SelectPrice();
                switch(r2.select){
                    case 1:{
                        ticket = 200 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    case 2:{
                        ticket = 180 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    case 3:{
                        ticket = 160 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    default:b1.Default();
                }
                break;
            }
            break;
        case 2:
            seats = r2.Seat();
            while(seats>0 && seats<=10){
                cout<<endl<<"Royal 240.00\nClub 220.00\nExecutive 200.00"<<endl<<endl;
                r2.SelectPrice();
                switch(r2.select){
                    case 1:{
                        ticket = 240 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    case 2:{
                        ticket = 220 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    case 3:{
                        ticket = 200 * seats;
                        r2.Display(ticket);
                        switch(r2.pay){
                            case 1:{r2.FinalDisplay();break;}
                            case 2:{b1.Exit();break;}
                            default:b1.Default();
                        }
                        break;
                    }
                    default:b1.Default();
                }
                break;
            }
            break;
        default:cout<<endl<<"\"NO SHOWS FOUND\""<<endl;
    }
}
void Movie(){
    MovieBook b;
    b.Movie();
}
                            /**Recharge*/
class Recharge{
    char phone[15],card_no[12],cstmr_id[12],name[1000];
    int select;
public:
    void getdataMobile();
    void Prepaid();
    void Predisplay();
    void DTH();
    void DTHdisplay();
    void Payment();
}r;
void Recharge::getdataMobile(){
    fflush(stdin);
    cout<<endl<<"Enter Mobile Number : ";
    cin.getline(phone,15);
    cout<<endl;
}
void Recharge::Payment(){
    fflush(stdin);
    cout<<endl<<"Enter Card Number : ";
    cin.getline(card_no,12);
    cout<<"Enter Name : ";
    cin.getline(name,1000);
}
void Recharge::Prepaid(){
    int plan;
    cout<<endl<<"1. Price - 719\tValidity - 84 Days"<<endl;
    cout<<"2. Price - 2999\tValidity - 365 Days"<<endl;
    cout<<endl<<"Select Plan : ";
    cin>>plan;
    switch(plan){
    case 1:
        cout<<endl<<"1. Pay 719.00"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<endl<<"Select : ";
        cin>>select;
        switch(select){
            case 1:r.Payment();break;
            case 2:b1.Exit();break;
            default:b1.Default();
        }
        break;
    case 2:
        cout<<endl<<"1. Pay 2999.00"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<endl<<"Select : ";
        cin>>select;
        switch(select){
            case 1:r.Payment();break;
            case 2:b1.Exit();break;
            default:b1.Default();
        }
        break;
    default:cout<<endl<<"\"NO PLANS FOUND\""<<endl;
    }
}
void Recharge::Predisplay(){
    cout<<endl<<endl<<"\"RECHARGE SUCCESSFUL\""<<endl;
    cout<<endl<<endl<<"Plan Details"<<endl;
    cout<<"Data   2.5 GB/Day"<<endl;
    cout<<"Voice    Unlimited"<<endl;
    cout<<"SMS    100 SMS/Day"<<endl<<endl;
    cout<<"Subscription    Disney+Hotstar (1 Year)"<<endl;
    cout<<"                Amazon Prime (30 Days Trial)"<<endl;
    cout<<"                Apollo 24x7,Wynk Music"<<endl;

}
void Recharge::DTH(){
    cout<<endl<<"Service Provider - GTPL"<<endl;
    cout<<endl<<"Your Current Plan is : Price 360 Validity 30 Days"<<endl;
    cout<<endl<<"1. Pay 360.00"<<endl;
    cout<<"2. Exit"<<endl<<endl;
    cout<<endl<<"Select : ";
    cin>>select;
    switch(select){
        case 1:r.Payment();break;
        case 2:b1.Exit();break;
        default:b1.Default();
    }
}
void Recharge::DTHdisplay(){
    cout<<endl<<endl<<"\"RECHARGE SUCCESSFUL\""<<endl;
    cout<<endl<<"Mobile Number - "<<phone<<endl;
}
void Recharge(){
    int select;
    cout<<"1. Mobile Recharge"<<endl;
    cout<<"2. DTH Recharge"<<endl;
    cout<<endl<<"Select - ";
    cin>>select;
    switch(select){
        case 1:r.getdataMobile();r.Prepaid();r.Predisplay();break;
        case 2:r.getdataMobile();r.DTH();r.DTHdisplay();break;
        default:b1.Default();
    }
}
                            /**Bus Booking*/
class Bus{
    double fair,reserv=10,tax,amount;
    int seats;
    char card_no[13];
    string name;
public:
    void displayDetails();
    void Transportaion();
    void Book();
} t1;
void Bus::displayDetails(){cout<<endl<<"Source - Rajkot\nDestination - Ahmedabad"<<endl<<endl;}
void Bus::Book(){cout<<endl<<endl<<"\"BOOKING CONFIRMED\""<<endl;t1.displayDetails();}
void Bus::Transportaion(){
    char date[11],contact[11];
    t1.displayDetails();
    cout<<"Enter Date : ";
    fflush(stdin);
    cin.getline(date,11);
    cout<<endl<<"Bus - 1     8:20 am    Price : 170"<<endl;
    seats = r2.Seat();
    while(seats>0 && seats<=10){
        for(int i=1; i<=seats; i++){
            cout<<endl<<"Passenger "<<i<<endl;
            fflush(stdin);
            cout<<"Enter Name : ";
            getline(cin,name);
        }
        break;
    }
    fflush(stdin);
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
void BusBooking(){Bus b;b.Transportaion();}
void choice(){
    int choice;
    cout<<"1. Bills"<<endl;
    cout<<"2. Movie Booking"<<endl;
    cout<<"3. Recharge"<<endl;
    cout<<"4. Bus Booking"<<endl;
    cout<<"5. Insurance"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<endl<<"Select Your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: Bill();break;
        case 2:Movie();break;
        case 3:Recharge();break;
        case 4:BusBooking();break;
        case 5:Insure();break;
        case 6:b1.Exit();exit(0);break;
        default:b1.Default();
    }
}
void menu(){
    while(true){
        cout<<endl<<"                                                   HEEV Multi-Services"<<endl;
        cout<<"                                                   -------------------"<<endl<<endl<<endl;
        choice();
    }
}
int main(){menu();return 0;}
