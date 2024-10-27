abstract class Shape{
    abstract void draw();
}
class Rectangle extends Shape{
    void draw(){
        System.out.println("Drawing Rectangle");
    }
}
class Circle extends Shape{
    void draw(){
        System.out.println("Drawing Circle");
    }
}
public class TestAbstraction {
    public static void main(String[] args) {
        Shape rect = new Rectangle();
        Shape circ = new Circle();
        circ.draw();
        rect.draw();
    }
    
}
