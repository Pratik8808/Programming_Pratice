package ParkingSystem;
//  Complete this code 
import java.util.*;

import javax.management.RuntimeErrorException;

import java.time.Duration;
import java.time.LocalDateTime;

/*
       Step 1: create Required enums
    Step 2:Vechile Hierarchy creation
    Step 3:VechileFactory Creation(Factory Pattern)
    Step 4:ParkingSpot Hirrarchy
    Step 5:ParkingObserver Class
    Step 6:Parking Floor Class
    Step 7:ParkingDisplay Board(Observer Pattern)
    Step 8:ParkingStratergy Class(Stratergy class)
    Step 9:PriceingStrategy Class(Stratergy class)
    Step 10:PaymentStrategy Class
    Step 11:Parking Ticket Class
    Step 12:Entry Gate Class
    Step 13:Exit Gate Class
    Step 14:ParkingLot Class(Singleton Pattern)
    Step 15:Main Class(Controller)


*/



////////////////////////////
/// Step 1: Create Enums
/// it isuse to create fixed Consts which are required 
/// throughout the project
//////////////////////////////
/// 
// Represent the different types of  vehicle
enum vehicleType
{
    BIKE,
    Car,
    TRUCK
}
// Represent Different types of Parking Spots
enum SpotType
{
    BIKE,
    Car,
    TRUCK
}
// Represent the current state of parking ticket
enum TicketStatus
{
    ACTIVE,
    INACTIVE
}



////////////////////////////
/// Step 2: Create Vehicle class hiearachy
/// it is used to create mutiple types of class which r 
/// respresent the types of vehicles
///concepts:Abstraction ,Inheritance, Polymorphism , Encapusulation 
/// 
//////////////////////////////

//Class Which Reprsents a gernic vehicle Types

abstract class Vehicle
{
    // Abstracted (Hidden) Characteristics of class
    private String vehicleNumber;
    private vehicleType vehicleType;

    public Vehicle(String VehicleNumber , vehicleType VehicleType)
    {
        this.vehicleNumber=VehicleNumber;
        this.vehicleType=vehicleType;
    }


    //Concrete Getter Method
    public vehicleType getVehicleType()
    {
        return this.vehicleType;
    }

    //Concrete Getter Method
    public String GetVehicleNumber()
    {
        return this.vehicleNumber;
    }
    //Every Concrete class will provide it own Definiation
    public abstract void display();
   
}


class Bike extends Vehicle
{
    public Bike(String VehicleNumber)
    {
        super(VehicleNumber, vehicleType.BIKE);
    }
    @Override
    public void display()
    {
        System.out.println("Bike :"+GetVehicleNumber());
    }
}


class Car extends Vehicle
{
    public Car(String VehicleNumber)
    {  
        //Call Vehicle class Constructor
        super(VehicleNumber, vehicleType.Car);
    }
    @Override
    public void display()
    {
        System.out.println("Bike :"+GetVehicleNumber());
    }

}


class truck extends Vehicle
{
    public truck (String VehicleNumber)
    {  
        //Call Vehicle class Constructor
        super(VehicleNumber, vehicleType.TRUCK);
    }
    @Override
    public void display()
    {
        System.out.println("Bike :"+GetVehicleNumber());
    }
    
}


// Step 3: Create Vehicle Factory class
/// it is used to centralised the creation of vehicle Objects
///concepts:Factory Design Pattern
/// 
//////////////////////////////

class VehicleFactory{

    //Create and return the desired class object 
    public static  Vehicle creatVehicle(vehicleType type, String number)
    {
        switch(type)
        {
          case BIKE :
            return new Bike(number);

            case Car:
                return new Car(number);


            case TRUCK:
                return new truck(number);

                default:
                    throw new IllegalArgumentException("Invalid Vehicle Type");
        }
    }
}


/// Step 4: Create ParkingSpot Hiearchy 
/// it is used to Create Hiearacy of Parking Spots
///concepts:Encapsulation ,Abstraction ,Inheritance ,polymorphism
/// 
//////////////////////////////


