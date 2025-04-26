#include<iostream>
#include<string>
using namespace std ;
class bank {
private :
     double balance ;

     public :
     string user_name ;
public :
  bank (double balance ){
    this->balance =balance ;
  } 

  bank(string user_name ){
    this->user_name=user_name ;
  }


  void deposit(double amount){
    if(amount>=0){
        cout<<"DEPOSIT SUCCESSFUL";
        balance +=amount ;
    }
    else {
        cout<<"deposit not adjust "<<endl;

    }
  }


  void WITHDROW(double amont ){
    if(amont<=balance){
        cout<<"WITHDROWAL SUCCESsFulL ";
        balance -=amont ;
        
    }
    else {
        cout<<"this amont is not ablabile "<<endl;
    }
  }

  double  checkbakance(){
    return balance ;
  }

void print(){
    cout<<"USER NAME \n"<<user_name <<"HIS BALANCE IS\n"<<balance<<endl;
}

};



int main(){
bank r(5000.5);
cout<<"enter the user name "<<endl;
getline(cin,r.user_name);
r.deposit(400.5);
r.print();
    return 0;
}