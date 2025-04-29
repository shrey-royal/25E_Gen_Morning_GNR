package oops.basics;

class FoodItem {
    private String name;
    private double price;

    public FoodItem(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
};

public class Basic {
    public static void main(String[] args) {
        FoodItem maggie = new FoodItem("Maggie", 13);

        System.out.println(maggie.getName());
        System.out.println(maggie.getPrice());

        maggie.setName("Yippee Noodles");
        maggie.setPrice(50);
        System.out.println(maggie.getName());
        System.out.println(maggie.getPrice());

        System.out.println(maggie);
        System.out.println(maggie.hashCode());
    }
}
