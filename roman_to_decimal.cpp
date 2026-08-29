#include <iostream>
#include<String>
using namespace std;

int main(){
    string n;
    cout<<"Enter a roman numeral: ";
    cin>>n;
    string num=n;
    int answer=0;
    int size=n.length();
    for(int i=0;i<size;i++){
        if(n[i]=='M'){
            answer=1000+answer;
        }
        else if(n[i]=='C'){
            if(n[i+1]=='M'){
            answer=900+answer;
            i++;
            }
            else if(n[i+1]=='D'){
            answer=400+answer;
            i++;
            }
            else{
                answer=100+answer;
            }

        }

        else if(n[i]=='X'){
            if(n[i+1]=='L'){
            answer=40+answer;
            i++;
            }
            else if(n[i+1]=='C'){
            answer=90+answer;
            i++;
            }
            else{
                answer=10+answer;
            }
            
        }

        else if(n[i]=='I'){
            if(n[i+1]=='V'){
            answer=4+answer;
            i++;
            }
            else if(n[i+1]=='X'){
            answer=9+answer;
            i++;
            }
            else{
                answer=1+answer;
            }
            
        }
        else if(n[i]=='V'){
            answer=answer+5;
        }
         else if(n[i]=='L'){
            answer=answer+50;
        }
         else if(n[i]=='D'){
            answer=answer+500;
        }
    }
    cout<<"Answer: "<<answer<<endl;
}