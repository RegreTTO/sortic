#include "sortic.h"

void from_file(vector <int> & a, vector <int> & b)
{
	cout << "Choose path to file (local)" << endl;
	string path;
	cin >> path;
	ifstream file(path.c_str());
	string str;
	file >> str;
	while (str != "!")
	{
		int num = parse_number(str);
		a.push_back(num);
		file >> str;
	}
	file.close();
	sort_algorithm(a, b, str);
	ofstream out("output.txt");
	out << str;
	out.close();
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
	sort_algorithm(a, b, str);
	ofstream out("output.txt");
	out << str;
	out.close();
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
