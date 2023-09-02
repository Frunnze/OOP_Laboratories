#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "../git_lab_6/Model/Bank.cpp"
#include "../git_lab_6/Model/Person.cpp"
#include "../git_lab_6/View/CustomerGeneralView.cpp"
#include "../git_lab_6/View/CustomerAtReceptionView.cpp"
#include "../git_lab_6/View/CustomerAtATMView.cpp"
#include "../git_lab_6/View/CustomerAtExchangeWindowView.cpp"
#include "../git_lab_6/View/CustomerAtTicketMachineView.cpp"
#include "../git_lab_6/Model/Employee.cpp"
#include "../git_lab_6/View/EmployeeInteractingView.cpp"
#include "../git_lab_6/View/DepartmentView.cpp"
#include "../git_lab_6/View/CustomerDepartmentView.cpp"
#include "../git_lab_6/View/InsuranceDepartmentView.cpp"
#include "../git_lab_6/View/CreditDepartmentView.cpp"
#include "../git_lab_6/View/InvestmentDepartmentView.cpp"
#include "../git_lab_6/View/MachineView.cpp"
#include "../git_lab_6/View/ATMView.cpp"
#include "../git_lab_6/Model/ATM.cpp"
#include "../git_lab_6/Model/QueueTicketMachine.cpp"
#include "../git_lab_6/View/QueueTicketMachineView.cpp"
#include "../git_lab_6/View/CurrencyExchangeWindowView.cpp"
#include "../git_lab_6/View/ReceptionView.cpp"


