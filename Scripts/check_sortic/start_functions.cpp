#include "check_sortic.h"
#include "../colors/colors.h"
#include "stdlib.h"

void read_check_data(FILE *stream, vector<int> &a, vector<int> &b) {
	string str;
	char *buff = (char *) malloc(100);
	fscanf(stream, "%s", buff);
	str = buff;
	while (str != "!" && !feof(stream)) {
        bool error = !correct_num(str);
		if (error) {
			cout << "Error in number. Try again..." << endl;
			fflush(stream);
			return;
		}
		int num = parse_number(str);
		a.push_back(num);
		fscanf(stream, "%s", buff);
		str = buff;
	}
	vector<int> sorted = msort(a);
	fscanf(stream, "%s", buff);
	str = buff;
	while (str != "*" && !feof(stream)) {
		parse_functions(str, a, b);
		fscanf(stream, "%s", buff);
		str = buff;
	}
	if (a.empty() || str[str.size()-1] != '*') {

		puts((colors::RED + "Appropriate data wasn't given. Check your input format.").c_str());
		puts((colors::GRAY + "FORMAT: [ARRAY] ! [COMMANDS] * " + colors::DEFAULT).c_str());
		return;
	}
	if (a == sorted)
		cout << colors::GREEN << "OK\n" << colors::DEFAULT;
	else
		cout << colors::RED << "KO\n" << colors::DEFAULT;
	delete[] buff;
}

void start_checker() {
	vector<int> a;
	vector<int> b;
	cout << "Choose input mode (0 - console; 1 - file)" << endl;
	string input_mode;
	cin >> input_mode;
	if (input_mode == "0") {
		read_check_data(stdin, a, b);
	} else if (input_mode == "1") {
		puts("Enter the file path: ");
		string path;
		cin >> path;
		FILE *stream = fopen(path.c_str(), "r");
		if (!stream) {
			puts("There is not such a file!\n");
			return;
		}
		read_check_data(stream, a, b);
	} else {
		cout << "Can't find that way to input values, please try again next time" << endl;
	}
}
