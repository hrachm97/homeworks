#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structs.cpp"

time_t t;

Employee create_employee()
{
    Employee result;
    std::cout << "Type the worker name : ";
    std::cin >> result.name;
    result.month_sallary = 45000 + ((unsigned int)rand() * 1000) % (200000 - 45000);
    return result;
}

int get_employee_payment(int salary, Payment* payments)
{
    int percent{};
    for(int i = 0; i < 3; i++)
    {
        percent += payments[i];
    }
    return salary * percent / 100;
}

int get_month_income (Employee* workers, int count){
    int income = 0;
    for (int i = 0; i < count; i++){
        income += workers[i].month_payment;
    }
    return income;
}

int get_month_outcome (Employee* workers, int workers_count){
    int outcome = 0;
    for (int i = 0; i < workers_count; i++){
        outcome += workers[i].month_sallary;
    }
    return outcome;
}

Balance resolve_balance(Employee* workers, int count){
    Balance obj;
    obj.month_incomes = get_month_income(workers, count);
    obj.month_outcomes = get_month_outcome(workers, count);
    return obj;
}

Office create_office()
{
    Office new_office;
    srand((unsigned) time(&t));
    new_office.worker_count = 10 + rand() % 10;
    std::cout << "Your office has " << new_office.worker_count << " employees.\n";
    new_office.workers = new Employee[new_office.worker_count];
    for(int i = 0;i < 3;i++)
    {
        new_office.p_office[i] = (Payment) (5 + rand() % 5);
    }
    for(int i = 0;i < new_office.worker_count;i++)
    {
        new_office.workers[i] = create_employee();
        new_office.workers[i].month_payment = get_employee_payment(new_office.workers[i].month_sallary, new_office.p_office);
    }

    new_office.office_balance = resolve_balance(new_office.workers, new_office.worker_count); // Balance = Balance
    // resolve_balnce (Emloyee*, int);

    return new_office;
}
void print_office(Office o, std::string office_property) {
    if (office_property == "salaries") {
        std::cout << "Office employees and their salaries \n";
        for (int i = 0; i < o.worker_count; ++i) {
            std::cout << o.workers[i].name << ' ' << o.workers[i].month_sallary << '\n';
        }
    }
    if (office_property == "balance") {
        std::cout << "Office balance: " << o.office_balance.all_money << '\n';
    }
}

void pay_salaries(Office* my_office) {
    my_office->office_balance.all_money -= my_office->office_balance.month_outcomes;
    my_office->office_balance.all_money += my_office->office_balance.month_incomes;
}