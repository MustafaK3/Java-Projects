public class TeddyBear{
 //private fields
   private String name;
   private int age;
   private double weight;
   
   
 //public constructor
   public TeddyBear(String name, int age, double weight){
      this.name=name;
      this.age=age;
      this.weight=weight;
   }
   
   
   public String getName()
   { 
      return name;
   } // return name to calling object 
   
   public void setName()
   {
      this.name=name;
   }
   public int getage()
   {
      return age;
   
   }
   public void setAge()
   { 
      this.age=age;
   } // change the age of the calling object 
   public double getweight()
   {
      return weight;
   }
   public void setweight()
   {
      this.weight=weight;
   }
   
   
   
  
    
   
   public String toString()
   {
      String s = "I am " + name + ", I am " + age + " years old and I weight " + weight + " pounds.";
      return s;
   }
   
   // change the age of the calling object
   
   public boolean iAmOlderThanYou(TeddyBear other){
      return (age>other.getage());
   }  
}


class Driver {
   public static void main(String []args)
   {
      TeddyBear teddy = new TeddyBear("PapaBear", 12, 302.87);
      TeddyBear mamaTeddy = new TeddyBear("MamaBear" , 14, 297.9);
      TeddyBear babyTeddy = new TeddyBear("babayBear" , 6, 150.6);
      System.out.println(teddy.toString());
      System.out.println(mamaTeddy.toString());      
      System.out.println(babyTeddy.toString());
   }
   
}