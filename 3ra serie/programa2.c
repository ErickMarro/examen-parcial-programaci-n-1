using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bienvenido al programa de generación de correo electrónico.");

            // Solicitar nombre y apellido del usuario
            Console.Write("Por favor, ingresa tu nombre: ");
            string nombre = Console.ReadLine();

            Console.Write("Por favor, ingresa tu apellido: ");
            string apellido = Console.ReadLine();

            // Solicitar el dominio de correo electrónico
            Console.Write("Por favor, ingresa el dominio de tu correo electrónico (por ejemplo, Gmail): ");
            string dominio = Console.ReadLine();

            // Generar correo electrónico
            string correo = GenerarCorreo(nombre, apellido, dominio);

            // Mostrar correo generado
            Console.WriteLine($"Tu correo electrónico generado es: {correo}");

            Console.ReadLine(); // Para evitar que la consola se cierre inmediatamente
        }

        static string GenerarCorreo(string nombre, string apellido, string dominio)
        {
            // Tomar las primeras 3 letras del nombre y apellido
            string nombreCorto = nombre.Substring(0, Math.Min(nombre.Length, 3));
            string apellidoCorto = apellido.Substring(0, Math.Min(apellido.Length, 3));

            // Concatenar las partes para formar el correo electrónico
            string correo = $"{nombreCorto}{apellidoCorto}@{dominio}.com";

            return correo;
        }
    }
}
