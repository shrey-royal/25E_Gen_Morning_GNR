package oops.inheritance;

import oops.inheritance.classes.Child;

public class Single {
    public static void main(String[] args) {
        Child c = new Child("Parent Class' Private Data", "Parent Class Data", "Child Class Data");

        c.getDetails();
    }
}

/*
Tasks:
1. Employee Payroll System
Problem Statement:
Create a Java program where a base class `Employee` contains attributes like `name`, `employeeId`, and `salary`. Derive a class `Manager` that inherits from `Employee` and adds an additional attribute `department`. Write methods to display employee details and override them in the `Manager` class to include department information.

2. Vehicle Information System
Problem Statement:
Design a class `Vehicle` with attributes `make`, `model`, and `year`. Create a subclass `Car` that adds a `numberOfDoors` attribute. Implement methods to input and display vehicle and car details using inheritance.

3. Student Result Processing
Problem Statement:
Create a class `Student` with properties `rollNo`, `name`, and `marks`. Derive a class `Result` that computes and displays the grade of the student based on marks. Use single inheritance to reuse the student data in the `Result` class.

4. Bank Account Management
Problem Statement:
Write a Java program with a class `Account` that holds `accountNumber`, `accountHolderName`, and `balance`. Create a subclass `SavingsAccount` that adds an attribute `interestRate` and a method to calculate interest. Demonstrate the use of single inheritance by accessing base class data in the derived class.

5. Library Management System
Problem Statement:
Develop a base class `Book` that stores `title`, `author`, and `ISBN`. Derive a class `EBook` that adds `fileSize` and `downloadUrl`. Use single inheritance to display complete information about the book including digital features in the derived class.
*/