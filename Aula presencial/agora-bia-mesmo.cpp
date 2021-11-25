#include <iostream>
   using namespace std;
   // progrma do trio
   //Elabore um programa capaz de ler um vetor de 20 elementos numéricos e verificar se existem elementos iguais a 30. Se sim, escrever a posição em que estão armazenados.

int main() {
	
	int bia=20;
	int vet [bia];
	bool bruno;
	// printf = count
	for( int arthur=0; arthur<bia; arthur++)
	// ++ serve para encrementar o valor em 1
	{
		cout << "Insira mais " << bia-arthur<< "números: ";
		cin>> vet [arthur];
}
    
	for (int arthur=0; arthur<bia; arthur++)
	{  if(vet [arthur] ==30 )
	{
		cout<< "Número 30 encontrado na posição "  << arthur ;
		bruno=true;
	}
	 
	  
	}
    
    if(bruno==false)
     cout<< "Nenhum número igual a 30 encontrado.";

    return 0;
	
	
	
	
	

	
}