class Animal{
    public void eat(){
        System.out.println("Animal is eating");
    }
}
public class Dog extends Animal{
    @Override
    public void eat(){
        System.out.println("Dog is eating");
    }
    static void downcast (Animal a){
        Dog d = (Dog) a;
        d.eat();
        System.out.println("Downcasted");
    }
    static{
        System.out.println("Static block called first");
    }
    public static void main(String args[]){
        Animal a = new Dog();
        Animal a1 = new Animal();
        a.eat();
        a1.eat();
        Dog.downcast(a1);

    }

}