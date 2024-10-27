class Vehicle{
    int speed = 150;
}
public class Bike extends Vehicle{
    int speed = 100;
    public static void main(String[] args) {
        Vehicle v = new Bike();
        System.out.println(v.speed);
    }
}
