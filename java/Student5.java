public class Student5 {
    int id;
    String name;
    int age;
    Student5(int i, String n){
        id = i;
        name = n;
    }
    Student5(int i, String n, int a){
        id = i;
        name = n;
        age = a;
    }
    Student5(Student5 s){
        id = s.id;
        name = s.name;
        age = s.age;

    }
    void display(){
        System.out.println(id + " " + name + " " + age);
    }
    public static void main(String[] args) {
        Student5 s1 = new Student5(101, "John");
        Student5 s2 = new Student5(102, "Doe", 25);
        Student5 s3 = new Student5(s1);
        s1.display();
        s2.display();
        s3.display();
    }
}

