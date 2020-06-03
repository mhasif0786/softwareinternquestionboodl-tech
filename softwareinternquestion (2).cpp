/*Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward*/
#include <iostream>
#include<math.h>
using namespace std;
int main() {
        int n;
        cin>>n;//taking the input to check palindromw
        int k=n;//taking a variable to assign above number to cunting the number of digits
        int last_digit;
        int count=0;
        while(k/*run upto k will not zero*/){
           k=k/10;
           count++;//counting the number of digit
        }
        k=n;//k becomes zero so again reassign to input n
        int rev=0;
        int i=1;
        while(k/*run upto k will not zero*/){
           last_digit=k%10;
           k=k/10;
           rev=rev+last_digit*pow(10,count-i);//reverse number calculation
           i++;
        }
        if(n==rev){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    return 0;
}