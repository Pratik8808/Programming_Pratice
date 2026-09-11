class ParkingTicket
{
    private int ticketNumber;
    private String vehicleNumber;
    private int floorNumber;
    private int spotNumber;
    private String entryTime;
    
    public ParkingTicket(int A, String b, int c ,int d, String e)
    {
        this.ticketNumber=A;
        this.vehicleNumber=b;
        this. floorNumber=c;
        this.spotNumber=d;
        this.entryTime=e;
    }
    public void display()
    {
        System.out.println("Ticket Number :"+this.ticketNumber);
        System.out.println("Vehicle Number :"+this.vehicleNumber);
        System.out.println("floor Number :"+this.floorNumber);
        System.out.println("Spot Number :"+this.spotNumber);
        System.out.println("EntryTime :"+this.entryTime);

    }
}

class program985
{
    public static void main(String[] A) {
        ParkingTicket p1 =new ParkingTicket(11, "Mh12 VL7172", 3, 89, "9:30AM");
        ParkingTicket p2 =new ParkingTicket(12, "Mh14 VL7020", 4, 32, "9:50AM");

        p1.display();

        p2.display();

    }
}