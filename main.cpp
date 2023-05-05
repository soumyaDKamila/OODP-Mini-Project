#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class CreditCardAuth
{
private:
    string name;
    string email;
public:
    int a,amt,bal;

bool isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}
bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
void Details1(){
    cout<<"--------------------------------------"<<endl;  
cout<<"USER DETAILS:"<<endl;
cout<<"Name - Pranshu Agarwal"<<endl;
cout<<"Mobile Number - XXXXXXX100"<<endl;
cout<<"Mail Id - pa5468@srmist.edu.in"<<endl;
cout<<"--------------------------------------"<<endl;  
bal=10000;
}
void Action1(){
    cout<<"Please enter 1 for viewing balance , 2 for withdrawing money, 3 for depositing money, 4 for loan details "<<endl;
    cin>>a;
    switch(a)
    {
        case 0:cout<<"Thank You!"<<endl;
        break;
        case 1:
        cout<<"Your current balance is "<<bal<<endl;
        cout<<"Thank You!"<<endl;
        break;
        case 2:
        cout<<"Enter the amount to be Withdrawn"<<endl;
        cin>>amt;
        if(bal>=amt)
        cout<<"Balance Amount = "<<bal-amt<<endl;
        else
        cout<<"Insufficient balance"<<endl;
        break;
        case 3:
        cout<<"Enter the amount to be Deposited"<<endl;
        cin>>amt;
        cout<<"Your current balance is "<<bal+amt<<endl;
        break;
        case 4:
        if(bal>=10000)
        cout<<"Eligible for loan"<<endl;
         else
        cout<<"Not eligible for loan"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
        
    }
}
void Details2(){
    cout<<"--------------------------------------"<<endl;  
cout<<"USER DETAILS:"<<endl;
cout<<"Name - Syed Mohd Adnan Ali"<<endl;
cout<<"Mobile Number - XXXXXXX901"<<endl;
cout<<"Mail Id - sa6476@srmist.edu.in"<<endl;
cout<<"--------------------------------------"<<endl;  
bal=15000;
}
void Action2(){
    cout<<"Please enter 1 for viewing balance , 2 for withdrawing money, 3 for depositing money, 4 for loan details "<<endl;
    cin>>a;
    switch(a)
    {
        case 0:cout<<"Thank You!"<<endl;
        break;
        case 1:
        cout<<"Your current balance is "<<bal<<endl;
        cout<<"Thank You!"<<endl;
        break;
        case 2:
        cout<<"Enter the amount to be Withdrawn"<<endl;
        cin>>amt;
        if(bal>=amt)
        cout<<"Balance Amount = "<<bal-amt<<endl;
        else
        cout<<"Insufficient balance"<<endl;
        break;
        case 3:
        cout<<"Enter the amount to be Deposited"<<endl;
        cin>>amt;
        cout<<"Your current balance is "<<bal+amt<<endl;
        break;
        case 4:
        if(bal>=10000)
        cout<<"Eligible for loan"<<endl;
         else
        cout<<"Not eligible for loan"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
        
    }
}
void Details3(){
    cout<<"--------------------------------------"<<endl;  
cout<<"USER DETAILS:"<<endl;
cout<<"Name - Satvik Gupta"<<endl;
cout<<"Mobile Number - XXXXXXX545"<<endl;
cout<<"Mail Id - sg7997@srmist.edu.in"<<endl;
cout<<"--------------------------------------"<<endl;  
bal=9000;
}
void Action3(){
    cout<<"Please enter 1 for viewing balance , 2 for withdrawing money, 3 for depositing money, 4 for loan details "<<endl;
    cin>>a;
    switch(a)
    {
        case 0:cout<<"Thank You!"<<endl;
        break;
        case 1:
        cout<<"Your current balance is "<<bal<<endl;
        cout<<"Thank You!"<<endl;
        break;
        case 2:
        cout<<"Enter the amount to be Withdrawn"<<endl;
        cin>>amt;
        if(bal>=amt)
        cout<<"Balance Amount = "<<bal-amt<<endl;
        else
        cout<<"Insufficient balance"<<endl;
        break;
        case 3:
        cout<<"Enter the amount to be Deposited"<<endl;
        cin>>amt;
        cout<<"Your current balance is "<<bal+amt<<endl;
        break;
        case 4:
        if(bal>=10000)
        cout<<"Eligible for loan"<<endl;
         else
        cout<<"Not eligible for loan"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
        
    }
}
void Details4(){
cout<<"--------------------------------------"<<endl;    
cout<<"USER DETAILS:"<<endl;
cout<<"Name - Soumya Darshan Kamila"<<endl;
cout<<"Mobile Number - XXXXXXX382"<<endl;
cout<<"Mail Id - sk6572@srmist.edu.in"<<endl;
cout<<"--------------------------------------"<<endl;
}
void Action4(){
    cout<<"Please enter 1 for viewing balance , 2 for withdrawing money, 3 for depositing money, 4 for loan details "<<endl;
    cin>>a;
    switch(a)
    {
        case 0:cout<<"Thank You!"<<endl;
        break;
        case 1:
        cout<<"Your current balance is "<<bal<<endl;
        cout<<"Thank You!"<<endl;
        break;
        case 2:
        cout<<"Enter the amount to be Withdrawn"<<endl;
        cin>>amt;
        if(bal>=amt)
        cout<<"Balance Amount = "<<bal-amt<<endl;
        else
        cout<<"Insufficient balance"<<endl;
        break;
        case 3:
        cout<<"Enter the amount to be Deposited"<<endl;
        cin>>amt;
        cout<<"Your current balance is "<<bal+amt<<endl;
        break;
        case 4:
        if(bal>=10000)
        cout<<"Eligible for loan"<<endl;
        else
        cout<<"Not eligible for loan"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
        
    }
}

