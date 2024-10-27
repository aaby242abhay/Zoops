class DB{
    private DB(){
        System.out.println("DB Constructor");
    }
    public static DB getConnection(){
        return new DB();
    }
    static void info(){
        System.out.println("DB Info");
    }
}
public class Test {
    @SuppressWarnings("unused")
    public static void main(String[] args) {
        DB db = DB.getConnection();
        DB.info();
    }
    
}
