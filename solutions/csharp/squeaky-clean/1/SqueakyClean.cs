using System.Text;

public static class Identifier
{
    public static string Clean(string identifier)
    {
        StringBuilder result = new StringBuilder();
        identifier = identifier.Replace("\0", "CTRL");
        bool capitalizeNext = false;
        foreach (var c in identifier)
        {
            if (c.ToString() == " ")
            {
                result.Append("_");
            }
            else if(c.ToString() == "-")
            {
                capitalizeNext = true;
                continue;
            }
            else if (c >= 'α' && c <= 'ω')
                continue;
            else if(char.IsLetter(c))
            {
                if (capitalizeNext)
                {
                    result.Append(char.ToUpper(c));
                    capitalizeNext = false;
                }
                else
                {
                        result.Append(c);
                }
            }
        }
        return result.ToString();
    }
}