#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


// The root class.
class bank
{
private:
    string name;
    string location;
    bool open;

public:
    void set_name(string Name)
    {
        name = Name;
    }

    string get_name()
    {
        return name;
    }
};

// For person superclass.
class person: public bank
{
private:
    string gender;

public:
    void set_gender(string gen)
    {
        gender = gen;
    }

    string get_gender()
    {
        return gender;
    }

    virtual void introduce_yourself()
    {
        cout << "\n- Employee: Hello, my name is " << get_name() << ".";
    }
};

class customer: public person
{
public:
    void enter_bank()
    {
        cout << "- Customer: " << get_name() << " enters the bank.";
    }

    void introduce_yourself()
    {
        if (get_gender() == "male")
        {
            cout << "\n- Customer: Hello, sir, how can I";
        } else
        if (get_gender() == "female")
        {
            cout << "\n- Customer: Hello, ma'am, how can I";
        }
    }

    int speak_to_reception()
    {
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

    void go_to_atm()
    {
        cout << "\n- Customer: Goes to the ATM.";
        cout << "\n- Customer: Waits in the queue.";
    }

    void indroduce_option(int amount)
    {
        cout << "\n- Customer: Introduces " << amount << " to withdraw.";
    }

    void go_to_ticket_machine()
    {
        cout << "\n- Customer: Goes to the queue ticket machine.";
    }

    void go_to_exchange_window(string Gender)
    {
        cout << "\n- Customer: Goes to the exchange window.";
        if (Gender == "male")
        {
            cout << "\n- Customer: Waits his turn.";
        }
        else if (Gender == "female")
        {
            cout << "\n- Customer: Waits her turn.";
        }
    }

    void asking_to_change(int amount)
    {
        cout << "\n- Customer: Hi, I would like to change " << amount << " euro in lei.";
    }

    void wait_in_queue(int number)
    {
        cout << "\n- Customer: Waits in line until ticket number " << number << " comes up.";
    }

    void choses()
    {
        cout << "\n- Customer: Chooses and does the business.";
    }

    void leave_bank()
    {
        cout << "\n- Customer: Leaves the bank.";
    }
};

class employee: public person
{
private:
    string job_title;

public:
    void set_job_title(string title)
    {
        job_title = title;
    }

    string get_job_title()
    {
        return job_title;
    }
    
    void introduce_yourself()
    {
        cout << "\n- Employee: Hello, my name is " << get_name() << ". I am the " << get_job_title() << ".";
    }
};

// For department superclass.
class department: public bank
{
protected:
    string option_1;
    string option_2;

public:
    void tell_options()
    {
        cout << "\n- Options: ";
    }
};

class customer_department: public department
{
public:
    void tell_options()
    {
        cout << "\n- Options: ";
        cout << "\n" << option_1;
        cout << "\n" << option_2;
    }

    customer_department(string Option_1, string Option_2)
    {
        option_1 = Option_1;
        option_2 = Option_2;
    }
};

class insurance_department: public department
{
public:
    void tell_options()
    {
        cout << "\n- Options: ";
        cout << "\n" << option_1;
        cout << "\n" << option_2;
    }

    insurance_department(string Option_1, string Option_2)
    {
        option_1 = Option_1;
        option_2 = Option_2;
    }
};

class credit_department: public department
{
public:
    void tell_options()
    {
        cout << "\n- Options: ";
        cout << "\n" << option_1;
        cout << "\n" << option_2;
    }

    credit_department(string Option_1, string Option_2)
    {
        option_1 = Option_1;
        option_2 = Option_2;
    }
};

class investment_department: public department
{
public:
    void tell_options()
    {
        cout << "\n- Options: ";
        cout << "\n" << option_1;
        cout << "\n" << option_2;
    }

    investment_department(string Option_1, string Option_2)
    {
        option_1 = Option_1;
        option_2 = Option_2;
    }
};

// For machine superclass.
class machine: public bank
{
private:
    int amount_of_machines;
    bool broken;

public:
    bool broken_machine()
    {
        broken = true;
        return broken;
    }

    virtual void show_options()
    {
        cout << "1. Start; 2. Stop";
    }
};

class atm: public machine
{
private:
    float amount_to_withdraw;

public:
    void set_amount(float amount, bool Broken)
    {
        if (Broken == true)
        {
            cout << "ATM: ATM is broken.";
        } else
        if (Broken == false)
        {
            amount_to_withdraw = amount;
        }
    }

    void show_options()
    {
        cout << "\n- ATM: Introduce the amount to withdraw.";
    }

    int get_amount()
    {
        return amount_to_withdraw;
    }

    void give_money(bool Broken)
    {
        if (Broken == false)
        { 
            cout << "\n- ATM: Out " << amount_to_withdraw << " lei.";
        }
    }
};

class queue_ticket_machine: public machine
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

    void show_options()
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

// For window superclass.
class window: public bank
{
protected:
    bool presence_of_employee;
};

class currency_exchange_window: public window
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

    void exchange_money(float amount, string currency, string action, bool employee)
    {
        if (employee == true)
        {
            if (currency == "euro")
            {   
                if (action == "sell")
                {
                    cout << "\n- Employee: Here is " << euro_sell * amount << " lei.";
                }
            }
        } else
        if (employee == false)
        {
            cout << "\n- Customer: Waits for the employee.";
        }
    }
};

class reception: public window
{
public:
    void speak_to_customer(string name, bool employee)
    {
        if (employee == true)
        {
            cout << "\n- Employee: Hello, " << "my name is " << name << " what can I help you with?";
        } else
        if (employee == false)
        {
            cout << "\n- Customer: Goes to the reception.";
            cout << "\n- Customer: Waits for the employee.";
        }
    }

