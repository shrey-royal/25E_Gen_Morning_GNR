package oops.polymorphism;

import oops.polymorphism.classes.Document;
import oops.polymorphism.classes.DocumentProcessor;
import oops.polymorphism.classes.PDFDocument;
import oops.polymorphism.classes.PDFDocumentProcessor;

public class Covariant_RT {
    public static void main(String[] args) {
        DocumentProcessor processor = new PDFDocumentProcessor();
        Document doc = processor.processDocument();

        doc.printInfo();

        if (doc instanceof PDFDocument) {
            ((PDFDocument) doc).extractMetadata();
        }
    }
}
