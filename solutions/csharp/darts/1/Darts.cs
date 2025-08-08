using System;

public static class Darts
{
    public static int Score(double x, double y)
    {
        double atfogo = Math.Sqrt(x*x + y*y);
        
        if(atfogo <= 1){
            return 10;
        }
        else if(atfogo > 1 && atfogo <= 5){
            return 5;
        }
        else if(atfogo > 5 && atfogo <= 10){
            return 1;
        }
        else{
            return 0;
        }
    }
}
