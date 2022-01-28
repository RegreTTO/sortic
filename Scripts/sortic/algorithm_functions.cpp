#include "sortic.h"

void print_vectors(FILE* stream, vector <int> & a, vector <int> & b, string function_name)
{

	fputs((function_name+'\n').c_str(), stream);
	fputs("------------------------------------------------------------\n", stream);
	int size1 = a.size();
	int size2 = b.size();
	int i = 0;
	int j = 0;
	while (i < size1 || j < size2)
	{
		if (i < size1)
		{
			fprintf(stream, "%d ", a[i]);
			i++;
		}
		else
		{
			fputs("  ", stream);
		}
		if (j < size2)
		{
			fprintf(stream, "%d ", b[j]);
			j++;
		}
		else
		{
			fputs(" ", stream);
		}
	}
	fputs("------------------------------------------------------------\n",stream);
}

void sort_first(vector <int> & a, vector <int> & b, string & str)
{
	while (a.size() > 3)
	{
		int min = min_ind(a);
		int path_left = min;
		int path_right = a.size() - min;
		if (path_left < path_right)
		{
			for (int j = 0; j < path_left; j++)
			{
				ra(a);
				str += "ra\n";
				print_vectors(stdin, a, b, "ra");
			}
		}
		else
		{
			for (int j = 0; j < path_right; j++)
			{
				rra(a);
				str += "rra\n";
				print_vectors(stdin, a, b, "rra");
			}
		}
		pb(a, b);
		str += "pb\n";
		print_vectors(stdin, a, b, "pb");
	}
}

void sort_last(vector <int> & a, vector <int> & b, string & str)
{
	int max = max_ind(a);
	int left_path = max + 1;
	int right_path = a.size() - 1 - max;
	if (right_path < left_path)
	{
		for (int i = 0; i < right_path; i++)
		{
			rra(a);
			str += "rra\n";
			print_vectors(stdin, a, b, "rra");
		}
	}
	else
	{
		for (int i = 0; i < left_path; i++)
		{
			ra(a);
			str += "ra\n";
			print_vectors(stdin, a, b, "ra");
		}
	}
	if (a[1] < a[0])
	{
		sa(a);
		str += "sa\n";
		print_vectors(stdin, a, b, "sa");
	}
}

void sort_algorithm(vector <int> & a, vector <int> & b, string & str)
{
	FILE* stream = fopen("sortic_log.txt", "r");

	str = "";
	cout << "------------------------------------------------------------" << endl;
	sort_first(a, b, str);
	sort_last(a, b, str);
	while (b.size() > 0)
	{
		pa(a, b);
		str += "pa\n";
		print_vectors(stream,a, b, "pa");
	}


	cout << "full answer is: " << endl <<
		"------------------------------------------------------------" << endl << str <<
		"------------------------------------------------------------" << endl << 
		"functions made: " << char_cnt(str, '\n') << endl;
	puts("For the details see sortic_log.txt\n");
}
