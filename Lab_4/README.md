# Lab_4: Bank simulation and Polymorphism

Using polymorphism principles:

1. Virtual function: I implemented the Dynamic polymorphism for “introduce_yourself()” method from the superclass “person” with the child classes “customer” and “employee”. Thus, I have changed this method in a specific way for the child classes, and, I defined the pointers of the “person” superclass for each defined object of the child classes.

2. Method overriding: Also, in “machine” superclass, we have the method “show_options()”, which is used in its specific way for the “atm” and “queue_ticket_machine” child classes to show the corresponding options.

3. Method overriding: For the “department” superclass, we have “tell_options()” method which we can use for the child classes in different ways. For instance, we can use more options for each class, or we can add some description to them in a specific way.



Creating scenarios of the simulation:
1. The scenarios are based on the customer’s decision (purpose) at the bank.

2. When the customer enters the bank s/he has three choices:
- The customer goes first to the reception for indication.
- The customer goes right away to the ATM.
- The customer goes straight away to the currency exchange window.

3. The choice is made using “srand()” and “rand()” functions and using the “switch” in C++.

4. The second and third option is also included in the first option. Thus, the reception indicates that in order to do the task you have to go to the ATM or currency exchange window.

5. So, the first option, is made up of multiple options (purposes) at the bank that the customer might have. He might want to change some money, to transfer some money and so on.
