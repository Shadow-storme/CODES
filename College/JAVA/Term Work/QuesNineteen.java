//19.WAP to check whether a file having your name. If yes then copy your name’s all occurrence in new file by creating it.


import java.io.*;

public class QuesNineteen {
  public static void main(String[] args) {
    // Your name
    String name = "John";

    // The file to check
    File file = new File("names.txt");

    // The new file to write the occurrences of your name to
    File newFile = new File("my-name-occurrences.txt");

    try {
      // Read the contents of the file into a String
      BufferedReader reader = new BufferedReader(new FileReader(file));
      String contents = "";
      String line;
      while ((line = reader.readLine()) != null) {
        contents += line + "\n";
      }
      reader.close();

      // Check if the file contains your name
      if (contents.contains(name)) {
        // If it does, create a new file and write all occurrences of your name to it
        BufferedWriter writer = new BufferedWriter(new FileWriter(newFile));
        int index = 0;
        while (index >= 0) {
          // Find the next occurrence of your name
          index = contents.indexOf(name, index);
          if (index >= 0) {
            // Write your name to the new file
            writer.write(name);
            writer.newLine();
            // Move the index past the occurrence of your name so we don't find it again
            index += name.length();
          }
        }
        writer.close();
      }
    } catch (IOException e) {
      System.out.println("An error occurred while reading or writing the files.");
      e.printStackTrace();
    }
  }
}
