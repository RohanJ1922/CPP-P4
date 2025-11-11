#include<iostream>
using namespace std;

int SumofDigits(int num){
int digSum=0;

while(num>0){
int lastDigit=num%10;
num=num/10;
digSum+=lastDigit;

}
    return digSum;
}

int main(){

cout<<"Sum of Digits="<<SumofDigits(1234);

    return 0;
}