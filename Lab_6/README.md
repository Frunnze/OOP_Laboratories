# Lab_6

<h2>Implementing the SOLID principles</h2>

<b>Single-responsibility principle (SRP)</b>
<br>
To implement this principle I read to look at each class and give myself the question: “What is the responsibility of this class?”. If in my answer appeared the word “and” then I had to split the class.

- Class “Bank” had just one responsibility to manipulate the given name. 
- Class “Person” had just one responsibility to manipulate the given gender of a person.
- Class “Customer” appeared to have many responsibilities towards different entities in the bank. 	Thus, I split it into:
	- “CustomerGeneral”, which has the general actions a customer does in a bank like
		“enterBank()”, “waitInQueue()” and so on.
	- “CustomerAtReception”, which describes the behaviour of the customer at the reception like
		“goToReception()” or “speakToReception()”.
	- “CustomerAtATM”, which describes the behaviour of the customer at the ATM like
		“goToATM()” or “introduceOption()”.
	- “CustomerAtExchangeWindow”, which describes the behaviour of the customer at the 		exchange window like “goToExchangeWindow()” or “askingToChange()”.
	- “CustomerAtTicketMachine”, which describes the behaviour of the customer at the ticket 		machine like “goToTicketMachine()”.
- Class “Employee” appeared to have two responsibilities instead of one.
	Thus, I split it into:
	- “EmployeeData”, which stores and manipulates the corresponding data of an employee like
		“setJobTitle()” and “getJobTitle()”.
	- “EmployeeInteracting”, which describes the behaviour of an employee with the customer like
		“introduceYourself()”.
- Class “Department” has just one responsibility to store the options of the department.
- Class “CustomerDepartment” has to just tell the options that it has.
- Class “InsuranceDepartment” has to just tell the options that it has.
- Class “CreditDepartment” has to just tell the options that it has.
- Class “InvestmentDepartment” has to just tell the options that it has.
- Class “Machine” has just one responsibility to suggest the state of the machine, that is, broken/working.
- Class “ATM” appeared to have several responsibilities to interact with the customer and to store the data and manipulate the data.
	Thus, I split it into:
	- “ATMView”, which outputs the record of interacting with the customer like “showOptions()” or 		“giveMoney()”.
	- “ATMData”, which has the methods “setAmount()” and “getAmount()”.
- Class “QueueTicketMachine”, also, had to many responsibilities.
	Thus, I split it into:
	- “QueueTicketMachineData”, which handles the data.
 	- “QueueTicketMachineView”, which answers for the presentation of the information.
- Class “CurrencyExchangeWindow” has just one responsibility to change the money.
- Class “Reception”, also, has just one responsibility, that is, to advice the customer.

<br>
<b>Open-Closed Principle</b>
<br>
There are several ways to implement this principle. Some are more recommended than others.
<br>
<br>
1. Inheritance and polymorphism
<br>
2. Abstractions
<br>
3. Interfaces
<br>
4. Composition
<br><br>

We already implemented “Inheritance and polymorphism” in the previous laboratories. However, I will have to add to the hierarchy the new created classes.

<br>
<b>Liskov Substitution Principle</b>
<br>
For this principle I analysed the created hierarchy and I checked each parent and child class for the following condition:
+ The behaviour the subclass should not deviate from the behaviour of the superclass.

- Bank
	- <b>Person</b>
	- Department
	- Machine
	- Window

- Person
	- <b>CustomerGeneral</b> (it uses the methods)
	- CustomerAtReception
	- CustomerAtATM
	- CustomerAtExchangeWindow
	- CustomerAtTicketMachine
	- <b>EmployeeData</b> (it uses the methods)
	- EmployeeInteracting

- Department
	- <b>CustomerDepartment</b>
	- <b>InsuranceDepartment</b>
	- <b>CreditDepartment</b>
	- <b>InvestmentDepartment</b>

- Machine 
	- <b>ATMView</b>
	- ATMData
	- QueueTicketMachineData	
	- <b>QueueTicketMachineView</b>

- Window
	- CurrencyExchangeWindow
	- Reception

<br>
<b>Interface segregation principle</b>
<br>
I didn’t use any interfaces as I didn’t find them necessary for my simulation, but for the sake of this principle I implemented interfaces for the ATM and QueueTicketMachine.

These interfaces satisfy the condition: 
A client should never be forced to implement an interface that it doesn’t use, or clients shouldn’t be forced to depend on methods they do not use.

<br>
<b>Dependency Inversion Principle</b>
<br>
This principle has the following definition:
- High-level modules should not depend on low-level modules. Both should depend on the abstraction. 
- Abstractions should not depend on details. Details should depend on abstraction.

My understanding:
- So, a class should not use another class as a tool by using dependency injection of this tool. 
- It should depend on the abstraction or the interface implemented by this tool class.

Conclusion:
In my simulation I do not use any dependency injections, thus, there is no need for me to implement the above principle.


<h2>Implementing the MVC architecture</h2>

![alt text](https://miro.medium.com/proxy/0*Qf1s2lG86MjX-Zcv.jpg)



<b>Prerequisite tasks:</b>
- Edit the names of the classes accordingly.
- Put each class in their files.

<b>General conditions to satisfy:</b>

0. To put the entities of the app into one of 3 categories: Views, Controller/Presenter/ViewModel, Models.
1. Input is directed to the “Controller”.
2. Many-to-many relationship between “View” and “Controller”.
3. “View” doesn’t have any knowledge of the “Controller”
4. “View” is aware of the “Model” it is expecting to pass on to it.

<b>Conditions for Model:</b>
- stores data;
- processes the data.

<b>Conditions for View:</b>
- only displays the model's data;

<b>Conditions for Controller:</b>
- integrates the view and model;



