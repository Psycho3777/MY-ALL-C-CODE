#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<windows.h>

using namespace std;

class login{
 private :
  string u_id,password;
public:
login() : u_id(""),password(""){}

void set_id(string u_id){
    this->u_id=u_id;
}

void set_pass(string password){
    this->password=password;
}

string  get_u_id(string u_id){
return u_id;

}
string  get_password(string password){
return password;

}


};

//registraction page


 void registrection(login l){
system("cls");

string id,pw;
cout<<"enter the login id "<<endl;
cin>>id;
l.set_id(id);
 start:
cout<<"enter the login password"<<endl;
cin>>pw;
if(pw.length()>=8){
l.set_pass(pw);

}
else {
    cout<<"your password is encorrect \b plese increase your password "<<endl;
 goto start ;
}
ofstream file("C:/rahul.txt",ios::app);
if(!file){
    cout<<"error : file can not found "<<endl;
}
else {
    file<<"\t"<<l.get_u_id("yy")<<" "<<l.get_password("yy")<<endl;
    cout<<"REGISTER SUCCESSFULLY "<<endl;
}
file.close();
Sleep(3000);
}



//login finction 


void login_function() {
    system("cls");

    string input_id, input_password;
    cout << "Enter the user ID: ";
    cin >> input_id;
    cout << "Enter the password: ";
    cin >> input_password;

    ifstream file("C:/rahul.txt");
    string id, password;
    bool found = false;

    while (file >> id >> password) {
        if (input_id == id && input_password == password) {
            found = true;
            break;
        }
    }

    if (found) {
        cout<<"plese wait "<<endl;
        for (int  i = 0; i <3; i++)
        {
            cout<<".";
            Sleep(600);
        }
        
        cout << "Login successful!\n";
    } else {
        cout << "Invalid login credentials.\n";
    }
    file.close();
    Sleep(3000);
}



int main()
{
login  l;

bool n=false ;
while (!n){
    system("cls");
    int v;

    cout<<"WELCOME TO THIS PAGE "<<endl;
    cout<<"*******************"<<endl;
    cout<<"1 .REGISTER ";
    cout<<"\t2.login ."<<endl;
    cout<<"\t3.exit "<<endl;
    cout<<"ENTER YOUR CHOISE "<<endl;
    cin>>v;

if(v==1){
registrection(l);
  }

else if(v==2){
  login_function();

}

else if(v==3){
   system("cls");
   n=true ;
   cout<<"GOOD LUCK "<<endl;

   Sleep(3000); 
}




    Sleep(3000);
}

return 0;
}
