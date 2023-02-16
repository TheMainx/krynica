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
	return 0;
}