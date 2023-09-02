#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class customer
{
private:
    int identifier;

public:
    void get_id(int id)
    {
        identifier = id;
    }

    void enter_bank(int id)
    {
        cout << "- Customer " << id << " enters the bank.";
    }

    int speak_to_reception()
    {
        cout << "\n- Hello, how can I";
        srand(time(0));
        int option = 1 + (rand() % 6);
        switch (option)
        {
            case 1: cout << " exchange some money?"; break;
            case 2: cout << " transfer some money?"; break;
            case 3: cout << " sign up for an insurance?"; break;
            case 4: cout << " take a credit?"; break;
            case 5: cout << " invest here?"; break;
            case 6: cout << " withdraw some money?"; break;
        }
        return option;
    }

    void go_to_atm(int amount)
    {
        cout << "\n- Goes to the ATM.";
        cout << "\n- Waits in the queue.";
        cout << "\n- Introduces " << amount << " to withdraw.";
    }

    void go_to_ticket_machine()
    {
        cout << "\n- Goes to the queue ticket machine.";


    }

    void go_to_exchange_window(int amount)
    {
        cout << "\n- Goes to the exchange window.";
        cout << "\n- Waits his turn.";
        cout << "\n- Hi, I would like to change " << amount << " euro in lei.";
    }

    void wait_in_queue(int number)
    {
        cout << "\n- Customer waits in line until ticket number " << number << " comes up.";
    }

    void choses()
    {
        cout << "\n- Customer chooses.";
    }

    void leave_bank()
    {
        cout << "\n- Customer leaves the bank.";
    }
};

class employee
{
private:
    string name_badge;
    string job_title;

public:
    string get_name_badge()
    {
        return name_badge;
    }

    employee(string name, string job)
    {
        name_badge = name;
        job_title = job;
    }
    
    void introduce_yourself()
    {
        cout << "\n- Hello, my name is " << name_badge << ". I am the " << job_title << ".";
    }
};

class atm
{
private:
    float amount_to_withdraw;

public:
    void set_amount(float amount)
    {
        amount_to_withdraw = amount;
    }

    int get_amount()
    {
        return amount_to_withdraw;
    }

    void give_money()
    {
        cout << "\n- Out " << amount_to_withdraw << " lei.";
    }
};

class reception
{
public:
    void speak_to_customer(string name)
    {
        cout << "\n- Customer goes to the reception.";
        cout << "\n- Hello, " << "my name is " << name << " what can I help you with?";
    }

    void indicate_exchange_window()
    {
        cout << "\n- There is the currency exchange window.";
    }

    void indicate_ticket_machine()
    {
        cout << "\n- You go to the queue ticket machine and choose the corresponding option";
        cout << " and then wait for your turn.";
    }

    void indicate_atm()
    {
        cout << "\n- You can use the ATM, there it is.";
    }

};

class queue_ticket_machine
{
private:
    string category_1;
    string category_2;
    string category_3;
    string category_4;

public:
    int give_ticket()
    {
        srand(time(0));
        return 1 + (rand() % 1000);
    }

    void show_categories()
    {
        cout << "\n- Options:";
        cout << "\n" << category_1;
        cout << "\n" << category_2;
        cout << "\n" << category_3;
        cout << "\n" << category_4;
    }

    void show_chosen_category(int choice)
    {
        cout << "\n- Customer chose: ";
        if (choice == 2) cout << category_1;
        if (choice == 3) cout << category_2;
        if (choice == 4) cout << category_3;
        if (choice == 5) cout << category_4;
    }

    queue_ticket_machine(string c1, string c2, string c3, string c4)
    {
        category_1 = c1;
        category_2 = c2;
        category_3 = c3;
        category_4 = c4;
    }
};

class currency_exchange_window
{
private:
    float euro_buy;
    float euro_sell;
    float dollar_buy;
    float dollar_sell;

public:
    currency_exchange_window(float e1, float e2, float d1, float d2)
    {
        euro_buy = e1;
        euro_sell = e2;
        dollar_buy = d1;
        dollar_sell = d2;
    }

    void exchange_money(float amount, string currency, string action)
    {
        if (currency == "euro")
        {
            if (action == "sell")
            {
                cout << "\n- Here is " << euro_sell * amount << " lei.";
            }
        }
    }
};

class customer_department
{
private:
    string function_1;
    string function_2;

public:
    void tell_functions()
    {
        cout << "\n- Options: ";
        cout << "\n" << function_1;
        cout << "\n" << function_2;
    }

    customer_department(string f1, string f2)
    {
        function_1 = f1;
        function_2 = f2;
    }
};

