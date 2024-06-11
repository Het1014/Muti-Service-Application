/**
   Coding By : Het Buch
   Assisted By : Dev Savaliya
   Created : 10/06/2022 07:47:40 PM
   Modified : 11/06/2024 11:53:04 AM
   Concepts Used : Functions,Classes,Conditionals,Loops,Reference Variables,Validations,Masking,Inheritance,
                   String Manipulation,Pointers,Structure,Arrays,Encapsulation,Time Manipulation
*/
#include<iostream>
#include<string.h>
#include <cstdlib>
#include <ctime>
#include<conio.h>
using namespace std;
                                                            /*Bills*/
class Bills{
    long lpg_id,amount;
    public:
        string name,cstmr_id,input;
        char ch;
        int select;
        void PayGas();
        void BookGas();
        void Electricity();
        void PayOpt();
        void Exit();
        void UsrData();
        void Default();
        void Summary();
        void PaySuccess();
        void TransactionID(int len);
        void DateTime();
        void Validate(string &input, int length);
        void Helper();
}b1;
void Bills::TransactionID(int len){
    string trans_id;
    string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(0));
    for (int i=0;i<len;++i){trans_id += chars[rand()%chars.size()];}
    cout<<"Transaction ID - "<<trans_id<<endl;
}
void Bills::Helper(){
    b1.UsrData();
    cout<<"Enter Name : ";
    getline(cin,name);
    b1.PayOpt();
    cout<<"Select from above - ";
    cin>>select;
}
void Bills::DateTime(){
    time_t curr_time = time(0);
    tm *conv_time = localtime(&curr_time);
    char buffer[80];
    strftime(buffer,sizeof(buffer),"%d/%m/%Y %I:%M:%S %p",conv_time);
    cout<<"Paid on - "<<buffer<<endl;
}
void Bills::Summary(){
    b1.TransactionID(14);
    b1.DateTime();
    cout<<"Consumer Name - "<<b1.name;
    cout<<endl<<"Consumer ID - "<<b1.cstmr_id<<endl;
}
void Bills::PaySuccess(){cout<<endl<<"    \"PAYMENT SUCCESSFUL\""<<endl<<endl;}
void Bills::PayOpt(){
    cout<<endl<<"1. Proceed To Pay"<<endl;
    cout<<"2. Exit"<<endl;
}
void Bills::Exit(){cout<<endl<<"Transaction Failed\n\n\'EXIT SUCCESSFUL\'"<<endl;}
void Bills::Default(){cout<<endl<<"Invalid Choice..."<<endl<<endl;}
void Bills::UsrData(){cout<<"Enter your Consumer Number : ";getline(cin,cstmr_id);Validate(cstmr_id,12);}
void Bills::PayGas(){
    cout<<endl<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
    b1.Helper();
    switch(select){
        case 1:
            b1.PaySuccess();
            cout<<"Piped Gas Provider - Adani Total Gas Limited"<<endl;
            b1.Summary();
            cout<<"Amount - 640"<<endl;
            break;
        case 2:b1.Exit();break;
        default:b1.Default();
    }
}
void Bills::BookGas(){
    cout<<endl<<"Gas Provider - Bharatgas"<<endl<<endl;
    b1.Helper();
    switch(select){
        case 1:
            cout<<endl<<"     Satyajit Gas Agency"<<endl;
            cout<<"     -------------------"<<endl;
            cout<<endl<<"   \"Order Placed Successfully\""<<endl<<endl;
            cout<<"Distributor Name - Satyajit Gas Agency"<<endl;
            cout<<"Distributor ID - 118144"<<endl;
            b1.Summary();
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
            cout<<"Electricity Board - Paschim Gujarat Vij Company Limited (PGVCL)"<<endl;
            b1.Summary();
            cout<<"Amount - "<<b1.amount<<endl;
            break;
        case 2:b1.Exit();break;
        default:b1.Default();
    }
}
void Bill(){
    cout<<endl<<"1. Gas Bill"<<endl;
    cout<<"2. Electricity Bill"<<endl<<endl;
    cout<<"Select Your Choice : ";
    cin>>b1.select;
    switch(b1.select){
        case 1:
            cout<<endl<<"1. Pay Gas Bill"<<endl;
            cout<<"2. Book Cylinder"<<endl;
            cout<<endl<<"Select : ";
            cin>>b1.select;
            switch(b1.select){case 1:b1.PayGas();break;case 2:b1.BookGas();break;default:b1.Default();}
            break;
        case 2:b1.Electricity();break;
        default:b1.Default();
    }
}
                                                            /*Insurance*/
