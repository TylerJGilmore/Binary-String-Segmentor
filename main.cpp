#include <iostream>
#include <string>

using namespace std;
string binaryString = ""; //Binary string for operation\
int segmentorCount = 0; //counts space segmentation
int stringPosition = 0; //position of string characters

//main process operations manager


//user interface function
int startupInterface(){ //interface initialised on startup

  cout << "<< Binary string segmentor>>" << endl; //declaring title and confirming execution success
  cout << "<< Please paste your binary string into the console >>" << endl << endl; //request data input for operation
  cout << ">"; //prompting user input typespace

  return 0;
}

//string operation function
int stringConverter(int segmentorCount){
  while (segmentorCount < 9){ //used for determining if the loop should end

    if (segmentorCount == 8){
      cout << " ";
      segmentorCount = 0;
    }

    cout << binaryString[stringPosition]; // outputs number at current  string position

    if (stringPosition < binaryString.length()){ //if the current string position is lower than the string length:
      stringPosition++; //raise position of operation on the binary string
      segmentorCount++; //raise counted space until it inserts a space into string
    }

    if (stringPosition > binaryString.length()){ //checks if string is finished by looking at the string position and length
      segmentorCount = 9; //ends function loop
    }

  }

  return 0;
}

//main process operations manager
int main() { //Initializing UI

  startupInterface(); //calls UI display function
  cin >> binaryString; //Places user input into binaryString variable for operation
  stringConverter(int());

} 
