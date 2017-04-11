// Lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
using namespace std;
unordered_map<string, string> dictionary;
void read();
void start();

int main()
{
	read();
	start();
    return 0;
}

void read() {
	string meaning, word;
	//ifstream fin("https://github.com/ProgramEngineeringKPI/Introduction-To-Programming/raw/master/labs_spring_2017/dict_processed.txt");
	ifstream fin("in.txt");
	int counter=0;
	getline(fin, word, '\n');
	cout << word << endl;
	while (fin.eof()) {
		getline(fin, word, ';');
		getline(fin, meaning, '\n');
		dictionary[word] = meaning;
		counter++;
		if(counter%100000==0) cout<< counter/100000 << " " << meaning << endl;
	}
	fin.close();
}

void start() {
	cout << "Dictionary" << endl;
	string word;
	while (true) {
		if (word == "end") break;
		cin >> word ;
		cout << dictionary[word] << endl;
	}
}