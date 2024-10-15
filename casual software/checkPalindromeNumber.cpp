#include<iostream>
#include<string>
using namespace std;

void reverse(int num){
    int orgninal=num;
    int answer = 0;
    while(num!=0){
        int remainder = num % 10;
        answer = answer * 10 + remainder;
        num = num / 10;
    }
    if(answer==orgninal){
        cout<<"number <"<<answer<<"> is palindrome"<<endl;
    }
    else{
        cout<<"number <"<<answer<<"> is't palindrome"<<endl;
    }
}

void input(){
    int number;
    
    cout<<"\nEnter number : ";
    cin>>number;
    
    reverse(number);
    cout<<endl;
    
}

void mainloop(){
    int ch;
    while(true){
        cout<<"1. check number"<<endl;
        cout<<"2. stop the loop"<<endl;
        cout<<"option : ";
        cin>>ch;
        switch(ch){
            case 1:
                input();
            break;
            case 2:
                return;
            break;
            default:
                cout<<"\t' Enter valid option '"<<endl;
                cout<<endl;
            break;
        }
    }   
}

int main(){
    mainloop();
    return 0;
}
/*
/tmp/cM2MiUo0P5.o
1. check number
2. stop the loop
option : 121
	' Enter valid option '

1. check number
2. stop the loop
option : 1

Enter number : 121
number <121> is palindrome

1. check number
2. stop the loop
option : 1

Enter number : 12344321
number <12344321> is palindrome

1. check number
2. stop the loop
option : 123
	' Enter valid option '

1. check number
2. stop the loop
option : 1

Enter number : 123
number <321> is't palindrome

1. check number
2. stop the loop
option : 2


=== Code Execution Successful ===
*/ 