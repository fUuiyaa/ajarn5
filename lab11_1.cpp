// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int randommm;

void roll(){
        randommm= rand()%9+1;
    }
int main(){
    int random2;
    string grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    roll();
    random2=randommm;
    if(random2==1){
        grade="A";
    } else if(random2==2){
        grade="B+";
    } else if(random2==3){
        grade="B";
    } else if(random2==4){
        grade="C+";
    } else if(random2==5){
        grade="C";
    } else if(random2==6){
        grade="D+";
    } else if(random2==7){
        grade="D";
    } else if(random2==8){
        grade="F";
    }   else {
        grade="W";
    }


    cout << "You will get " << grade << " in this 261102.";

    return 0;

}