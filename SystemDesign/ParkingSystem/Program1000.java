package ParkingSystem;
// 
import java.util.*;
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

interface ParkingObserver()
{
    void Update();
}


//////////////////////////////////////////////////
/// Step 6:Parking Floor Class
/// it is used to Manage Parking fllor
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
    
    public parkingFloor (int floorNumber)
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
        return null
    }
}

public class Program1000

{
  public static void main(String[] args) {


    
  }  
}



