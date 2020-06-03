/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
#You may assume that each input would have exactly one solution, and you may not use the same element twice.*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;//taking integer from user to take the size of array
    int a[n];//declaring the array with size n;if we dont want to take array size so we go for dynamic,we use vector c++ stl
    for(int i=0;i<n;i++){
        cin>>a[i];//taking element in the array of size n;
    }
    int specific_target;
    cin>>specific_target;//taking input from user specific target
    int j,k;
    bool p=0;
    for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
            if(specific_target==a[k]+a[j]){
                p=1;
                break;
            }
         
        }
         if(p==1){
              break;
          }
    }
    cout<<j<<" "<<k<<"\n";
    return 0;
}
