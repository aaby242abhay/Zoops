class Animal {
    void eat() {
        System.out.println("Animal is eating...");
    }
}
class Dog extends Animal {
    @Override
    void eat() {
        System.out.println("Dog is barking...");
    }
}

public class BabyDog extends Dog {
    // @Override
    // void eat() {
    //     System.out.println("Baby Dog is weeping...");
    // }
    public static void main(String[] args) {
        Animal a1;
        a1 = new Animal();
        System.out.println(a1 instanceof BabyDog);
        System.out.println(a1);
        a1.eat();
    }
}