class insurance_department
{
private:
    string insurance_1;
    string insurance_2;

public:
    void tell_insurances()
    {
        cout << "\n- Options: ";
        cout << "\n" << insurance_1;
        cout << "\n" << insurance_2;
    }

    insurance_department(string i1, string i2)
    {
        insurance_1 = i1;
        insurance_1 = i2;
    }
};

class credit_department
{
private:
    string credit_1;
    string credit_2;

public:
    void tell_credits()
    {
        cout << "\n- Options: ";
        cout << "\n" << credit_1;
        cout << "\n" << credit_2;
    }

    credit_department(string c1, string c2)
    {
        credit_1 = c1;
        credit_2 = c2;
    }
};

class investment_department
{
private:
    string investment_1;
    string investment_2;

public:
    void tell_investments()
    {
        cout << "\n- Options: ";
        cout << "\n" << investment_1;
        cout << "\n" << investment_2;
    }

    investment_department(string in1, string in2)
    {
        investment_1 = in1;
        investment_2 = in2;
    }
};


int main()
{
    // Defining the objects.
    employee employee_1 = employee("Ada", "Receptionist");
    employee employee_2 = employee("Eva", "Exchanger");
    employee employee_3 = employee("Rick", "Customer worker");
    employee employee_4 = employee("Tom", "Insurance analyst");
    employee employee_5 = employee("Mircea", "Credit giver");
    employee employee_6 = employee("Velior", "Investment analyst");

    currency_exchange_window window_1 = currency_exchange_window(19.5, 19.0, 18.5, 18.1);

    queue_ticket_machine qtm_1 = queue_ticket_machine("Customer department", "Insurance department", "Credit department", "Investment department");

    customer_department customer_department_1 = customer_department("transfers", "payment card");
    insurance_department insurance_department_1 = insurance_department("life insurance", "house insurance");
    credit_department credit_department_1 = credit_department("house credit", "business credit");
    investment_department investment_department_1 = investment_department("stocks", "bonds");

    atm atm_1;
    customer customer_1;
    int id = 1;

    srand(time(0));
    atm_1.set_amount(1 + (rand() % 1000));
    customer_1.get_id(id);
    customer_1.enter_bank(id);
        
    int option = 1 + (rand() % 3);
    switch (option)
    {
        // The customer goes first to the reception for indication.
        case 1: 
        {
            reception reception_employee;
            reception_employee.speak_to_customer(employee_1.get_name_badge());
            
            int question_option = customer_1.speak_to_reception();
                
            if (question_option == 1)
            {
                int amount_to_change = 1 + (rand() % 1000);
                reception_employee.indicate_exchange_window();
                customer_1.go_to_exchange_window(amount_to_change);
                employee_2.introduce_yourself();
                window_1.exchange_money(amount_to_change, "euro", "sell");
                customer_1.leave_bank();
            }

            if (question_option == 2 || question_option == 3 || question_option == 4 || question_option == 5)
            {
                reception_employee.indicate_ticket_machine();
                customer_1.go_to_ticket_machine();
                qtm_1.show_categories();
                qtm_1.show_chosen_category(question_option);
                int ticket_number = qtm_1.give_ticket();
                customer_1.wait_in_queue(ticket_number);
                if (question_option == 2)
                {
                    employee_3.introduce_yourself();
                    customer_department_1.tell_functions();
                }
                if (question_option == 3)
                {
                    employee_4.introduce_yourself();
                    insurance_department_1.tell_insurances();
                }
                if (question_option == 4)
                {
                    employee_5.introduce_yourself();
                    credit_department_1.tell_credits();
                }
                if (question_option == 5)
                {
                    employee_6.introduce_yourself();
                    investment_department_1.tell_investments();
                }
                customer_1.choses();
                customer_1.leave_bank();
            }

            if (question_option == 6)
            {
                reception_employee.indicate_atm();
                customer_1.go_to_atm(atm_1.get_amount());
                atm_1.give_money();
                customer_1.leave_bank();
            }
            break;   
        }

        // The customer goes right away to the ATM.
        case 2: 
        {
            customer_1.go_to_atm(atm_1.get_amount()); 
            atm_1.give_money();
            customer_1.leave_bank();
            break;
        }

        // The customer goes straight away to the currency exchange window.
        case 3: 
        {
            int amount_to_change = 1 + (rand() % 1000);
            customer_1.go_to_exchange_window(amount_to_change);
            employee_2.introduce_yourself();
            window_1.exchange_money(amount_to_change, "euro", "sell");
            customer_1.leave_bank();
            break;   
        }
    }
}