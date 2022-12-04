#include <iostream>

using namespace std;

void showMenu()

    {
    cout<<"\t\t\t_________________________________________________________________________\n\n\n";
    cout<<"\t\t\t                                 Welcome Menu                            \n\n\n";
    cout<<"\t\t\t__________________________           ATM            _____________________\n\n\n";
    cout<<"                                                                               \n\n\n";
    cout<<"\t| Press 1 to Check Balance                 |"<<endl;
    cout<<"\t| Press 2 to Deposit                       |"<<endl;
    cout<<"\t| Press 3 to Withdraw                      |"<<endl;
    cout<<"\t| Press 4 to EXIT                          |"<<endl;
    }


int main()
{
    int option;
    double balance = 500;
    
    do{
    showMenu();
    cout<<"\n\t\t\t Please enter your choice: ";
    cin>>option;
    system("clear");

    switch(option)
    {
        case 1: cout<<"\t\t\t Balance is: " <<balance<<"$"<< endl; break;
        case 2: cout<<"Enter amount you wish to deposit: ";
            double depositAmount;
            cin>> depositAmount;
            balance += depositAmount;
            cout<<depositAmount<<"$ was deposited to your account. \n"<<"Thank you for using FakeBank ATM! \n";
            break;
        case 3: cout<< "Enter amount you wish to withdraw: ";
            double withdrawAmount;
            cin>> withdrawAmount;
            if (withdrawAmount <= balance){
            balance -= withdrawAmount;
            cout<<withdrawAmount<<"$ was withdrawn from your account. \n"<<"Thank you for using FakeBank ATM! \n";
            }
            else
                cout<< "Balance in insufficient! Please enter a lower amount" <<endl;
            break;    
        }

        } while(option!=4);
    system("ls>0");
}