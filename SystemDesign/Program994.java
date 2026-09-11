
// Design pattern -Observer
import java.util.*;

interface ParkingObserver
{
    void update(int availableSpot);
  
}

class DisplayBoard implements ParkingObserver
{
    public void update(int availableSpots)
    {
        System.out.println("Display Board :"+availableSpots);
    }
}

class MobileApplication implements ParkingObserver
{
    public void update(int availableSpots)
    {
        System.out.println("Mobile Application :"+availableSpots);
    }
}


class ParkingFloor
{
    private int availableSpots;

    public ParkingFloor (int availableSpots)
    {
        this.availableSpots=availableSpots;
    }
}





public class Program994 
{
    public static void main(String[] args) {
     ParkingFloor floor=new ParkingFloor(5);
   
    }
    

    
    
}

