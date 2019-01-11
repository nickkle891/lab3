#include<iostream>
using namespace std;

int main()
{
    double sum=0;
    double A=2;
    while(A <= 69){
        sum += 1/A;
        A++;
    }
    cout<<sum;
    return 0;
}