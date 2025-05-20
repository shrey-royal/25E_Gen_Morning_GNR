package oops.polymorphism.classes;

public class DocumentProcessor {
    public Document processDocument() {
        System.out.println("Processing document...");
        return new Document();
    }
}