//Composition
abstract class ParkingSpot
{
    // Unquie Number for Parking sport
    private int spotNumber;

    //Type of Parking Spot
    private SpotType spotType;

    //Indicates whether spot is currently occupied or not 
    private boolean occupied;

    //Store information about the vehicle 
    private Vehicle vehicle;

    public ParkingSpot(int spotNumber,SpotType spottype)
    {
        this.spotNumber=spotNumber;
        this.spotType=spottype;

        // Initalized with default Value

        this.occupied=false;
        this.vehicle=null;

    }

    public int getSpot()
    {
        return this.spotNumber;
    }
    public SpotType getSpotType()
    {
        return this.spotType;
    }

    public boolean isOccupied()
    {
        return this.occupied;
    }

    public Vehicle getVehicle()
    {
        return this.vehicle;
    }
    // It is used to park the vehicle
    public void parkedVehicle(Vehicle vehicle)
    {
        if(this.occupied==true)
        {
            throw new RuntimeException("Parking Spot is already OCcupied ");
        }
        else
        {
            this.vehicle=vehicle;
            this.occupied=true;
        }
    }
    public Vehicle removeVehicle()
    {
        if(this.occupied==true)
        {
            Vehicle temp=vehicle;
            this.vehicle=null;
            this.occupied=false;

            return temp;

        }
        else
        {
          throw new RuntimeException("ParkingSpot  is already Empty");
        }

    }
 // This method Decideds whether we can park it in the sport or not
    public abstract boolean canFitVehicle(Vehicle vehicle);

    public void display()
    {
        System.out.println("Spot Number :"+spotNumber+"["+spotType+"]");

        if(this.occupied==true)
        {
            System.out.println("Occupied by :"+vehicle.GetVehicleNumber());
        }
        else
        {
            System.out.println("Spot is avaiable");
        }
    }
    

}// End of the parkingSpot class


class BikeSpot extends ParkingSpot
{
    public BikeSpot(int spotNumber)
    {
        super(spotNumber, SpotType.BIKE);
    }
    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType()==vehicleType.BIKE;
    }
}


class CarSpot extends ParkingSpot
{
    public CarSpot(int spotNumber)
    {
        super(spotNumber, SpotType.Car);
    }
    @Override
    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType()==vehicleType.Car;
    }

}

class TruckSpot extends ParkingSpot
{
    public TruckSpot(int spotNumber)
    {
        super(spotNumber, SpotType.TRUCK);
    }
    @Override
    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType()==vehicleType.TRUCK;
    }

}

//////////////////////////////////////////////////
/// Step 5: Parking Observer class 
/// it is used to automatically update display board when 
/// the parking availablity changes
/// Concept :Observer
//////////////////////////////

interface ParkingObserver
{
    void Update();
}


//////////////////////////////////////////////////
/// Step 6:Parking Floor Class
/// it is used to Manage Parking floor
/// the parking availablity changes
/// Concept :Composition ArrayList,Object Managnement
//////////////////////////////

class ParkingFloor
{   //Unique fllor number
    private int floorNumber;

    //collection of all Parking Spots
    private List<ParkingSpot>parkingSpots;

    //Collection of the Observes Registered for the floor
    private List<ParkingObserver> observers;
    
