#include "Scripts/sortic/sortic.h"
#include "Scripts/check_sortic/check_sortic.h"

int main() {
	while (true) {
		puts("0 - exit, 1 - sortic, 2 - check_sortic");
		string command;
		cin >> command;
		if (command == "0")
			return 0;
		else if (command == "1")
			start_sortic();
		else if(command == "2")
			start_checker();
		else {
			puts("Unknown command. Enter it again!");
		}
	}
}