#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>
using namespace std;
    int random(){
       
        return rand()%9;
    } 
    int main(){
         srand(time(0));
        cout << "Press Enter 3 times to reveal your future.\n";
            for(int i=0; i < 3;i++){
            cin.get();
        }
        string garde[9] = {"A","B+","B","C+","C","D+","D","F","W"};
        cout << "You will get " << garde[random()] << " in this 261102.";

    }