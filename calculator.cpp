#include <iostream>

using namespace std;

int main()
{



while(true){
         float a,b;
   char ch;
   cout<<"Input a number: ";
   cin>>a;

   cout<<"Input another number: ";
   cin>>b;

   cout<<"Press A for sum, M for multiplicattion, D for dividor, S for subtraction, R for remainder, P for power and C for clear  : ";
   cin>>ch;
    switch(ch){

case 'A':
    cout<<"The sum is: "<< a+b<<endl;
    break;

case 'S':
    cout<<"The subtraction is: "<< a-b<<endl;;
    break;
case 'D':

    cout<<"The dividing is: "<<a/b<<endl;;
    break;
case 'M':
    cout<<"The multiplication is: "<< a*b<<endl;
    break;
case 'R':

    cout<<"The remainder is :"<<(int)a%(int)b<<endl;
    break;

case 'C':
system("cls");
    break;

case 'P':
    int i;
    int t;
    cout<<"Input power: ";
    cin>>i;

    for(int j=0;j<i;j++){


       t=a+a*j;




    }
cout<<"The power is: "<<t<<endl;

break;


default:
    cout<<"Error character"<<endl;

    }
    cout<<"Do you want to continue: ";
    cin>>ch;
if(ch=='N'){
    break;
}
}
   return 0;
}

