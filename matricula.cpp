/* 
● Desenvolva um programa que receba a matrícula (apenas números) e 3
notas de um grupo de alunos. A cada aluno cadastrado o programa deve
perguntar se deseja prosseguir com outro. Em seguida, calcule a média de
cada aluno e imprima os dados da seguinte forma:
*/

#include <iostream>

using namespace std;

int main (void) 
{
     bool flag = 1;
     int i = 0;
     int matriculas[] = {};
     float notas[][4] = {{}, {}, {}, {}};

     do 
     {
      float media = 0;

      cout << "Matrícula: ";
      cin >> matriculas[i];
      
      for (int j = 0; j < 3; j++)
      {
         cout << "Digite a nota " << j + 1 << " do aluno: ";
         cin >> notas[i][j];
         media += notas[i][j];
      }

      notas[i][3] = media / 3;
        
      cout << "Deseja prosseguir com outro aluno? Digite 1 para sim e 0 para não." << endl;
      cin >> flag;

      i++;
     } 
     while (flag != 0);


     for (int k = 0; k < i; k++)
     {
      cout << "MATRICULA \t NOTA1 \t NOTA2 \t NOTA3 \t MEDIA" << endl << "=================================" << endl;
      cout << matriculas[k] << "\t" << notas[k][0] << "\t" << notas[k][1] << "\t" << notas[k][2] << "\t" << notas[k][3] << endl;
     }


    return 0;
}