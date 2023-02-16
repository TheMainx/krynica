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
	
	return 0;
}