class Insurance{
    string exp_date,input,email,policy,acc_no;
    int pay,pin,cvv;
    public:
        void Life1();
        void Life2();
        void Input();
        void Summary(string company, int amount);
        void PayOpt();
        void InpPin();
        void InpAcc();
        void ValidateExpDate(string &exp_date);
        void Validate (string &input, int length);
        void PayType(int p);
        void PayMethod();
        void Mask(int length);
        void Helper(string company);
} i2;
void Insurance::Mask(int length){
    while(input.length()<length){
        b1.ch = _getch();
        if(b1.ch=='\r') break;
        if(b1.ch=='\b' &&!input.empty()){cout<<"\b \b";input.pop_back();}
        else if (isprint(b1.ch)){input+=b1.ch;cout<<'*';}
    }cout<<endl;
}
void Insurance::PayMethod(){
    cout<<endl<<endl<<"Select Payment Method : ";
    cin>>pay;
    i2.PayType(pay);
}
void Insurance::Helper(string company){
    cout<<endl<<"Insurance Provider - "<<"\""<<company<<"\""<<endl<<endl;
    i2.Input();
    i2.PayOpt();
}
void Insurance::ValidateExpDate(string &exp_date){
    while(exp_date.length()<5) {
        b1.ch = _getch();
        if(b1.ch=='\r') break;
        if(b1.ch=='\b'&&!exp_date.empty()){
            if(exp_date.back()=='/'){cout << "\b \b";exp_date.pop_back();}
            cout<<"\b \b";
            exp_date.pop_back();
        }else if(isdigit(b1.ch)){
            if(exp_date.length()==0 && b1.ch>'1') b1.ch='0';
            if(exp_date.length()==1 && b1.ch<'1') b1.ch='1';
            if(exp_date.length()==1 && exp_date[0]=='1' && b1.ch>'2') b1.ch='2';
            cout<<b1.ch;
            exp_date+=b1.ch;
            if(exp_date.length()==2){cout<<'/';exp_date+='/';}
        }
    }
    while(exp_date.length()==5&&stoi(exp_date.substr(3,2))<24){cout<<"\b\b24";exp_date.replace(3,2,"24");}
    cout<<endl;
}
void Insurance::Summary(string company, int amount){
    cout<<endl<<endl<<"\"YOUR LIFE INSURANCE POLICY RENEWED SUCESSFULLY\""<<endl<<endl;
    b1.TransactionID(16);
    b1.DateTime();
    cout<<"Insurance Provider - "<<company<<endl;
    cout<<"Consumer Name - "<<i2.policy;
    cout<<endl<<"Consumer ID - "<<i2.email<<endl;
    cout<<"Amount - "<<amount<<endl;
}
void Insurance::PayOpt(){
    cout<<endl<<"1. Debit Card (Wallet)"<<endl;
    cout<<"2. BHIM UPI";
    i2.PayMethod();
}
void Insurance::PayType(int p){
    switch(p){
        case 1:i2.InpAcc();i2.Summary("L.I.C. (Life Insurance Corporation)",500);break;
        case 2:i2.InpPin();i2.Summary("Aditya Birla Sun Life Insurance",649);break;
        default: b1.Default();}
}
void Insurance::InpPin(){cout<<"Enter 4-digit PIN: ";i2.Mask(4);}
void Insurance::InpAcc(){
    cout<<endl<<"Enter your account number : ";
    getline(cin,acc_no);
    b1.Validate(acc_no,14);
    cout<<"Enter expiry date : ";
    i2.ValidateExpDate(exp_date);
    cout<<"Enter CVV : ";
    i2.Mask(3);
}
void Insurance::Input(){
    cout<<"Enter Policy Number : ";
    cin>>policy;
    cout<<"Enter Registered E-Mail Id : ";
    getline(cin,email);
}
void Insurance::Life1(){i2.Helper("L.I.C. (Life Insurance Corporation)");}
void Insurance::Life2(){i2.Helper("Aditya Birla Sun Life Insurance");}
void Insure(){
    int ch;
    cout<<endl<<"1. Insurance - 1 : L.I.C. (Life Insurance Corporation) Price : Rs. 500/month"<<endl;
    cout<<"2. Insurance - 2 : Aditya Birla Sun Life Insurance Price : Rs. 649/month"<<endl;
    cout<<endl<<"Select Insurance Provider : ";
    cin>>ch;
    switch(ch){case 1: i2.Life1();break; case 2:i2.Life2();break; default:b1.Default();}
}
                                                            /*Book Movie Ticket(s)*/
