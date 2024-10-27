class Animal{
    void eat() {
        System.out.println("Animal is eating...");
    }
}

public class Dog5 extends Animal{
    // @Override
    // void eat() {
    //     System.out.println("Dog is barking...");
    // }
    public static void main(String[] args) {
        Animal a1 = new Dog5();
        // Dog5 = new Animal();                     //THIS WILL THROW COMPILE TIME ERROR
        // Dog5 d1 = (Dog5)new Animal();
        // d1.eat();
        if(new Animal() instanceof Dog5){
            Dog5 d1 = (Dog5)new Animal();
            d1.eat();
        }
        else if(a1 instanceof Dog5){
            Dog5 d1 = (Dog5)a1;
            d1.eat();
        }
        else{
            System.out.println("Outside the if Block");
        }
        
    }
    
}
