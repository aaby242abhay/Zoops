class Bank{
    int roi;
    int x = 9;
    Bank(int roi){
        this.roi = roi;
    }
    void getROI(){
        System.out.println("Rate of Interest: "+roi);
    }
}
class SBI extends Bank{
    
    int x = 10;
    SBI(int roi){
        super(roi);
    }
    @Override
    void getROI(){
        // x = 10;
        System.out.println("Rate of Interest SBI: "+roi);
        System.out.println("Value of x: "+super.x);
    }
}
class ICICI extends Bank{
    ICICI(int roi){
        super(roi);
    }
    @Override
    void getROI(){
        System.out.println("Rate of Interest ICICI: "+roi);
    }
}
class AXIS extends Bank{
    AXIS(int roi){
        super(roi);
    }
    @Override
    void getROI(){
        System.out.println("Rate of Interest AXIS: "+roi);
    }
}

public class TestPoly {
    public static void main(String[] args) {
        Bank b;
        b = new SBI(5);
        b.getROI();
    }
    
}
