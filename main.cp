//Name:  Jia Yi Li
//Email: jiayi.li06@myhunter.cuny.edu
//A program that counts amount of money remaining.

#include <iostream>
using namespace std;

int main ()
{
  int num, num2;
  cout << "Please enter the initial dollar amount:";
  cin >> num;
  while (num > 0)
    {
      cout << "Enter amount spent:";
      cin >> num2;
      num = num - num2;
      cout << "You now have $" << num << " remaining." << endl;
    }
  cout << "Your initial amount has been entirely spent";
}
