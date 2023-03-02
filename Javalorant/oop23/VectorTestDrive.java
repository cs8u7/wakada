package Javalorant.oop23;

public class VectorTestDrive {
    public static void main( String[] args ){
        Vector vector = new Vector();
        vector.get_x(5);
        vector.get_y(6);

        System.out.println("Sum is: " + vector.add());
        System.out.println("Suctract is: " + vector.sub());
        System.out.println("Multi is: " + vector.mul());
    }
}
