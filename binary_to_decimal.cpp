#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int ans=0;
    int base=1; 
    while(n>0){
        int lastDigit=n%10; //we will ge last digit of the number
        ans=ans+(base*lastDigit); //then will multiply the lastdigit with base
        base=base*2;
        // the base will be multipled by 2 so 1*2=2, 2*2=4,4*2=8 
        // so for the digit at the 0 postion will be multiplied by 2^0
        n=n/10;
        //will shit to the next digit 
    }
    return ans;
}
// for example the number is 123
// ans=0 ,n=101 , lasdigiti=1, base =1(2^0)
// ans= 0 +(1*1);
// now, ans=1, n=10 , lasdigiti=0, base =2(2^1)
// ans= 1+(0*2);
// now, ans=1, n=1 , lasdigiti=1, base =4(2^2)
// ans= 1+(1*4);
// now, ans=5, n=0 so the while will terminate
// decimal of 101 is 5

int main()
{
    int n;
    cin>>n;
    int result;
    result=BinaryToDecimal(n);
    cout<<result<<endl;
    return 0;
}