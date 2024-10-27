class A{
    A(){
        System.out.println("Constructor of parent class A ");
    }
    void msg(){
        System.out.println("Hello from A");
    }
    void parentMethod(){
        System.out.println("Parent method");
    }

}
class B extends A{
    B(){
        System.out.println("Constructor of child class B ");
    }
    @Override
    void msg(){
        System.out.println("Hello from B");
    }
    void print(){
        System.out.println("new method in child class");
    }
}

public class Test3 { 
    public static void main(String[] args) {
        // A a = new A();
        A b = new B();
        b.msg();
        b.parentMethod();
    }
}
