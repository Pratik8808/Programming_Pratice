package ParkingSystem;

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
    Step 5:Main Class(Controller)


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

    public Vehicle(String VehicleNumber , String VehicleType)
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


public class Program998

{
  public static void main(String[] args) {


    
  }  
}



