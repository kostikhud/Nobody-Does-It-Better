// by Mykola Danyliuk and Kostya Hudenko 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <hash_map>
using namespace std;

//hash_map<string, string> dictionary;
void reading_file();

int main(int argc, const char * argv[]) {
	reading_file();
	return 0;
}

void reading_file() {
	hash_map<string, string> dictionary;
	string meaning,word;
	ifstream fin("https://github.com/ProgramEngineeringKPI/Introduction-To-Programming/raw/master/labs_spring_2017/dict_processed.txt");
	while (!fin.eof()) {
		getline(fin, word, ';');
		getline(fin, meaning, '\n');
		dictionary.insert(word, meaning);
	}
	fin.close();
	cout << dictionary.size << endl;
}

