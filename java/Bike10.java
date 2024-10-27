class A{
    A(){
        System.out.println("Constructor of parent A....");
    }
}

public class Bike10 extends A{

    Bike10(){
        baricade = 100;
        System.out.println("baricade is: "+baricade+ " has been initialized in the constructor");
    }

    static final int speedlimit; // final variable
    final int baricade;

    static{                     //static_block --> contructor---> Super() --> instance block--->method
                                //static block run only once at the time of class loading
                                //this would also run if we don't make any objects of the class
        speedlimit=70;
        System.out.println("speedlimit is: "+speedlimit+ " has been initialized in the static block");
    }

    void run() {
        System.out.println("speedlimit is: "+speedlimit);
        System.out.println("baricade is: "+baricade);

    }
    public static void main(String args[]) {
        // Bike10 obj = new Bike10();
        // Bike10 obj1 = new Bike10();
        // obj.run();
        // obj1.run();
    }
}