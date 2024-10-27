class Animal{
    Animal(){
        System.out.println("Constructor of Animal called and Animal is created");
    }
    String color = "skahfslkjf";
    void speak(){
        System.out.println("Animal is speaking");
    }
}
class Dog extends Animal{
    Dog(){
        super();
        System.out.println("Constructor of Dog called and Dog is created");
    }
    String color = "black";
    void speak(){
        super.speak(); // calls speak method of Animal class
        System.out.println("Dog is speaking");
    }
    void printColor(){
        System.out.println("Color of Dog is: " + color); // prints color of Dog class
        System.out.println("Color of Animal is: " + super.color); // prints color of Animal class
    }
}
public class TestSuper1 {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.printColor();
        d.speak();
    }
}
