using System;

class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    public static int[] LastWeek()
    {
        return new int[] {0,2,5,3,7,8,4};
    }

    public int Today()
    {
        return birdsPerDay[6];
    }

    public void IncrementTodaysCount()
    {
        birdsPerDay[6]++;
    }

    public bool HasDayWithoutBirds()
    {
        foreach (int bird in birdsPerDay){
            if (bird == 0) {
                return true;
            }
        }
        return false;
    }

    public int CountForFirstDays(int numberOfDays)
    {
        int sum =0;
        for (int i=0; i<numberOfDays; i++){
            sum+=birdsPerDay[i];
        }
        return sum;
    }

    public int BusyDays()
    {
        int sum=0;
        foreach(int bird in birdsPerDay){
            if(bird >=5){
                sum+=1;
            }
        }
        return sum;
    }
}
