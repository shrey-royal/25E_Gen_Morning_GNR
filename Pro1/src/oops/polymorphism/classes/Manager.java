package oops.polymorphism.classes;

public class Manager extends Employee {
    String name = "Manager";

    public Manager(double salary) {
        super(salary);  // calling parent constructor
        this.name = "Manager";
        System.out.println("Manager constructor called");
    }

    public void work() {
        super.work();   //calling parent method
        System.out.println(name + " is managing a team.");
    }

    public void showNames() {
        System.out.println("Child name: " + name);
        System.out.println("Parent name using super: " + super.name);   // accessing parent variable
    }
}
