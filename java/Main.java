class Animal{
    void speak(){
        System.out.println("Animal speaks");
    }
}
class Dog extends Animal{
    void speak(){
        System.out.println("Dog barks");
    }
    void bark(){
        System.out.println("Dog barks");
    }
}
public class Main{
    public static void main(String[] args) {
        Animal ani = new Dog();
        ani.speak();
    }
}