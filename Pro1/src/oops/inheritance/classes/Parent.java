package oops.inheritance.classes;

public class Parent {
    private String privateData;
    protected String parentData;

    public Parent() {}

    public Parent(String privateData, String parentData) {
        this.privateData = privateData;
        this.parentData = parentData;
    }

    public void getParentDetails() {
        System.out.println("Private Data: " + privateData);
        System.out.println("Parent Data: " + parentData);
    }
}
