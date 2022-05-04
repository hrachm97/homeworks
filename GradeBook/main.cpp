#include <iostream>
#include "structs.cpp"
Office create_office();
void print_office(Office, std::string);
void pay_salaries(Office*);

int main() {
    Office my_office = create_office();
	print_office(my_office, "salaries");
	print_office(my_office, "balance");
	std::cout << "Print the number of months to see the balance left after: " << std::endl;
	short month_count{0};
	std::cin >> month_count;
	for (int i = 0; i < month_count; ++i) {
		pay_salaries(&my_office);
	}
	std::cout << "After " << month_count << " months the balance will be ..." << std::endl;
	print_office(my_office, "balance");
}