package pack;
public class A{
    int x;
    private A(){
        System.out.println("A's constructor");
    }
    public A(int x){
        this.x = x;
        System.out.println("A's public constructor");
    }
    void msg(){
        System.out.println("Hello");
    }
}
class Simple{
    public static void main(String[] args) {
        A a = new A(5);
        // A a = new A();       //We cannot make the object using the private constructor as we can only make the object using the public constructor
        a.msg();
    }
}