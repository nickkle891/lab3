#include<iostream>
using namespace std;

int main()
{
    double sum=0;
    double A=6;
    while(A <= 19){
        sum += 1/A;
        A++;
    }
    cout<<sum;
    return 0;
}