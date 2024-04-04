#include <iostream>
using namespace std;

int main()
{
    int ellienumber;
    int opcao;
    int escolha;
    int chute;
    int relacao;
    int variavel = 1;
    int fundacao = 2013;
   
    while (true) {
        
        cout << "" << endl;
        cout << "O que você quer saber?" << endl;
        cout << "1- Sobre a Ellie" << endl;
        cout << "2- Sobre o Asilo" << endl;
        cout << "3- Sobre a relação da Ellie com o Asilo" << endl;
        cin >> ellienumber;
        
       switch (ellienumber) {
           case 1:
           cout << "" << endl;
           cout << "Digite o que quer saber sobre a Ellie:" << endl;
           cout << "1- Aparência" << endl;
           cout << "2- Instrumento e musica favorito" << endl;
           cout << "3- Animal Favorito " << endl;
           cout << "4- Jogos Favoritos" << endl;
           cin >> opcao;
           
             if (opcao == 1) {
               cout << "" << endl;
               cout << "Ellie Williams tem 19 anos de idade, ela possui cabelos ruivos e tem 1,60cm de altura." <<endl;
               }
           
             else if(opcao == 2) {
               cout << "" << endl;
               cout << "O instrumento favorito da Ellie é o violão, seu pai lhe ensinou a tocar desde pequena e ela toca sempre no tempo livre." << endl;
               cout << "E sua música favorita é Take On Me, da banda a-ha" << endl;
               }
           
             else if (opcao == 3) {
               cout << "" << endl;
               cout << "Desde pequena o animal favorito da Ellie é o dinossauro, ela adora ir nos museus de exposição para vê-los." << endl;
               }
               
             else if (opcao == 4) {
               for(int i = 1; i <= 2; i++) {
                cout << "The Last of Us " << i << endl;
               }
                cout << "São jogos favoritos da Ellie " <<endl;
             }
               
               else {
                cout << "" << endl;
                cout << "ERR0 - Opção válida!" <<endl;
               }
               
               break;
           
           case 2:
           cout << "" << endl;
           cout << "Digite o que você quer saber sobre o asilo: " << endl;
           cout << "1- Localização" <<endl;
           cout << "2- Finalidade" <<endl;
           cout << "3- Fundação" <<endl;
           cin >> escolha;
           
           if (escolha == 1) {
               cout << "" << endl;
               cout << "O asilo The Last fica localizado em Vancouver, no Canadá." <<endl;
               }
           
             else if(escolha == 2) {
               cout << "" << endl;
               cout << "O asilo The Last tem a finalidade de tratar os idosos sobreviventes do tão temido fungo Cordyceps." << endl;
               }
           
             else if (escolha == 3) {
                 do {
                  cout << "" << endl;
                  cout << "Vamos jogar um jogo!" << endl;
                  cout << " Em que ano você acha que foi fundado o asilo? (Dica: Está entre 2010 a 2020)" <<endl;
                  cin >> chute;
    
                 if (chute<fundacao) {
                 cout<< "Você chutou baixo!"<< endl;
                  }
    
                 else if (chute>fundacao) {
                  cout << "Você chutou alto!"<< endl;
                  }
    
                else{
                cout << "Você acertou!" << endl; 
                cout << "O asilo The Last foi fundado em 14 de junho de 2013." <<endl;
                }
                } while(fundacao != chute);
               }
                break;
               
           case 3:
           cout << "" << endl;
           cout << "Qual das relações você escolhe? " << endl;
           cout << "1- Pessoa desconhecida do asilo" <<endl;
           cout << "2- Dono do Asilo" <<endl;
           cin >> relacao;
           
            if (relacao == 1) {
               cout << "" << endl;
               cout << "Ellie visita o asilo The Last para ver seu pai Joel Miller, um ex militar que combateu e sobreviveu ao fungo Cordyceps." <<endl;
               }
           
             else if(relacao == 2) {
               cout << "" << endl;
               cout << "Ellie está tentando comprar o asilo The Last de Abby, para passar a maior parte do tempo com seu pai!" << endl;
               }
               
               else {
                cout << "" << endl;
                cout << "ERR0 - Opção válida!" <<endl;
               }
               
               break;
           
           default:
           cout << "ERR0 - Opção válida!" << endl;
       }
       

    }
    return 0;
}