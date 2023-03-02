package Javalorant.oop22;

public class Cow {
    //private String name;
    //private String breed;
    private String age;

    public String get_age() {
        return age;
    }
    public void set_age( String new_age ){
        age = new_age;
    }

    public void Moo(){
        System.out.println("Moo..!");
    }
}