friend void displayRecipt(CreditCardAuth);

};

void displayRecipt(CreditCardAuth cu){
    cout<<"-------------------------------------------------------------------"<<endl;  
    cout<<"Thank You For Banking with State Bank of India"<<endl;
    cout<<"For further enquiries please contact us at 7275624100,8756253901"<<endl;
    cout<<"Or mail us at sbienquiries@gmail.com"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;  
}


int main()
{
    //THIS PROGRAM USES LUHN'S ALGO
    cout<<"--------------------------------------"<<endl;    
    cout<<"Welcome to State Bank of India"<<endl;
    CreditCardAuth obj;
    string cardNo;
    cout<<"ENTER CARD NUMBER"<<endl;
    cout<<"--------------------------------------"<<endl;    
    cin>>cardNo;
     cout<<"--------------------------------------"<<endl;    
    if(obj.isNumberString(cardNo))
    {
       if (obj.checkLuhn(cardNo))
       {
           cout<<"AUTHENTICATION PASSED"<<endl;
           cout<<"--------------------------------------"<<endl;  
       }
       else
       {
           cout<<"AUTHENTICATION FAILED RETRY"<<endl;
           cout<<"--------------------------------------"<<endl;  
       }
    }
    else
    {
    cout<<"NOT A VALID CARD NUMBER RETRY"<<endl ;
    cout<<"--------------------------------------"<<endl;  
    }
    if(obj.isNumberString(cardNo)&&obj.checkLuhn(cardNo)){
       if(cardNo=="4111111111111111")
       {
        obj.Details1();
        obj.Action1();
        displayRecipt(obj);
       }
       else if(cardNo=="79927398713")
       {
        obj.Details2();
        obj.Action2();
        displayRecipt(obj);
       }
       else if(cardNo=="464523457289")
       {
        obj.Details3();
        obj.Action3();
        displayRecipt(obj);
       }
       else if(cardNo=="4624748233249780")
       {
        obj.Details4();
        obj.Action4();
        displayRecipt(obj);
       }
       else
       cout<<"User not registered with State Bank of India";
    }
}