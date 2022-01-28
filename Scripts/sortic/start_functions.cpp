#include "sortic.h"

void read_sortic_data(FILE *stream, vector<int> &a, vector<int> &b) {
	char buff[100];
	string str;
	fscanf(stream, "%s", &buff);
	str = buff;
	//bool error = false;
	while (str != "!") {
		//error = !correct_num(str);
		//if (error)
		//{
		//	cout << "Error in number. Try again..." << endl;
		//	return;
		//}
		int num = parse_number(str);
		a.push_back(num);
		fscanf(stream, "%s", &buff);
		str = buff;
	}
	sort_algorithm(a, b, str);
	ofstream out("sortic_result.txt");
	out << str;
	out.close();
}

void start_sortic() {
	vector<int> a;
	vector<int> b;
	cout << "Choose input mode (0 - console; 1 - file)" << endl;
	string input_mode;
	cin >> input_mode;
	if (input_mode == "0") {
		read_sortic_data(stdin, a, b);
	} else if (input_mode == "1") {
		puts("Enter the file name: ");
		string path;
		cin >> path;
		FILE* stream = fopen(path.c_str(), "r");
		if(!stream){
			puts("There is not such a file!\n");
			return;
		}
		read_sortic_data(stream, a, b);
	} else {
		cout << "Can't find that way to input values, please try again next time" << endl;
	}
}
