interface base{
  public  void  display();
          
    
}


 class demo implements base{
    public void display()
    {
        System.out.println("this is demo class");
    }
}
class interface1
{
    public static void main(String args[])
    {
      demo di = new demo();
      di.display();
    }  
}
