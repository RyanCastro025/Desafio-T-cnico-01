using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prova_Andery_10_Potos
{
    class Program
    {
        static void Main(string[] args)
        {
            String nome = "Mário";
            int quantVizu = 50000;
            int quantSeguidor = 90000;
            int quantSequindo = 500;
            int idade = 25;
            int senha = 112233;
            float altura = 155;
            Double peso = 90;
            string email = "mario@gmail.com";
            //bool certo;


  
                Console.WriteLine("entre com seu Email");
                string emailentrada = Console.ReadLine();
                Console.WriteLine("Entre com sua senha");
                int senhaentrada = int.Parse(Console.ReadLine());
                Console.WriteLine("");

            if (emailentrada == email  &&  senhaentrada == senha) 
            {
                Console.WriteLine("                                                     Mario_Gamer087 ");      
                Console.Write("                       Seguidores:" + quantSeguidor);
                Console.Write("              Seguindo:" + quantVizu);
                Console.Write("               Visualização:" + quantVizu);




               }
               else
               {
                   Console.WriteLine("Você digitou o email errado");           
               }





            Console.ReadKey();
        }
       
    }
}
