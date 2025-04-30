package oops.basics;

class Student {
    int rollNo;
    String name;
    static String collegeName;

    static {
        // static block: initialize all the static items here
        System.out.println("--- static block called ---");
        collegeName = "Govt. Engineering College";
    }

    public Student(int rollNo, String name) {
        System.out.println("--- constructor called ---");
        this.rollNo = rollNo;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Student{" +
                "rollNo=" + rollNo +
                ", name='" + name + '\'' +
                '}';
    }
}

public class Static_KW {
    public static void main(String[] args) {
//        Student s = new Student(420, "mohaklal");
//        System.out.println(s);
        System.out.println("College Name: " + Student.collegeName);
    }
}
