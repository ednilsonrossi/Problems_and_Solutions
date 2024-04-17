// Giovana Trevizan Barbosa
// 28/03/2024
using System;
public class SquareAndCube
{
    public static void Main()
    {
        Console.Write("Digite um número: ");
        try
        {
            double number = double.Parse(Console.ReadLine());
            double squaredNumber = GetSquareOfNumber(number);
            double cubedNumber = GetCubeOfNumber(number);
            Console.WriteLine($"O quadrado de {number} é {squaredNumber} e seu cubo é {cubedNumber}");
        }
        catch (IOException e)
        {
            Console.WriteLine($"Erro: {e.Message}");
        }
        catch (FormatException e)
        {
            Console.WriteLine("Erro: formato não suportado");
        }
    }

    public static double GetSquareOfNumber(double number)
    {
        return number * number;
    }

    public static double GetCubeOfNumber(double number)
    {
        return Math.Pow(number, 3);
    }
    
}