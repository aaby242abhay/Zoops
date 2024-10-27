class School {
    int students = 1000;
    String name = "First Year";
    School(int n, String str){

        // this();     //calling the default constructor from another constructor should be the first statement in the execution code
        
        System.out.println("CONSTRUCTOR-----> This should be called while loading the class");

        this.students = n;
        this.name = str;

        this.display();
    }
    School(){
        this(9999, "Abhay");
        System.out.println("DEFAULT CONSTRUCTOR-----> This should be called when an object is created");
        
    }
    static{
        System.out.println("STATIC BLOCK------> This should be called before the main method and EVERY other method" );
    }
    void display(){
        System.out.println(students + " " + name);
    }
    @SuppressWarnings("unused")
    public static void main(String[] args) {
        School c = new School();
        School d = new School(3000, "Third Year");
        System.out.println("MAIN_METHOD---->" + c.students + " " + c.name);
    }
    
}
