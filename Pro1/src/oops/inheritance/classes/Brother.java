package oops.inheritance.classes;

public class Brother extends Father {
    public String hobby;

    public Brother(String familyName, int age, String hobby) {
        super(familyName, age);
        this.hobby = hobby;
        System.out.println("Brother constructor called");
    }

    public void showBrotherInfo() {
        System.out.println("Bother's hobby: " + hobby);
    }
}
