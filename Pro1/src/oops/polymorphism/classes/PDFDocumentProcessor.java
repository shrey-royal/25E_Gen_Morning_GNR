package oops.polymorphism.classes;

public class PDFDocumentProcessor extends DocumentProcessor {
    @Override
    public PDFDocument processDocument() {
        System.out.println("Processing PDF document...");
        PDFDocument pdf = new PDFDocument();
        pdf.extractMetadata();
        return pdf;
    }
}