int main()
{
    // Defining the objects of class employee.
    Employee employee1; employee1.setName("Ada"); employee1.setJobTitle("Receptionist"); employee1.setGender("female");
    Employee employee2; employee2.setName("Eva"); employee2.setJobTitle("Exchanger"); employee2.setGender("female"); 
    Employee employee3; employee3.setName("Rick"); employee3.setJobTitle("Customer worker"); employee3.setGender("female");
    Employee employee4; employee4.setName("Tom"); employee4.setJobTitle("Insurance analyst"); employee4.setGender("male");
    Employee employee5; employee5.setName("Mircea"); employee5.setJobTitle("Credit giver"); employee5.setGender("male");
    Employee employee6; employee6.setName("Velior"); employee6.setJobTitle("Investment analyst"); employee6.setGender("male");

    EmployeeInteractingView employee1Int, employee2Int, employee3Int, employee4Int, employee5Int, employee6Int;

    // Defining the objects of class CurrencyExchangeWindowView.
    CurrencyExchangeWindowView window1 = CurrencyExchangeWindowView();

    // Defining the objects of class QueueTicketMachine.
    QueueTicketMachine qtm1Data = QueueTicketMachine("Customer Department", "Insurance Department", "Credit Department", "Investment Department");
    QueueTicketMachineView qtm1;

    // Defining the objects of the Department classes.
    CustomerDepartmentView CustomerDepartmentView1 = CustomerDepartmentView();
    InsuranceDepartmentView InsuranceDepartmentView1 = InsuranceDepartmentView();
    CreditDepartmentView creditDeparment1 = CreditDepartmentView();
    InvestmentDepartmentView InvestmentDepartmentView1 = InvestmentDepartmentView();

    int identifier = 1, TotalHours = 0;
    float hours = 8, minutes = 0;
    while (1)
    {
        // Creating the clock.
        minutes += 1;
        if (minutes == 60)
        {
            minutes = 0;
            hours += 1;
            TotalHours += 1;
        }

        if (hours == 24) hours = 8;

        // Break;
        if (TotalHours == 100) break;

        int r = 1 + rand() % 100;
        if (hours >= 8  && hours < 12 && r <= 30 ||
            hours >= 12 && hours < 14 && r <= 40 ||
            hours >= 14 && hours < 17 && r <= 50)
        {
            // Showing the time at which the customer enters the bank;
            cout << "Time: " << hours << ":" << (int)minutes << "\n";

            // Defining the objects of the ATM class.
            ATMView atm1;
            ATM atm1Data;
            srand(identifier);

            // Defining the objects of the customer class.
            CustomerGeneralView customer1;
            CustomerAtReceptionView customer1AtReception;
            CustomerAtATMView customer1AtATM;
            CustomerAtExchangeWindowView customer1AtExchangeWindow;
            CustomerAtTicketMachineView customer1AtTicketMachine;
            customer1.setName(to_string(identifier));

            int genderNum = 1 + (rand() % 2);
            if (genderNum == 1)
            {        
                customer1.setGender("female");
            } else
            {
                customer1.setGender("male");
            }

            // Identifing the next customer.
            identifier += 1;

            // Beginning the scenarios.
            customer1.enterBank();
            int option = 1 + (rand() % 3);
            switch (option)
            {
                // The customer goes first to the Reception for indication.
                case 1:
                {
                    customer1AtReception.goToReception();
                    ReceptionView ReceptionEmployee;
                    if (1 + (rand() % 100) < 90)
                    {
                        ReceptionEmployee.speakToCustomer(employee1.getName(), false);
                        ReceptionEmployee.speakToCustomer(employee1.getName(), true);
                    }
                    else
                    {
                        ReceptionEmployee.speakToCustomer(employee1.getName(), true);
                    }

                    customer1.introduceYourself(employee1.getGender());
                    int QuestionOption = customer1AtReception.speakToReception(identifier);

                    if (QuestionOption == 1)
                    {
                       int AmountToChange = 1 + (rand() % 800);
                       ReceptionEmployee.indicateExchangeWindow();
                       customer1AtExchangeWindow.goToExchangeWindow(customer1.getGender());
                       window1.exchangeMoney(AmountToChange, "euro", "sell", false);
                       customer1AtExchangeWindow.askingToChange(AmountToChange);
                       employee2Int.introduceYourself(employee2.getName(), employee2.getJobTitle());
                       window1.exchangeMoney(AmountToChange, "euro", "sell", true);
                       customer1.leaveBank();
                    }

                    if (QuestionOption == 2 || QuestionOption == 3 || QuestionOption == 4 || QuestionOption == 5)
                    {
                        ReceptionEmployee.indicateTicketMachine();
                        customer1AtTicketMachine.goToTicketMachine();
                        if (1 + (rand() % 100) <= 30)
                            qtm1.brokenMachine(true);
                        qtm1.showOptions(qtm1Data.getCat1(), qtm1Data.getCat2(), qtm1Data.getCat3(), qtm1Data.getCat4());
                        qtm1.showChosenCategory(QuestionOption, qtm1Data.getCat1(), qtm1Data.getCat2(), qtm1Data.getCat3(), qtm1Data.getCat4());
                        int TicketNumber = qtm1Data.giveTicket();
                        customer1.waitInQueue(TicketNumber);
                        if (QuestionOption == 2)
                        {
                            employee3Int.introduceYourself(employee3.getName(), employee3.getJobTitle());
                            CustomerDepartmentView1.tellOptions();
                        }
                        if (QuestionOption == 3)
                        {
                            employee4Int.introduceYourself(employee4.getName(), employee4.getJobTitle());
                            InsuranceDepartmentView1.tellOptions();
                        }
                        if (QuestionOption == 4)
                        {
                            employee5Int.introduceYourself(employee5.getName(), employee5.getJobTitle());
                            creditDeparment1.tellOptions();
                        }
                        if (QuestionOption == 5)
                        {
                            employee6Int.introduceYourself(employee6.getName(), employee6.getJobTitle());
                            InvestmentDepartmentView1.tellOptions();
                        }
                        customer1.choose();
                        customer1.leaveBank();
                    }

                    if (QuestionOption == 6)
                    {
                        ReceptionEmployee.indicateATM();
                        customer1AtATM.goToATM();
                        if (1 + (rand() % 100) <= 20)
                        {
                            atm1Data.setAmount(1 + (rand() % 1000));
                            atm1.broken(true);
                        } else
                        {
                            atm1Data.setAmount(1 + (rand() % 1000));
                            atm1.broken(false);
                        }
                        atm1.showOptions();
                        customer1AtATM.introduceOption(atm1Data.getAmount());
                        atm1.giveMoney(true, atm1Data.getAmount());
                        customer1.leaveBank();
                    }
                    break;
                }

                // The customer goes right away to the ATM.
                case 2:
                {
                    customer1AtATM.goToATM();
                    if (1 + (rand() % 100) <= 20)
                    {
                        atm1Data.setAmount(1 + (rand() % 1000));
                        atm1.broken(true);
                    } else
                    {
                        atm1Data.setAmount(1 + (rand() % 1000));
                        atm1.broken(false);
                    }
                    atm1.showOptions();
                    customer1AtATM.introduceOption(atm1Data.getAmount());
                    atm1.giveMoney(false, atm1Data.getAmount());
                    customer1.leaveBank();
                    break;
                }

                // The customer goes straight away to the currency exchange Window.
                case 3:
                {
                    int AmountToChange = 1 + (rand() % 800);
                    customer1AtExchangeWindow.goToExchangeWindow(customer1.getGender());
                    customer1AtExchangeWindow.askingToChange(AmountToChange);
                    employee2Int.introduceYourself(employee2.getName(), employee2.getJobTitle());
                    window1.exchangeMoney(AmountToChange, "euro", "sell", false);
                    window1.exchangeMoney(AmountToChange, "euro", "sell", true);
                    customer1.leaveBank();
                    break;
                }
            }
            cout << "\n\n\n\n";
        }
    }
    return 0;
}