package Javalorant.oop22;

public class CowTestDrive {
    public static void main( String[] args ){
        Cow cow = new Cow();

        cow.set_age("2077");
        System.out.println(cow.get_age());

        cow.Moo();
    }
}
