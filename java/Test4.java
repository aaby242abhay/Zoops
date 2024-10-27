interface Printable{
    void f();
}
class A implements Printable{
    public void f(){
        System.out.println("a");
    }
    public void a(){
        System.out.println("function a");
    }
}
class B implements Printable{
    public void f(){
        System.out.println("b");
    }
    public void b(){
        System.out.println("function b");
    }
}
class Call{
    void invoke(Printable p){
        if(p instanceof A){
            A a = (A)p;         //Downcasting is necessary here
            a.a();
            a.f();
        }
        else if(p instanceof B){
            B b = (B) p;        //Downcasting is necessary here
            b.b();
            b.f();
        }
        else {
            System.out.println("Invalid");
        }

    }
}

public class Test4 {
    public static void main(String[] args) {
        Printable p1 = new A();
        Printable p2 = new B();
        Call c = new Call();
        c.invoke(p1);
        c.invoke(p2);

    }
}
