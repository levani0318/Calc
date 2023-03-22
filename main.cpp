/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int value(char roman)
{
 switch(roman){
    case 'I':return 1;
   case 'V':return 5;
   case 'X':return 10;
   case 'L':return 50;
   case 'C':return 100;
}
 return 0;
};

int romanToInt (string A)
{
    int i, n, ans=0, p=0;
    n=A.length();

    for( i=n; i>=0; i--)
    {
        if( value(A[i])>=p ){
            ans = ans + value(A[i]);
        }else { 
            ans = ans - value(A[i]);
        }

        p = value(A[i]);
    }
    return ans;
}
string intToRoman(int value){
    string result="";
    string roman_value[]= {"C","XC","L","XL","X","IX","V","IV","I"};
    int number_value[]={100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int i=0; i<9; i++){
        while(value-number_value[i]>=0){
            result += roman_value[i];
            value -= number_value[i];
        };
    };
    return result;
}

//Main Function
int main() {

  string s;
  int num;
  cout<<"Input roman number: ";
  cin>>s;
  num=romanToInt(s);
  cout<<num<<"\n";
  return 0;
}