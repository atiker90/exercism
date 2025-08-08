using System;

public static class PhoneNumber
{
    public static (bool IsNewYork, bool IsFake, string LocalNumber) Analyze(string phoneNumber)
    {
        string[] pieces = phoneNumber.Split("-");
        return (pieces[0] == "212" ? true : false, pieces[1] == "555" ? true : false, pieces[2]);
    }

    public static bool IsFake((bool IsNewYork, bool IsFake, string LocalNumber) phoneNumberInfo)
    {
        return phoneNumberInfo.Item2 ? true : false;
    }
}