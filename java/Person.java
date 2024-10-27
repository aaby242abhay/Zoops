class Address{
    String city;
    public Address(String city){
        this.city = city;
    }
}
public class Person implements Cloneable{
    String name;
    Address address;    //reference to another object
    public Person(String name, Address address){
        this.name = name;
        this.address = address;
    }
    protected Object clone() throws CloneNotSupportedException{
        return super.clone();       //creates a shallow copy of the object 
    }
    public void display(){
        System.out.println(name + " " + address.city);
    }
    public static void main(String[] args) throws CloneNotSupportedException{
        Address address = new Address("New York");
        Person p1 = new Person("John", address);
        Person p2 = (Person)p1.clone();
        p1.display();
        p2.display();
        p1.address.city = "California";
        p1.name = "Doe";
        p1.display();
        p2.display();
    }
}

