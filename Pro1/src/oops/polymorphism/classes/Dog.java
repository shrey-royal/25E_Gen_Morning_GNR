package oops.polymorphism.classes;

public class Dog extends Animal {
    @Override
    public void eat() {
        System.out.println("Dog is eating");
    }

    public void callParentEat() {
        super.eat();
    }
}