    public ParkingFloor (int floorNumber)
    {
        this.floorNumber=floorNumber;
        this.parkingSpots=new ArrayList<>();
        this.observers=new ArrayList<>();

    }
    public int getFloornumber()
    {
        return this.floorNumber;
    }
    public void addParkingSpot(ParkingSpot spot)
    {
        parkingSpots.add(spot);
    }
    public void AddObserver(ParkingObserver observer)
    {
        observers.add(observer);
    }
    private void notifyObservers()
    {
        for(ParkingObserver oberserve:observers)
        {
            oberserve.Update();
        }
    }
    public ParkingSpot findAvailableSpot()
    {
        return null;
    }
    //Method is going to serach parking spot for specific type of vehicle
    public ParkingSpot findAvailbleParkingSpot(Vehicle vehicle)
    {
        
        for(ParkingSpot spot:parkingSpots)
        {
            if(!spot.isOccupied() && spot.canFitVehicle(vehicle))
            {
                return spot;
            }
        }

        return null;
    }
    // called when new vehicle get parked
    public void Occupyspot(ParkingSpot spot , Vehicle vehicle)
    {
        //Allocate spot for the vehicle
        spot.parkedVehicle(vehicle);

        //Notify all obersevers about the availablity of spot
        notifyObservers();
    }
    public void releaseSpot(ParkingSpot spot)
    {
        // Release the already Alloted Spot
        spot.removeVehicle();

          //Notify all obersevers about the availablity of spot
        notifyObservers();
    }
    public int getAvailableCount(SpotType type)
    {
        int count=0;
        for(ParkingSpot spot :parkingSpots)
        {
            if(spot.getSpotType()==type && !spot.isOccupied())
            {
                count++;
            }


        }
        return count;
    }
    // Display all parking Spots on specific  floor number
    public void displayFloor()
    {
        System.out.println();

        System.out.println("Floor :"+floorNumber);

        for(ParkingSpot spot:parkingSpots)
        {
            spot.display(); 
        }
    }
}


//////////////////////////////////////////////////
/// Step 7: Parking Display Board 
// IT is used to create a class which display the parking
/// status
/// Subject->ParkingFloor
/// Observer->ParkingDislayboard
/// Note: Nay Overver going to oberserve the subject 
/// There will be muiltiple overserve for one Subject 
/// Concept :Observer Design Pattern
//////////////////////////////
/// 


class ParkingDisplayBoard implements ParkingObserver
{
    // Floor whose availability is display by this board 
    private ParkingFloor floor;
    public ParkingDisplayBoard(ParkingFloor floor)
    {
        this.floor=floor;
    }
    // Automatically Called whenever floor avaliablity Changes 
    @Override
    public void Update()
    {
        System.out.println();
        System.out.println("----------------Display Board--------------------");

            System.out.println("Floor "+floor.getFloornumber());
            System.out.println("Available Bike spot :"+floor.getAvailableCount(SpotType.BIKE));

            System.out.println("Available Bike spot :"+floor.getAvailableCount(SpotType.Car));
            
            System.out.println("Available Bike spot :"+floor.getAvailableCount(SpotType.TRUCK));

            



        System.out.println("--------------------------------------------------");
        System.out.println();
    }

}
// we can create new oberserver for same Subject 
/*
class ParkingWebsite  implements ParkingObserver
{

    public void update()
    {

    }

}

*/

//////////////////////////////////////////////////
/// Step 8: Create Parking Straegy Class  
// it is used to create a class Parking Strategy which is responsible to decide parking spot selection
/// Responsible  to decide the parking spot selection
///
/// Concpts:Strategy Design Pattern
//////////////////////////////
/// 


// Defines a common Concepts for Parking spot selection algorithm
interface ParkingStratergy
{
    ParkingSpot findSpot(List<ParkingFloor> floors,Vehicle vehicle);
   
}

// selectss the first available parking spot
class  FirstAvaiableParkingStrategy implements ParkingStratergy
{
    @Override
    public  ParkingSpot findSpot(List<ParkingFloor> floors,Vehicle vehicle)
    {
        // ITerate over available floor

        for(ParkingFloor floor:floors)
        {
            ParkingSpot spot=floor.findAvailbleParkingSpot(vehicle);

            if(spot!=null)
            {
                return spot;
            }
        }

        return null;

        

    }
}

/*
class NearestAvaiableParkingStregety implemets parkingstragey
{

}

*/


//////////////////////////////////////////////////
/// Step 9: Create PricingStragey Class 
//  It is used to create a class PricingStragtegy
/// It keeps the pricing algorithm independ of exit logic
///
/// //Concepts:Stragey Design Patterm
/// 
/// 
/// Concpts:Strategy Design Pattern
//////////////////////////////


interface PricingStragtegy
{
    double calculatePrice(Vehicle vehicle, long hour);
}

