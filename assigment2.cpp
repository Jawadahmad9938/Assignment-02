#include <iostream>
using namespace std;
int main(){
    int x , y;
    char choose;
    while(true)
    {
    cout<<"Enter First Integar "<<endl;
    cin>>x;
    cout<<"Enter Second Integar "<<endl;
    cin>>y;
    cout<<"Choose Your Operation (+ - * / %)";
    cin>>choose;


   if(choose=='+')
   cout<<"Addition of "<<x<<" + "<<y<<" = "<<x+y<<endl;
   else if(choose=='-')
   cout<<"Subtraction of "<<x<<" - "<<y<<" = "<<x-y<<endl;
   else if(choose=='*')
   cout<<"Multiplication of "<<x<<" * "<<y<<" = "<<x*y<<endl;
   else if(choose=='/')
   cout<<"Division of "<<x<<" / "<<y<<" = "<<x/y<<endl;
   else if(choose=='%')
   cout<<"Modulus of "<<x<<" % "<<y<<" = "<<x%y<<endl;
   else
   break;

}
   cout<<"Invalid Operstion. The Loop is Terminated. "<<endl;
   cout<<"----------------------------------------"<<endl;
   cout<<"Thank You for using This Service."<<endl;
}