    void indicate_exchange_window()
    {
        cout << "\n- Employee: There is the currency exchange window.";
    }

    void indicate_ticket_machine()
    {
        cout << "\n- Employee: You go to the queue ticket machine and choose the corresponding option";
        cout << " and then wait for your turn.";
    }

    void indicate_atm()
    {
        cout << "\n- Employee: You can use the ATM, there it is.";
    }
};

int main()
{
    // Defining the objects of class employee.
    employee employee_1; 
    employee_1.set_name("Ada"); employee_1.set_job_title("Receptionist"); employee_1.set_gender("female");
    employee employee_2; 
    employee_2.set_name("Eva"); employee_2.set_job_title("Exchanger"); employee_2.set_gender("female");
    employee employee_3; 
    employee_3.set_name("Rick"); employee_3.set_job_title("Customer worker"); employee_3.set_gender("female");
    employee employee_4; 
    employee_4.set_name("Tom"); employee_4.set_job_title("Insurance analyst"); employee_4.set_gender("male");
    employee employee_5; 
    employee_5.set_name("Mircea"); employee_5.set_job_title("Credit giver"); employee_5.set_gender("male");
    employee employee_6; 
    employee_6.set_name("Velior"); employee_6.set_job_title("Investment analyst"); employee_6.set_gender("male");
      // Initiating Dynamic Polymorphism.
    person *e1 = &employee_1, *e2 = &employee_2, *e3 = &employee_3, *e4 = &employee_4, *e5 = &employee_5, *e6 = &employee_6;

    // Defining the objects of class currency_exchange_window.
    currency_exchange_window window_1 = currency_exchange_window(19.5, 19.0, 18.5, 18.1);

    // Defining the objects of class queue_ticket_machine.
    queue_ticket_machine qtm_1 = queue_ticket_machine("Customer department", "Insurance department", "Credit department", "Investment department");

    // Defining the objects of the department classes.
    customer_department customer_department_1 = customer_department("transfers", "payment card");
    insurance_department insurance_department_1 = insurance_department("life insurance", "house insurance");
    credit_department credit_department_1 = credit_department("house credit", "business credit");
    investment_department investment_department_1 = investment_department("stocks", "bonds");

    // Defining the objects of the atm class.
    atm atm_1;
    srand(time(0));
    atm_1.set_amount(1 + (rand() % 1000), false);

    // Defining the objects of the customer class.
    customer customer_1; customer_1.set_name("Ana"); customer_1.set_gender("female");
      // Initiating Dynamic Polymorphism.
    person* c1 = &customer_1;

    // Beginning the scenarios.
    customer_1.enter_bank();
    int option = 1 + (rand() % 3);
    switch (option)
    {
        // The customer goes first to the reception for indication.
        case 1: 
        {
            reception reception_employee;
            reception_employee.speak_to_customer(employee_1.get_name(), false);
            reception_employee.speak_to_customer(employee_1.get_name(), true);
            
            c1->introduce_yourself();
            int question_option = customer_1.speak_to_reception();

            if (question_option == 1)
            {
                int amount_to_change = 1 + (rand() % 1000);
                reception_employee.indicate_exchange_window();
                customer_1.go_to_exchange_window(customer_1.get_gender());
                window_1.exchange_money(amount_to_change, "euro", "sell", false);
                customer_1.asking_to_change(amount_to_change);
                e2->introduce_yourself();
                window_1.exchange_money(amount_to_change, "euro", "sell", true);
                customer_1.leave_bank();
            }

            if (question_option == 2 || question_option == 3 || question_option == 4 || question_option == 5)
            {
                reception_employee.indicate_ticket_machine();
                customer_1.go_to_ticket_machine();
                qtm_1.show_options();
                qtm_1.show_chosen_category(question_option);
                int ticket_number = qtm_1.give_ticket();
                customer_1.wait_in_queue(ticket_number);
                if (question_option == 2)
                {
                    e3->introduce_yourself();
                    customer_department_1.tell_options();
                }
                if (question_option == 3)
                {
                    e4->introduce_yourself();
                    insurance_department_1.tell_options();
                }
                if (question_option == 4)
                {
                    e5->introduce_yourself();
                    credit_department_1.tell_options();
                }
                if (question_option == 5)
                {
                    e6->introduce_yourself();
                    investment_department_1.tell_options();
                }
                customer_1.choses();
                customer_1.leave_bank();
            }

            if (question_option == 6)
            {
                reception_employee.indicate_atm();
                customer_1.go_to_atm();
                atm_1.show_options();
                customer_1.indroduce_option(atm_1.get_amount());
                atm_1.give_money(true);
                customer_1.leave_bank();
            }
            break;   
        }

        // The customer goes right away to the ATM.
        case 2: 
        {
            customer_1.go_to_atm(); 
            atm_1.show_options();
            customer_1.indroduce_option(atm_1.get_amount());
            atm_1.give_money(false);
            customer_1.leave_bank();
            break;
        }

        // The customer goes straight away to the currency exchange window.
        case 3: 
        {
            int amount_to_change = 1 + (rand() % 1000);
            customer_1.go_to_exchange_window(customer_1.get_gender());
            customer_1.asking_to_change(amount_to_change);
            e2->introduce_yourself();
            window_1.exchange_money(amount_to_change, "euro", "sell", true);
            customer_1.leave_bank();
            break;   
        }
    }
}