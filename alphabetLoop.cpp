#include <iostream>
#include <iomanip>

using namespace std;

//function prototype
void inRange(char cStart, char cEnd, char lStart, char lEnd);


int main() {
  const char capStart = 65, capEnd = 90;
  const char lowStart = 97, lowEnd = 122;
  char bStart;
  
  inRange(capStart,capEnd,lowStart,lowEnd);

  cin.ignore();
  cin.get();

  return 0;
}

void inRange(char cStart, char cEnd, char lStart, char lEnd){

  int choice, places;

  cout << "your startin position is the capital letter A, would you like to go backward"
          "or foward " << endl;
  cout << "1)forward" << endl;
  cout << "2)backwards" << endl;
  cout << endl;

  cin >> choice;

  while(choice < 1 | choice > 2){
    cout <<"error,";
    cout << "your startin position is the capital letter A, would you like to go backward"
          "or foward " << endl;
  cout << "1)forward" << endl;
  cout << "2)backwards" << endl;
  cout << endl;

  cin >> choice;

  }
  switch(choice){

    case 1: 
      cout << "how many places?" << endl;
      cin >> places;
      break;
    case 2:
      cout << "how many places?" << endl;
      cin >> places;
      break;
  }

 while ()

}

