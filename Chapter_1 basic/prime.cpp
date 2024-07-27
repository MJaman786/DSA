#include <iostream>
using namespace std;

int isPrime(int num){
    if(num<=1){
        cout<<"number '"<<num<<"' is not Prime"<<endl;
        return 0;
    }
    else if(num==2){
        cout<<"number '"<<num<<"' is not Even-Prime"<<endl;
        return 0;
    }
    for(int i=2; i*i<=num; i++){
        
        if(num%i==0){
            // cout<<"number '"<<num<<"' is not Prime"<<endl;
            return 0;
        }
    }
    // cout<<"number '"<<num<<"' is Prime"<<endl;
    return 1;
}

void printPrimes(int num1, int num2){
    for(int i=num1; i<=num2; i++){
        if(isPrime(i)==1){
            cout<<"\n-------------"<<endl;
            cout<<"| "<<i<<" : Prime|"<<endl;
            cout<<"-------------"<<endl;
        }else{
            cout<<" "<<i<<" : NotPrime ";
        }
    }
}

int main() {
    int num1, num2;
    cout<<"Enter the range of numbers: "<<endl;
    cout<<"Enter start : ";
    cin>>num1;
    cout<<"Enter end : ";
    cin>>num2;
    printPrimes(num1, num2);
    cout<<"\n\n\tPress 0 to exit...\n";
    cin>>num2;
    return 0;
}