class NormalPricingStrategy implements PricingStragtegy
{
    @Override
    public double calculatePrice(Vehicle vehicle,long hours)
    {
        if(hours<=0)
        {
            hours=1;
        }
        switch(vehicle.getVehicleType())
        {
            case BIKE:
                return hours *20;
            case Car:
                return hours *50;
            case TRUCK:
                return hours *100;

            default:
                return 0;
        }
    }
}


class WeekendPricing implements PricingStragtegy
{
    @Override
    public double calculatePrice(Vehicle vehicle,long hours)
    {
        if(hours<=0)
        {
            hours=1;
        }
        switch(vehicle.getVehicleType())
        {
            case BIKE:
                return hours *40;
            case Car:
                return hours *100;
            case TRUCK:
                return hours *100;

            default:
                return 0;
        }
    }
}




//////////////////////////////////////////////////
/// Step 10: Create PaymentStragety
//  It is used to create a class PaymentStrategy
/// 
/// It suuports differenct types of payment methods
///
/// //Concepts:Stragey Design Patterm
/// 
/// 
/// Concpts:Strategy Design Pattern
//////////////////////////////


// common contract for all payment methods
interface PaymentStrategy
{
    void pay(double amount);

}


class UPIPayments implements PaymentStrategy
{
    @Override
    public void pay(double amount)
    {
        System.out.println("UPI payments Sucessful :Rs :"+amount);
    }
}


class CardPayment implements PaymentStrategy
{
    @Override
    public void pay(double amount)
    {
        System.out.println("Cardpayments Sucessful :Rs :"+amount);
    }
}

class cashPayment implements PaymentStrategy
{
    @Override
    public void pay(double amount)
    {
        System.out.println("Cash payment Sucessfully Sucessful :Rs :"+amount);
    }
}




//////////////////////////////////////////////////
/// Step 11: Create ParkingTicket Class
//  
/// It is used to respresnt one complete parking  transactions
/// 
///
/// 
/// 
//
/// 
//////////////////////////////


class ParkingTicket
{
    private static int counter=1000;

    // Ticket Number for unique ticket
    private int ticketNumber;

    // Floor on which the vehicle is Parked
    private Vehicle vehicle;
// Acutal  on  which vehicle is parked
    private ParkingFloor floor;

    // Acutal spot on which vehicle is parked
    private ParkingSpot spot;

    // Time at which vehicle is arrives
    private LocalDateTime entryTime;

    // Time at which vehicle exited from parking floor
    private LocalDateTime exitTime;

    //It maintain the status of the ticket
    private TicketStatus status;

    public ParkingTicket(Vehicle vehicle,ParkingFloor floor, ParkingSpot spot)
    {
        this.ticketNumber=++counter;
        this.vehicle=vehicle;
        this.floor=floor;
        this.spot=spot;
        entryTime=LocalDateTime.now();
        this.status=TicketStatus.ACTIVE;
    }


    // getter method for ticket number
    public int getTicketNumber()
    {
        return this.ticketNumber;
    }

//vehiclemethod getter
      public Vehicle getVehicle()
    {
        return this.vehicle;
    }


 // Getter method for floor
      public ParkingFloor getfloor()
    {
        return this.floor;
    }

    // Getter method for spot
       public ParkingSpot getSpot()
    {
        return this.spot;
    }


     // Getter EntryTime
       public LocalDateTime getEntryTime()
    {
        return this.entryTime;
    }



     // Getter Exittime
       public LocalDateTime exitTime()
    {
        return this.exitTime;
    }
   //  Constructor
    public TicketStatus getStatus()
    {
      return this.status ;  
    }

