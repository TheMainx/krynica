#include <fstream>
#include<iostream>
using namespace std;
int main() {
   ifstream ifile;
   ifile.open("input.txt", ios::in);
   if(ifile) {
      cout<<"file exists";
   } else {
      cout<<"file doesn't exist";
   }
}