class MovieBook{
    float convfees,base,igst,amount;
    int seat,pay,ticket;
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
        void InSeat();
        void Helper(int ticket);
} m;
void MovieBook::InSeat(){cout<<endl<<endl<<"\"Invalid Seats Entered\""<<endl<<endl;}
void MovieBook::FinalDisplay(){
    m.Payment();
    m.MovieDisplay();
    b1.DateTime();
    cout<<"Ticket(s) - "<<m.seat<<endl;
    cout<<"Amount Paid - "<<m.amount<<endl;
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
void MovieBook::Helper(int ticket){
    m.Display(ticket);
    switch(m.pay){case 1:{m.FinalDisplay();break;} case 2:{b1.Exit();break;} default:b1.Default();}
}
void MovieBook::SelectPrice(){
    cout<<"Select Price : ";
    cin>>b1.select;
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
    m.PayInit(t);
    m.AmtTotal(t);
}
void MovieBook::Payment(){
    i2.InpAcc();
    cout<<"Enter Name : ";
    getline(cin,b1.name);
}
void MovieBook::MovieInfo(){
    cout<<endl<<"Now Showing"<<endl<<endl;
    cout<<endl<<"\"Bhool Bhulaiyaa 2\""<<endl;
    cout<<" 2D\tHindi"<<endl;
    cout<<" 2h 23m\t Comedy,Horror\t UA"<<endl;
    cout<<endl<<"INOX: Reliance Mega Mall,Rajkot"<<endl;
}
void MovieBook::Movie(){
    m.MovieInfo();
    int show,seats;
    cout<<" 9:00 am\t4:45 pm"<<endl;
    cout<<endl<<" Select Show : ";
    cin>>show;
    switch(show){
        case 1:
            seats = m.Seat();
            if(seats>0 && seats<=10){
                cout<<endl<<"Royal 200.00\nClub 180.00\nExecutive 160.00"<<endl<<endl;
                m.SelectPrice();
                switch(b1.select){
                    case 1:{ticket = 200 * seats;m.Helper(ticket);break;}
                    case 2:{ticket = 180 * seats;m.Helper(ticket);break;}
                    case 3:{ticket = 160 * seats;m.Helper(ticket);break;}
                    default:b1.Default();
                }
                break;
            }else{m.InSeat();}
            break;
        case 2:
            seats = m.Seat();
            if(seats>0 && seats<=10){
                cout<<endl<<"Royal 240.00\nClub 220.00\nExecutive 200.00"<<endl<<endl;
                m.SelectPrice();
                switch(b1.select){
                    case 1:{ticket = 240 * seats;m.Helper(ticket);break;}
                    case 2:{ticket = 220 * seats;m.Helper(ticket);break;}
                    case 3:{ticket = 200 * seats;m.Helper(ticket);break;}
                    default:b1.Default();
                }
                break;
            }else{m.InSeat();}
            break;
        default:cout<<endl<<"\"NO SHOWS FOUND\""<<endl;
    }
}
void Movie(){MovieBook b;b.Movie();}
                                                            /*Recharge*/
class Recharge{
    public:
        string phone;
        void getdataMobile();
        void Prepaid();
        void Predisplay();
        void DTH();
        void DTHdisplay();
        void Payment();
        void Helper(int amt);
}r;
void Recharge::getdataMobile(){
    cout<<endl<<"Enter Mobile Number : ";
    getline(cin,phone);
    b1.Validate(phone,10);
}
void Recharge::Payment(){
    i2.InpAcc();
    cout<<"Enter Name : ";
    getline(cin,b1.name);
}
void Recharge::Helper(int amt){
    cout<<endl<<"1. Pay "<<amt<<".00"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<endl<<"Select : ";
    cin>>b1.select;
    switch(b1.select){
        case 1:r.Payment();break;
        case 2:b1.Exit();break;
        default:b1.Default();
    }
}
void Recharge::Prepaid(){
    cout<<endl<<"1. Price - 719\tValidity - 84 Days"<<endl;
    cout<<"2. Price - 2999\tValidity - 365 Days"<<endl;
    cout<<endl<<"Select Plan : ";
    cin>>b1.select;
    switch(b1.select){
        case 1:r.Helper(719);r.Predisplay();break;
        case 2:r.Helper(2999);r.Predisplay();break;
        default:cout<<endl<<"\"NO PLANS FOUND\"";
    }
}
void Recharge::Predisplay(){
    cout<<endl<<endl<<"\"RECHARGE SUCCESSFUL\""<<endl;
    cout<<endl<<endl<<"Plan Details\nData   2.5 GB/Day\nVoice    Unlimited"<<endl;
    cout<<"SMS    100 SMS/Day\nSubscription    Disney+Hotstar (1 Year)"<<endl;
    cout<<"                Amazon Prime (30 Days Trial)"<<endl;
    cout<<"                Apollo 24x7,Wynk Music"<<endl;

}
void Recharge::DTH(){
    cout<<endl<<"Service Provider - GTPL"<<endl;
    cout<<endl<<"Your Current Plan is : Price 360 Validity 30 Days"<<endl;
    cout<<endl<<"1. Pay 360.00"<<endl;
    cout<<"2. Exit"<<endl<<endl;
    cout<<endl<<"Select : ";
    cin>>b1.select;
    switch(b1.select){
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
    cout<<endl<<"1. Mobile Recharge"<<endl;
    cout<<"2. DTH Recharge"<<endl;
    cout<<endl<<"Select - ";
    cin>>b1.select;
    switch(b1.select){
        case 1:r.getdataMobile();r.Prepaid();cout<<endl;break;
        case 2:r.getdataMobile();r.DTH();r.DTHdisplay();break;
        default:b1.Default();
    }
}
                                                            /*Bus ticket booking*/
class Bus{
    double fair,reserv=10,tax,amount;
    int seats;
    public:
        void displayDetails();
        void Transportaion();
        void Book();
} t1;
void Bus::displayDetails(){
    cout<<endl<<"Source - Rajkot\nDestination - Ahmedabad"<<endl;
    b1.TransactionID(16);
    cout<<"Passenger(s) - "<<seats<<endl;
    b1.DateTime();
}
void Bus::Book(){cout<<endl<<endl<<"\"BOOKING CONFIRMED\""<<endl;t1.displayDetails();}
void Bus::Transportaion(){
    t1.displayDetails();
    cout<<endl<<"Bus - 1     8:20 am    Price : 170"<<endl;
    seats = m.Seat();
    while(seats>0 && seats<=10){
        for(int i=1;i<=seats;i++){
            cout<<endl<<"Passenger - "<<i<<endl;
            fflush(stdin);
            cout<<"Enter Name : ";
            getline(cin,b1.name);
        }break;
    }
    r.getdataMobile();
    amount = 170 * seats;
    tax = amount * 0.025 * 2;
    fair = amount + tax + reserv;
    i2.InpAcc();
    t1.Book();
    cout<<"Fair = "<<fair<<endl;
}
void BusBooking(){Bus b;b.Transportaion();}
void Bills::Validate(string &input, int length){
    while(true){
        ch = _getch();
        if(ch=='\r'){
            if (input.length()== length) break;
            else{
                cout<<"\nPlease re-enter.\n";
                input.clear();
                if(length == 14){i2.InpAcc();return;}
                else if(length==12){b1.UsrData();return;}
                else{r.getdataMobile();return;}
            }
        }else if(ch=='\b' && !input.empty()){cout<<"\b \b";input.pop_back();}
        else if(isdigit(ch) && input.length()<=length-1){cout<<ch;input+=ch;}
    }cout<<endl;
}
void choice(){
    int choice;
    cout<<"1. Pay Bills\n2. Book Movie Ticket(s)\n3. Recharge your Phone or Cable"<<endl;
    cout<<"4. Bus Ticket Booking\n5. Insurance Renewal\n6. Exit"<<endl;
    cout<<endl<<"Select Your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: Bill();break;
        case 2: Movie();break;
        case 3: Recharge();break;
        case 4: BusBooking();break;
        case 5: Insure();break;
        case 6:cout<<endl<<"\'EXIT SUCCESSFUL\'"<<endl;exit(0);break;
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
