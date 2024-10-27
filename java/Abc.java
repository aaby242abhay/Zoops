class Xyz{
    int data = 10;
    Abc obj;
    Xyz(Abc obj){
        this.obj = obj;
        System.out.println("constructor from Xyz");
    }
    void display(){
        System.out.println(obj.name + " " + data);
        obj.name = "Ratan";
    }
}
class Abc{
    String name = "Abhay";
    Abc(String name){
        this.name = name;
        Xyz b = new Xyz(this);
        b.display();
        b.data = 20;
        b.display();
    }
    void print(){
        System.out.println(this);
    }
    public static void main(String[] args) {
        Abc a = new Abc("Aaby");
        System.out.println(a);
        a.print();
    }

}