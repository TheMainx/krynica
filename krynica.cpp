#include<iostream> 
#include<fstream>

using namespace std;

int main()
{
	ifstream file("input.txt");
	if(file.is_open())
	{
		char sign;
		while(file>>sign)
		{
			cout<<sign;
		}
	}
	else
		cout<<"This file doesnt exist.";

	   int filesize = sizeof(FILE);
   cout << "Size of file is "<< filesize;
   int filesize2 = sizeof(FILE*);
   cout << "Size of *file is "<< filesize2;
   int sizeint = sizeof(int);
   cout << sizeint<< endl;
   int sizelong = sizeof(long);
   cout << sizelong<< endl;
   int sizeint2 = sizeof(int);
   cout << sizeint2 << endl;
   int sizelong2 = sizeof(long);
   cout << sizelong2<< endl;
	return 0;
}