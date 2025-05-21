package oops.polymorphism.classes;

public class Employee {
    String name;
    double salary;

    public Employee(double salary) {
        this.name = "Generic Employee";
        this.salary = salary;
        System.out.println("Employee constructor called");
    }

    public void work() {
        System.out.println(name + " is working.");
    }

    public void displaySalary() {
        System.out.println("Salary: " + salary);
    }
}
