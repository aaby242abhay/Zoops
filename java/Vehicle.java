class Bike extends Vehicle{
    static void sRun1() {
        System.out.println("Bike is running statically");
    }
    @Override
    void run() {
        System.out.println("Bike is running");
    }

}

public class Vehicle {
    String name;
    void run() {
        System.out.println("Vehicle is running");
    }
    static void sRun1() {
        System.out.println("Vehicle is running statically");
    }
    @SuppressWarnings("static-access")
    public static void main(String[] args) {
        Vehicle v = new Vehicle();
        Vehicle v2 = new Bike();
        Bike b = new Bike();


        v.sRun1();
        v2.sRun1();
        b.sRun1();
    }
}
