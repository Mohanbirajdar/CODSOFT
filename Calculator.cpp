#include <iostream>
using namespace std;
float additional_calculation( float num1);
float calculation(float num1 , float num2);
int main()
{
    float num1,num2, total,temp;
    int choice1,choice2;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout <<"Enter second number ; " << endl;
    cin >> num2;
    total=calculation(num1,num2);
    cout<<"your total calculation = "<<total << " Do you want further calculation (0 , 1) ;";
    cin >>choice1;
    while (choice1 == 1){
      temp= additional_calculation(total);
      total = temp;
      cout<<" your total calculation = "<<total<<endl;     
      cout<<" do you want to continue = (0, 1) ;";
      cin>>choice2;
      if(choice2!=1){
        break ;
        }
      
             }    
    return 0;
  }
    float calculation(float num1, float num2){
      float total;
      int choice;
    cout << "---------------------------" << endl;
    
    cout <<"       SELECT OPERATION     "<< endl;
    cout <<" 1>> MULTIPLICATION (×)  "<< endl;
    cout <<" 2>> DIVISION (÷)  "<< endl;
    cout <<" 3>> ADDITION.(+)  "<< endl;
    cout <<" 4>> SUBTRACTION (-)  "<< endl;
    cout << "---------------------------" << endl;
    cin>> choice;
    switch (choice){
      case 1:
          total = num1*num2;
          return total;
          break;
      case 2:
          total = num1/num2;
          return total ;
          break;
      case 3:
          total = num1+num2;
          return total;
          break;
      case 4:
          total = num1-num2;
          return total ;
          break;
      default :
          cout <<" Enter a valid choice !"<< endl;
          break;
        }
    
}
float additional_calculation(float num1){
  float num2, total;
  cout<<"Previous calculation = "<<num1<<endl;
  cout<<" Enter the number ; ";
  cin>> num2;
  total = calculation(num1 , num2);
  return total;
    
  
  }
