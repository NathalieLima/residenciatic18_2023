/* Desenvolva um programa que receba a matrícula (apenas números) e 3 notas de um grupo de alunos. A cada aluno cadastrado o programa deve perguntar 
se deseja prosseguir com outro. Em seguida, calcule a média de cada aluno e imprima os dados da seguinte forma: */

#include <iostream>
#include <iomanip>

using namespace std;

int main (void) 
{
   unsigned int matriculas[100] = {};
   double notas[100][4] = {{}, {}, {}, {}};
   unsigned int num_alunos = 0;
   char flag;

   do 
   {
      double media = 0;

      cout << "Matrícula (apenas números): ";
      cin >> matriculas[num_alunos];
      
      for (int j = 0; j < 3; j++)
      {
         cout << "Digite a nota " << j + 1 << " do aluno: ";
         cin >> notas[num_alunos][j];
         media += notas[num_alunos][j];
      }

      notas[num_alunos][3] = media / 3;
         
      cout << "Deseja prosseguir com outro aluno (s/n)? ";
      cin >> flag;

      num_alunos++;
   } while (flag == 's');

   cout << endl;

   for (unsigned int k = 0; k < num_alunos; k++)
   {
      cout << "MATRICULA" << setw(16) << "NOTA 1" << setw(16) << "NOTA 2" << setw(16) << "NOTA 3" << setw(16) << "MÉDIA" <<
      "\n=====================================================================\n"<< 
      matriculas[k] << setw(16) << notas[k][0] << setw(16) << notas[k][1] << setw(16) << notas[k][2] << setw(16) << notas[k][3] << "\n\n";
   }


   return 0;
}