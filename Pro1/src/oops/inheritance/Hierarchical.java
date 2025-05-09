package oops.inheritance;

import oops.inheritance.classes.Brother;
import oops.inheritance.classes.Sister;

public class Hierarchical {
    public static void main(String[] args) {
        System.out.println("--- Creating Brother object ---");
        Brother bro = new Brother("Sharma", 50, "Football");
        bro.showDetails();
        bro.showBrotherInfo();

        System.out.println("--- Creating Sister object ---");
        Sister sis = new Sister("Sharma", 50, "Math");
        sis.showDetails();
        sis.showSisterInfo();
    }
}
