class ParkingLot
{
    private static ParkingLot instance;

    private ParkingLot()
    {
        System.out.println("Parking lot object gets created");
    }

    public static ParkingLot getInstance()
    {
        if(instance==null)
        {
            instance=new ParkingLot();
        }
        return instance;
    }

}

class program974
{
    public static void main()
    {
       ParkingLot pobj=ParkingLot.getInstance();

       ParkingLot pobj2=ParkingLot.getInstance();

       ParkingLot pobj3=ParkingLot.getInstance();

    }
}
