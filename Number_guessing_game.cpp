#include <iostream>
#include<ctime>
#include <random>
using namespace std;

int main() {
  srand(time(0));
  int number,guess=0,i=0;
  number= rand()%100+1;
  do {
    cout << " guess number = ";
    cin>>guess;
    i=i+1;
  if(guess>number){
    cout<<"guess lower "<<endl;
    }else if(guess<number){
     cout<<"guess higher "<<endl;
    } else {
     cout<<"YOU WON THE GAME"<<endl;
     cout<<"YOU WON THE GAME IN "<<i<<" MOVES"<<endl;
    }
  }
while (number!=guess);
}
