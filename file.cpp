#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("STATE");
	fout<<"\nMumbai";
	fout<<"\nGujrat";
	fout<<"\nKarnataka";
	fout<<"\nRajasthan";
	fout.close();

	fout.open("CAPITAL");
	fout<<"\nMumbai";
	fout<<"\nRajkot";
	fout<<"\nBengalore";
	fout<<"\nJaipur";
	fout.close();

	const int N=80;
	char line[N];
	ifstream fin;
	fin.open("STATE");
		cout<<"Contents Of State File:";
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;
	}
	fin.close();

	fin.open("CAPITAL");
		cout<<"Contents Of Capital File:";
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;
	}
	fin.close();

return 0;
}
