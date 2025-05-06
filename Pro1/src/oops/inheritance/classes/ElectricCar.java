package oops.inheritance.classes;

public class ElectricCar extends Car {
    public int batteryCapacity = 100;

    public void charge() {
        System.out.println("Charging electric car...");
    }
}