    public void closeTicket()
    {
        this.exitTime=LocalDateTime.now();
        this.status= TicketStatus.INACTIVE;
    }
// Calcaulate the total numbers of 
    public long calculateHours()
    {
        LocalDateTime endDateTime;

        if(exitTime==null)
        {
            endDateTime=LocalDateTime.now();
        }
        else
        {
            endDateTime=exitTime;
        }

        //Calculate the Acutal time
        long minutes=Duration.between(entryTime,endDateTime).toMinutes();

        // Converts minutes to hours 
        long hours=minutes/60;

        if(minutes%60 !=0)
        {
            hours++;
        }

        if(hours==0)
        {
            hours=1;
        }
        
     return hours;


    }
    public void DisplayTicket()
    {
       System.out.println();

        System.out.println("---------------------------------");
        System.out.println("---------- Parking Ticket -------");
        System.out.println("---------------------------------");

        System.out.println("Ticket Number : "+this.ticketNumber);

        System.out.println("Vechile Number : "+this.vehicle.GetVehicleNumber());
        
        System.out.println("Vechile Type : "+this.vehicle.getVehicleType());

        System.out.println("Floor Number : "+this.floor.getFloornumber());

        System.out.println("Spot Number : "+this.spot.getSpot());

        System.out.println("Entry Time : "+this.entryTime);

        System.out.println("Ticket Status : "+this.status);

        System.out.println("---------------------------------");

        System.out.println();
    }




    
}

////////////////////////////
/// Step 12: Create EntryGate  classs
/// It is used to handle entry of a vehicle and its ticket generation
/// 
//////////////////////////////

class EntryGate
{
    private int gateNumber;
    
    public EntryGate(int gateNumber)
    {
        this.gateNumber=gateNumber;

    }

    public int getGateNumber()
    {
        return this.gateNumber;
    }
    // it generate the new parking ticket where  vehicle enters1
    public ParkingTicket generateTicket(Vehicle vehicle, ParkingFloor parkingfloor,ParkingSpot spot)
    {
        System.out.println("Vehicle Entrying from gate :"+this.gateNumber);
        // New Parking ticket gets generated for the vehicle
        return  new ParkingTicket(vehicle,parkingfloor,spot);
    }
}

////////////////////////////
/// Step 13: Create ExitGate   classs
/// It is used to handle entry of a vehicle and its ticket generation
/// it is used to handle billing and payment during the vehicle exit
//////////////////////////////


class ExitGate
{
    private int gateNumber ;

    public ExitGate(int GateNumber)
    {
        this.gateNumber=gateNumber;
    }
    
    public int getGateNumber()
    {
        return this.getGateNumber();
    }

    public void processExit(ParkingTicket ticket,PricingStragtegy pricingStragtegy,PaymentStrategy paymentStrategy)
    {
        //Step 1:Close the ticket and record the exit time 
        ticket.closeTicket();

        // Step 2: Calculate the parking duration 
        long hours=ticket.calculateHours();

        //step 3: Calculate the parking charges 

        double amount =pricingStragtegy.calculatePrice(ticket.getVehicle(), hours);

        System.out.println();

        System.out.println("Vehicle Exiting from gate  :"+getGateNumber());

        System.out.println("Parking Duration "+hours);

        System.out.println("Parking charges "+amount);

        paymentStrategy.pay(amount);

        // step 4: the payment using  selected payemnt stratgey
    }

////////////////////////////
/// Step 14: Create ExitGate   classs
/// It is used to handle entry of a vehicle and its ticket generation
/// it is used to handle billing and payment during the vehicle exit
//////////////////////////////  
}

class ParkingLot
{

    private static ParkingLot instance ;
    

    //Store the Parking lot name

    private String parkingLotName;

    //Store  all floor  of the parking lot

    private List<ParkingFloor> floors;

    //Maps the ticket number with active parking slot 

    private Map <Integer ,ParkingTicket> activeTickets;

    //Maps vehicle Number with active tickets
    //Used  for seraching  vehicle
    //It prevents Duplicate parking
    private Map<String, ParkingTicket> vehicleTicketMap;

    //Algorithm  used for selection parking spot 

    private ParkingStratergy parkingStrategy;

    //Algorithm used for calculating parking charges 
    private PricingStragtegy pricingStragtegy;

    //private constructor for  Singleton class 

    private ParkingLot()
    {
        floors=new ArrayList<>();
        activeTickets=new HashMap<>();
        vehicleTicketMap=new HashMap<>();

        //Default parking System

        parkingStrategy =new FirstAvaiableParkingStrategy();


        pricingStragtegy=new NormalPricingStrategy();
    }

