using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Bienvenido a la aplicación de compra.");

        // Ingresar precios de los productos
        int precio1 = ObtenerPrecio("Producto 1");
        int precio2 = ObtenerPrecio("Producto 2");
        int precio3 = ObtenerPrecio("Producto 3");

        // Calcular el total de los productos
        int total = precio1 + precio2 + precio3;

        // Aplicar descuento si el total excede de 500 céntimos
        int totalConDescuento = total > 500 ? (int)(total * 0.9) : total;

        // Mostrar el total con o sin descuento
        Console.WriteLine($"El total a pagar es: {totalConDescuento / 100}.{totalConDescuento % 100:00} euros.");

        Console.WriteLine("Gracias por utilizar nuestra aplicación. ¡Hasta luego!");
    }

    static int ObtenerPrecio(string nombreProducto)
    {
        Console.Write($"Ingrese el precio de {nombreProducto} en céntimos: ");
        int precio;
        while (!int.TryParse(Console.ReadLine(), out precio) || precio < 0)
        {
            Console.WriteLine("Precio inválido. Por favor, ingrese un valor válido.");
            Console.Write($"Ingrese el precio de {nombreProducto} en céntimos: ");
        }
        return precio;
    }
}
