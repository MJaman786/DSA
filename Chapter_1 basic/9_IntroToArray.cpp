#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void printArray(double arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void printArray(float arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void printArray(char arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int  main(){
    cout<<"Introduction to Arrays.."<<endl;
    
    // initalizing all elements to 0
    cout<<"\nInitalizing all elements to 0"<<endl;
    int firstArray[10]={0};
    printArray(firstArray, 10);
    cout<<endl;
    
    // initalizing all elements to 1
    cout<<"\nInitalizing all elements to 1"<<endl;
    int secoundArray[10];
    for(int i=0; i<10; i++){
        secoundArray[i]=1;
    }
    printArray(secoundArray, 10);
    cout<<endl;
    
    cout<<"\n\tTypes of Arrays.."<<endl;
    
    cout<<"\n-> Integer type"<<endl;
    int Integer[10];
    for(int i=0; i<10; i++){
        Integer[i]=1;
    }
    printArray(Integer, 10);
    cout<<endl;
    
    cout<<"\n-> Double type"<<endl;
    double Double[10];
    for(int i=0; i<10; i++){
        Double[i]=i;
    }
    printArray(Double, 10);
    cout<<endl;
    
    cout<<"\n-> Float type"<<endl;
    float Float[10];
    for(int i=0; i<10; i++){
        Float[i]=i;
    }
    printArray(Float, 10);
    cout<<endl;
    
    cout<<"\n-> Character type"<<endl;
    char Character[30];
    for(int i=0; i<30; i++){
        Character[i]='A'+i;
    }
    printArray(Character, 30);
    cout<<endl;
    return 0;
}
/*
output
/tmp/I1Airh3ywz.o
Introduction to Arrays..

Initalizing all elements to 0
0 0 0 0 0 0 0 0 0 0 

Initalizing all elements to 1
1 1 1 1 1 1 1 1 1 1 

	Types of Arrays..

-> Integer type
1 1 1 1 1 1 1 1 1 1 

-> Double type
0 1 2 3 4 5 6 7 8 9 

-> Float type
0 1 2 3 4 5 6 7 8 9 

-> Character type
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ 


=== Code Execution Successful ===
*/ 