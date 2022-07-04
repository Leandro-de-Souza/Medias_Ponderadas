using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_MEDIA_PONDERADA {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, i;
            double a, b, c, media;

            Console.Write("Quantos casos voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (i = 0; i < N; i++) {
                Console.WriteLine("Digite tres numeros: ");
                a = double.Parse(Console.ReadLine(), CI);
                b = double.Parse(Console.ReadLine(), CI);
                c = double.Parse(Console.ReadLine(), CI);

                media = (double) (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

                Console.WriteLine("MEDIA = " + media.ToString("F1", CI));

            }
        }
    }
}
