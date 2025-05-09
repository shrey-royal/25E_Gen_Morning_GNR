package oops.inheritance.classes;

public class Sister extends Father {
    public String favoriteSubject;

    public Sister(String familyName, int age, String favoriteSubject) {
        super(familyName, age);
        this.favoriteSubject = favoriteSubject;
        System.out.println("Sister constructor called");
    }

    public void showSisterInfo() {
        System.out.println("Sister's favorite subject: " + favoriteSubject);
    }
}
