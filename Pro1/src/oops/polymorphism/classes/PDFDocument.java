package oops.polymorphism.classes;

public class PDFDocument extends Document {
    @Override
    public void printInfo() {
        System.out.println("PDF document with metadata");
    }

    public void extractMetadata() {
        System.out.println("Extracting  PDF metadata...");
    }
}
