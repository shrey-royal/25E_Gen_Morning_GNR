package oops.inheritance;

import oops.inheritance.classes.ElectricCar;

public class Multilevel {
    public static void main(String[] args) {
        ElectricCar tesla = new ElectricCar();

        System.out.println("Brand: " + tesla.brand);
        tesla.start();

        System.out.println("Doors: " + tesla.doors);
        tesla.drive();

        System.out.println("Battery: " + tesla.batteryCapacity);
        tesla.charge();
    }
}
