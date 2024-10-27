abstract class Bike{
    abstract void run();
}
public class Honda extends Bike {
    public void run(){
        System.out.println("running safely");
    }
    public static void main(String[] args) {
        Bike b = new Honda();
        b.run();
    }
}
