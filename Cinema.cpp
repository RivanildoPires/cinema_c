#include <iostream>

using namespace std;

const int FILEIRAS = 10;
const int LUGARES_POR_FILEIRAS = 10;
int ingresso;

void mostrarLugares(char lugares[FILEIRAS][LUGARES_POR_FILEIRAS]){
    cout << "Lugares: " << endl;
    for (int i=0; i<FILEIRAS; i++){
            for (int j=0; j<LUGARES_POR_FILEIRAS; j++){
                cout << lugares[i][j]  << " | ";
        }
        cout << endl;
        } 
}

void comprarLugar(char lugares[FILEIRAS][LUGARES_POR_FILEIRAS], int fileira, int lugar){
    if(fileira < 1|| fileira > FILEIRAS || lugar < 1 || lugar > LUGARES_POR_FILEIRAS){
        cout << "Acento inexistente!" << endl;

    } else if(lugares[fileira - 1][lugar - 1] == 'X'){
            cout << "Acento ja reservado!" << endl;}
      else{
        lugares[fileira -1][lugar -1] = 'X';
        float  preco = 12.50;
        float compra = ingresso * preco;
        cout << "Acento reservado com sucesso!" << " Valor dos ingressos: "<< compra << endl;
      }
}

int main(){
    
    char lugares[FILEIRAS][LUGARES_POR_FILEIRAS];
    char acento = ' ';
       
    for (int i=0; i<FILEIRAS; i++){
        for (int j=0; j<LUGARES_POR_FILEIRAS; j++){
            lugares[i][j] = acento;}
            }
            


    while(true){
    mostrarLugares(lugares);

    int opc;
    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Reservar acento" << endl;
    cout << "2 - Sair" << endl;
    cin >> opc;

    if(opc == 1){
        int fileira,lugar;
        cout << "Quantos ingressos deseja? ";
        cin >> ingresso;
        for(int i=0; i < ingresso; i++){
            cout << "Digite a fileira desejada: " << endl;
            cin >> fileira;
            cout << "Digite o lugar desejado: " << endl;
            cin >> lugar;
        comprarLugar(lugares,fileira,lugar);}
    } else if(opc == 2){
        cout << "Bom Filme!";
            break;
            
        }  
    }
    return 0;
}