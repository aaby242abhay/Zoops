class B{
    B get(){
        return this;
    }   
}

class A extends B{
    @Override
    A get(){                    //changing the return type of the get() method in the parent class to co-varient type
        return this;
    }
    void msg(){
        System.out.println("Welcome to covariant return type");
    }
    public static void main(String[] args) {
        new A().get().msg();
    }
}