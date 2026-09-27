package ParkingSystem;

import java.util.*;
import java.time.Duration;
import java.time.LocalDateTime;

/*
    Step 1: Create required  enums




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
    public abstract void display()
    {

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


}
public class Program997 

{
  public static void main(String[] args) {
    
  }  
}



