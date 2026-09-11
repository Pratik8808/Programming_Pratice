
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
    private List<ParkingObserver> observers=new ArrayList<>();

    public ParkingFloor (int availableSpots)
    {
        this.availableSpots=availableSpots;
    }

    public void AddObserver(ParkingObserver observer)
    {
        observers.add(observer);

    }

    public void remove(ParkingObserver observer)
    {
        observers.add(observer);
        
        
    }

    public void VehicleParked()
    {
        availableSpots--;
        notifyObservers();
    }

    public void vehicleExited()
    {
        availableSpots++;

        notifyObservers();
    }

    private void notifyObservers()
    {
        for(ParkingObserver observer:observers)
        {
            observer.update(availableSpots);
        }
    }


}





public class Program995 
{
    public static void main(String[] args) {
     ParkingFloor floor=new ParkingFloor(5);
   
    }
DisplayBoard board=new DisplayBoard();
MobileApplication app =new MobileApplication();

floor.AddObserver(board);
floor.AddObserver(app);

floor.VehicleParked();

System.out.println("-----------------");
floor.vehicleExited();
    

    
    
}

