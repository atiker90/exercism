using System;

class RemoteControlCar
{
    private int speed;
    private int battery = 100;
    private int batteryDrain;
    private int drivenDistance;
    
    public RemoteControlCar(int speed, int batteryDrain){
        this.speed = speed;
        this.batteryDrain = batteryDrain;        
    }

    public bool BatteryDrained()
    {
        return this.battery < this.batteryDrain;
    }

    public int DistanceDriven()
    {
        return drivenDistance;
    }

    public void Drive()
    {
        if(BatteryDrained() != true){
            this.drivenDistance += this.speed;
            this.battery -= this.batteryDrain;
            }
    }

    public static RemoteControlCar Nitro()
    {
        return new RemoteControlCar(50, 4);
    }
}

class RaceTrack
{
    private int distance;
    public RaceTrack(int distance){
        this.distance = distance;     
    }

    public bool TryFinishTrack(RemoteControlCar car)
    {
        while(car.BatteryDrained() != true){
            car.Drive();
        }
        return car.DistanceDriven() >= this.distance;
    }
}
