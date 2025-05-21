package oops.polymorphism;

import oops.polymorphism.classes.Manager;

public class Super_Kw {
    public static void main(String[] args) {
        Manager mgr = new Manager(80000);

        mgr.work();
        mgr.displaySalary();
        mgr.showNames();
    }
}
