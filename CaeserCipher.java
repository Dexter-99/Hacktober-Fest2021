import java.util.*;
public class ISC2017Q3 {
    public static void main(String[] args) {
        String msg;
        Scanner in = new Scanner(System.in);
        System.out.println("INPUT the text to be encrypted:");
        msg = in.nextLine();
        while(msg.length()< 3 || msg.length() > 100) {
            System.out.println("Invalid Input, try again:");
            msg = in.nextLine();
            }
        Caesar obj = new Caesar(msg);
        System.out.println("OUTPUT:");
        obj.encryptionProcess();
        System.out.println();
        obj.displayEncryptedText();
        in.close();
        }
}

class Caesar {

public void displayEncryptedText() {
    for(int i=0;i<text_to_encrypt.length();i++)
        System.out.print(text_to_array[i]);
    }

public void encryptionProcess() {
    for(int i=0;i<text_to_encrypt.length();i++) {
        if((text_to_array[i] >= 'A' && text_to_array[i] <= 'Z') || (text_to_array[i] >= 'a' && text_to_array[i] <= 'z') ) {
            if(text_to_array[i] >= 'A' && text_to_array[i] <= 'Z')
                text_to_array[i] = shiftPlaces(text_to_array[i],true);
            if(text_to_array[i] >= 'a' && text_to_array[i] <= 'z')
                text_to_array[i] = shiftPlaces(text_to_array[i],false);
            } // end-if
        } // end-for
    }


private char shiftPlaces(char c,boolean flag) {
    if(flag==true)
        return ((char)(c+13 > 90 ? (65+c+12-90):c+13)); // shifting 13 places in A-Z enter change in cipher in place of 13
    else
        return ((char)(c+13 > 122 ? (97+c+12-122):c+13)); // shifting 13 places in a-z enter change in cipher in place of 13
    }

Caesar(String msg){
    text_to_encrypt = msg;
    text_to_array = new char[text_to_encrypt.length()];
    text_to_array = text_to_encrypt.toCharArray(); // using library function- converting string to char array-
    }

// you can use for loop and string_name.charAt(i) method to extract character from string one by one
private char[] text_to_array;
private String text_to_encrypt;
}
