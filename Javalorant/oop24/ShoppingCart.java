package Javalorant.oop24;

public class ShoppingCart {
    private String cartContent;
    
    public String checkOut(){
        return cartContent;
    }

    public void addtoCart(String name){
        cartContent = cartContent + " " + name;
    }

    
}
