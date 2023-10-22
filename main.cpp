#include <iostream>
#include <string.h>
#include "src/clk.cpp"

using namespace std;

int main () {

  string input;
  while(1){
    cout << ">> ";
    getline(cin,input);
    if(input =="exit"){
      break;
    }else if(input == "clear"){
      system("clear");
      continue;
    }else if(input == ""){
      continue;
    }
    eval(input);
  }
  return 0;
}
