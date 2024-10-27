class A{                            //final classes cannot be extended
    A(){
        System.out.println("constructor of classs A is being called");
    }
    final void display(){                 //final methods cannot be Overridden
        System.out.println("A's method....");
    }
}

public class Bike7 extends A{
    int speed;
    final int speedLimit = 500;             //final variables cannot be changed
    Bike7(){
        System.out.println("Speed is " + speed);
    }
    {
        System.out.println("1st IIB");
        speed = 100;
    }
    {
        System.out.println("2nd IIB");
    }
    public static void main(String[] args) {
        Bike7 b = new Bike7();
        b.display();                    //the final method can be inherited but not overridden
    }
}
