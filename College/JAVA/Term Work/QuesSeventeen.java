//17.WAP to write state of an object into a file (Object Serialization).
import java.io.*;

public class QuesSeventeen {
    public static void main(String[] args) {
        String fileName = "object.ser";

        // create an object
        Person person = new Person("John", 30);

        // serialize the object
        try (FileOutputStream fos = new FileOutputStream(fileName);
             ObjectOutputStream oos = new ObjectOutputStream(fos)) {

            oos.writeObject(person);

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

class Person implements Serializable {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}
