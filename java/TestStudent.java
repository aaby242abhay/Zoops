public class TestStudent {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        // s1.name = "John";
        // s1.id = 101;
        s1.insertData(10, "John");
        s2.insertData(9, "Doe");
        System.out.println(s1.id + " " + s1.name);
        System.out.println(s2.id + " " + s2.name);
    }
}

class Student{
    int id;
    String name;
    void insertData(int i, String str){
        id =  i;
        name = str;
    }
}