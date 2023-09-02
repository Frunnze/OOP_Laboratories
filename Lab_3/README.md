# Lab_3: Bank simulation
<img src="https://github.com/Frunnze/Lab_3/blob/main/diagram.png" width="800">

The root class of this hierarchy is "Bank".
- "Bank" has several attributes like "name", "location", and whether it is "open" or not.
- The methods of this class: to "set" the name and to "get" the name.

The superclasses:
1. "Person" which inherits the above attributes and methods, and adds another attribute called "gender" and the methods "set" and "get" gender, which will help us to pick the right pronoun when the customers and employees speak to each other.
- The child classes of "Person" are "Customer" and "Employee".
- At this point, the "Customer" and "Employee" classes inherit two, among others, important attributes "name", "gender", and their setter and getters.

2. "Department" superclass gives access to two attributes "option_1" and "option_2", which every other department class needs. Thus, if the other department class needs more options, we can just add more specific options to the corresponding department class.
- The department child classes like "customer_department", "insurance_department", and so on inherits the above two options, and create their own methods to set them and represent them. These options are needed when the customer goes to the queue ticket machine.

3. "Machine" superclass denotes two child classes "ATM" and "Queue ticket machine".
- The superclass has several attributes like "amount_of_machines", and, whether it is "broken" or not, and corresponding methods.
- Thus, the child classes "ATM" and "Queue ticket machine", inherit everything from the "Machine" superclass and root class "Bank".

4. "Window" superclass has two child classes "Currency exchange window" and "Reception".
- These child classes inherit the attribute "presence_of_employee", which is going to be used to represent whether the employee is on his post of work or not.
- In the case that he is not, the customer will have to wait which is denoted in the corresponding method.
