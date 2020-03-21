#include "Header.h"
#include<iostream>
#include<string>
#include <fstream>
#include <list>


list<user>listik;
const string filename = "autorization.txt";

void autorization()
{
	user us;
	cout << "enter name" << endl;
	cin >> us.name;
	cout << "enter passw" << endl;
	cin >> us.passw;
	cout << "enter gmail" << endl;
	cin >> us.gmail;

	listik.push_back(us);
	ofstream fout;
	fout.open(filename, fstream::app);
	bool isopen = fout.is_open();
	if (isopen == false) {
		cout << "eroor file" << endl;
	}
	else {

		fout << us.name << endl;
		fout << us.passw << endl;
		fout << us.gmail << endl;

	}
	fout.close();
}

void entry()
{
	string name;
	string passw;
	cout << "enter name" << endl;
	cin >> name;
	cout << "enter passw" << endl;
	cin >> passw;


	for (user i : listik) {
		if (name == i.name&&passw == i.passw) {

			cout << "name" << i.name << endl;
			cout << "post" << i.gmail << endl;
			cout << "hellloo brooo" << endl;
		}

	}

}

void init()
{
	ifstream fin;
	fin.open(filename);

	bool isopen = fin.is_open();

	if (isopen == false) {
		cout << "erooor" << endl;
	}
	else {
		user us;
		string temp;
		int count = 0;
		while (!fin.eof()) {
			count++;
			fin >> temp;
			if (count == 1) {
				us.name = temp;

			}
			else if (count == 2) {
				us.gmail = temp;

			}
			else if (count == 3) {
				us.passw = temp;
				listik.push_back(us);
				count = 0;

			}
		}
	}
	fin.close();

		






	
}
