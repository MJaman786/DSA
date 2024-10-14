#include<iostream>
using namespace std;

void findUnique(int num){
    bool flag = false;
    int count[10]={0};
    while(num!=0){
        int remainder = num % 10;
        count[remainder]++;
        num = num / 10;
    }
    cout<<"Frequency of elements 0 - 9 : "<<endl;
    cout<<"| Number |"<<" Occur |"<<endl;
    for(int i=0; i<10; i++){
        cout<<"| \t"<<i<<"\t |\t"<<count[i]<<"\t |"<<endl;
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        if(count[i]==1){
            cout<<"Unique Element : "<<i<<" "<<endl;
            flag = true;
        }
    }
    if(flag==false){
        cout<<"No Unique Element"<<endl;
    }
}

int main(){
    findUnique(908906);
    cout<<"Press Enter  to exit"<<endl;

    cin.get();
    return 0;
}

/*
/tmp/ONzy6hzKW2.o
Frequency of elements 0 - 9 : 
| Number | Occur |
| 	0	 |	2	 |
| 	1	 |	0	 |
| 	2	 |	0	 |
| 	3	 |	0	 |
| 	4	 |	0	 |
| 	5	 |	0	 |
| 	6	 |	0	 |
| 	7	 |	0	 |
| 	8	 |	1	 |
| 	9	 |	2	 |

Unique Element : 6
Unique Element : 8

=== Code Execution Successful ===
*/ 