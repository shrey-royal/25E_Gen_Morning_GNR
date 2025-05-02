package oops.inheritance.classes;

public class Child extends Parent {
    public String childData;

    public Child(String privateData, String parentData, String childData) {
            super(privateData, parentData); // call to parent class' constructor
            this.childData = childData;
    }

    public Child(String childData) {
        this.childData = childData;
    }

    public void getChildDetails() {
        System.out.println("Child Data: " + childData);
    }

    public void getDetails() {
        getParentDetails();
        getChildDetails();
    }
}