    // Use to set name for complete parking lot
    public void setParkingLotName(String parkingLotName)
    {
        this.parkingLotName=parkingLotName;
    }

    //Used to add new  Parking Floor 
    public void addFloor(ParkingFloor floor)
    {   
        //Insert in Arraylist
        floors.add(floor);
    }
    // this method  returns list of all floor 
    public List<ParkingFloor>getfloor()
    {
        return floors;
    }
    // This method can be used to chagne the default parking stragtegy
     public void setParkingStragegy(ParkingStratergy strategy)
     {
        this.parkingStrategy=strategy;
     }

     public void  setPricingStragey(PricingStragtegy stragey)
     {
        this.pricingStragtegy=stragey;

    }

/*
    Algorithm for Parking the vehicle 

    Check Dupicate Vehicle
        |
    Find avaiable Spot
        |
    Indenttiy floor for vehcile
        |
    Occupy Spot for vechile
        |
    Generate  ticket for Vehcile
        |
    Store the finale ticket 




*/

    public ParkingTicket parkVehicle(Vehicle vehicle, EntryGate entryGate)
    {

        // Step 1:Prevent the same vehcile  for  being parked multiple times

        if(vehicleTicketMap.containsKey(vehicle.GetVehicleNumber()))
        {
            System.out.println("This Vehicle is Already Parked through");
            throw new RuntimeException("This Vehicle is already Parked");
        }

        ParkingSpot spot=parkingStrategy.findSpot(floors, vehicle);

        if(spot==null)
        {

            throw new RuntimeException("Parking is full");
        }

        // Step 3: Indentity the exact  floor for the  vehicle 
        ParkingFloor  selectedFloor=null;

        for(ParkingFloor floor:floors)
        {
            ParkingSpot temp=floor.findAvailableSpot();
            if(temp==spot)
            {
                selectedFloor=floor;
            }
            break;
        }
        

        if(selectedFloor==null)
        {
            throw new  RuntimeException("UNable to indentify the floor");
        }

        // Selected 4 :Occupy the spot
        selectedFloor.Occupyspot(spot, vehicle);

        //Step 5 :Generate the Parking Ticket from entry page

        ParkingTicket ticket= entryGate.generateTicket(vehicle, selectedFloor, spot);


        //Step 6:Store the ticket using ticket Number;

        activeTickets.put(ticket.getTicketNumber(),ticket);

        //Step 7 : Store the final ticket using vehicle number

        vehicleTicketMap.put(vehicle.GetVehicleNumber(),ticket);

        return ticket;
    }

        /*
        FInd ticket
             |
            Process Exit
            |
            Calculate Charges
            |
            Payment 
            |
            Release Spot
            |
        
        
        */

        public void removeVehicle(int ticketNumber, ExitGate exitgate,PaymentStrategy paymentStrategy)
        { 
            //Step 1:Find the active ticket using ticket Number
            ParkingStratergy ticket =activeTickets.get(PaymentStrategy);

            if(ticket==null)
            {
                throw new  RuntimeException("There is not such ticket ");
            }

            // step 2 :Perform billing and payment 

            ExitGate.processExit(ticket,pricingStragtegy,paymentStrategy);

            // Step 3: Release the occupied Spot

            ticket.getfloor().releaseSpot(ticket.getSpot());

            // Step 4:Remove Ticket
            activeTickets.remove(ticketNumber);

            // Step 5:Remove vehicle from active Vehicle

            System.out.println("Vehicle  removed Sucessfully");
        }
        // Ser the specified method

        public ParkingTicket SearchVechicle(String VehicleNumber)
        {
            return vehicleTicketMap.get(vehicleNumber);
        }

        // Display complete parking lot information
        public void displayParkingLot()
        {
            System.out.println();
            System.out.println("------------------------------------------");
            System.out.println("------------Parking lot Details-------------");
            System.out.println("_---------------------------------------------");

            for()

        }
    

}






public class Program1011

{
  public static void main(String[] args) {


    
  }  
}





