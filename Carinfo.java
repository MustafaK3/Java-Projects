import java.util.HashMap;
import java.util.Map;

public class Carinfo 
{
   public static void main(String[] args) {
   
      Map<String, Integer> Carinfo = new HashMap<>();
   
      Carinfo.put("Gt",86);
      Carinfo.put("Brz",85);
      Carinfo.put("Frs",84);
   
   
      System.out.println(Carinfo.get("Gt"));
      System.out.println(Carinfo.get("Brz"));
      System.out.println(Carinfo.get("Frs"));
   
      System.out.println(Carinfo.size());
   
      for(Map.Entry<String, Integer> entry :Carinfo.entrySet())
      {
      String key = entry.getKey();
      Integer Value = entry.getValue();
      System.out.println(" " + entry.getKey() + " Carinfo "+ entry.getValue());
      }
   }
}