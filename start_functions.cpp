#include "check_sortic.h"

void from_file(vector <int> & a, vector <int> & b)
{
	cout << "Choose path to file (local)" << endl;
	string path;
	cin >> path;
	ifstream file(path);
	string str;
	file >> str;
	while (str != "!")
	{
		int num = parse_number(str);
		a.push_back(num);
		file >> str;
	}
	vector <int> sorted = msort(a);
	file >> str;
	while (str != "*")
	{
		parse_functions(str, a, b);
		file >> str;
	}
	if (a == sorted)
		cout << "OK";
	else
		cout << "KO";
	file.close();
}

void from_console(vector <int> & a, vector <int> & b)
{
	string str;
	cin >> str;
	while (str != "!")
	{
		int num = parse_number(str);
		a.push_back(num);
		cin >> str;
	}
	vector <int> sorted = msort(a);
	cin >> str;
	while (str != "*")
	{
		parse_functions(str, a, b);
		cin >> str;
	}
	if (a == sorted)
		cout << "OK";
	else
		cout << "KO";
}

void start()
{
	vector <int> a;
	vector <int> b;
	cout << "Choose input mode (0 - console; 1 - file)" << endl;
	string input_mode;
	cin >> input_mode;
	if (input_mode == "0")
	{
		from_console(a, b);
	}
	else if (input_mode == "1")
	{
		from_file(a, b);
	}
	else
	{
		cout << "Can't find that way to input values, please try again next time" << endl;
	}
}