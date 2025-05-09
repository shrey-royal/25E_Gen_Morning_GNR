package oops.inheritance.classes;

public class Father {
    public String familyName;
    public int age;

    public Father(String familyName, int age) {
        this.familyName = familyName;
        this.age = age;
        System.out.println("Father constructor called");
    }

    public void showDetails() {
        System.out.println("Father's family name: " + familyName + ", Age: " + age);
    }
}
