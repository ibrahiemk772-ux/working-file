class outerclass{
    int a = 10;
      class innerclass1{
        public int myinnermethod(){
            return a;
        }
    }
}
class innerclass{
    public static void main(String args[]){
        outerclass obj = new outerclass();
        outerclass.innerclass1 pbj1 = obj.new innerclass1();
        System.out.println("value of a is " + obj.a);
        System.out.println("value of a is " + pbj1.myinnermethod());
    }
}
