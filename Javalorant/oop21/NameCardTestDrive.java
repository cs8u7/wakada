package Javalorant.oop21;

public class NameCardTestDrive {
    public static void main( String[] args ){
        NameCard newCard = new NameCard();
        newCard.set_name("Juan");
        System.out.println(newCard.get_name());

        newCard.set_phone("Juan");
        System.out.println(newCard.get_phone());

        newCard.set_mail("Juan");
        System.out.println(newCard.get_mail());
    }
}
