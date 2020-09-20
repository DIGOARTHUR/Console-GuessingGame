#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
int mat [3][7],i,j,op,x;
int numSort;

// INSERE VALORES ALEATÓRIOS NA MATRIZ |3 x 7|
//-------------------------------------------
for(i=0;i<3;i++){
    for(j=0;j<7;j++){

        do{
            numSort= rand() % 99;
        }while(numSort<10);

        mat[i][j]= numSort;
    }
}

system("cls");

//------------------------------------------------------------------------------------------
// ( 1ª RODADA; QUALQUER ESCOLHA DE FILEIRA ) DEMONSTRAÇÃO DE VALORES |3 x 7|
//------------------------------------------------------------------------------------------
  cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
  cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
       cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[2][0]<<endl;
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[2][2]<<endl;
       cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[2][3]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][5]<<endl;
       cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][6]<<endl;
cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
  cin>>op;




switch(op){


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 1ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 1, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 1:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
    cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"         ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"         ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[0][6];cout<<"         ";cout<<mat[0][5]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[0][3];cout<<"         ";cout<<mat[0][2]<<endl;     //FILEIRA 1;2 [0][0];[0][3];[0][6]
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[0][0];cout<<"         ";cout<<mat[1][6]<<endl;     //FILEIRA 1;1 [0][1];[0][4]
       cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[1][4];cout<<"         ";cout<<mat[1][3]<<endl;     //FILEIRA 1;3 [0][2];[0][5]
       cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][1];cout<<"         ";cout<<mat[1][0]<<endl;
       cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
       cin>>op;
       switch(op){



//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------
        case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat [0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat [0][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 1;1; 1ou2 [0][1];[0][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat [2][6];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat [0][0];cout<<"        ";cout<<mat[0][3]<<endl;
              cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat [2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO 1ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi:";cout<<" ";cout<<mat[0][1];}
                else{if(x==2){cout<<"O numero escolhido foi:";cout<<" ";cout<<mat[0][4];}

                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [0][0];[0][3];[0][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][2]<<endl;
              cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO  1ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA OU 3ªFILEIRA ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi";cout<<" ";cout<<mat[0][0];}
                else{if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[0][3];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[0][6];}
              }
                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 3ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
            cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
                cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][0]<<endl;
                cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[0][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    "; cout<<mat[2][5];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
                cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;     //FILEIRA 1;3;2ou3 [0][2];[0][5]
                cout<<"    "; cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
                cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
                cin>>x;
                // ( RESULTADO  1ªFILEIRA -> 1ªFILEIRA ->  2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[0][2];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[0][5];}
              }
                }
                break;
                break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 2ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 2, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][5]<<endl;
       cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][2]<<endl;
       cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[0][6]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
       cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
       cin>>op;
          switch(op){

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 2ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 2;1; 1ou2 [1][1];[1][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[0][1]<<endl;
              cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
              cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO  2ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi";cout<<" ";cout<<mat[1][1];}
                else{if(x==2){cout<<"O número escolhido foi";cout<<" ";cout<<mat[1][4];}

                }
                 break;

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 2ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat [0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat [1][5];cout<<"        ";cout<<mat [2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [0][1];cout<<"        ";cout<<mat [0][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat [1][6]<<endl;     //FILEIRA 2;2;1ou2ou3 [1][0];[1][3];[1][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat [2][5];cout<<"        ";cout<<mat [0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat [1][1];cout<<"        ";cout<<mat [1][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat [2][3];cout<<"        ";cout<<mat [2][6]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO  2ªFILEIRA -> 2ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA OU 3ª FILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi"<<mat[1][0];}
                else{if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[1][3];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[1][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
         // ( 3ª RODADA; SENDO 2ªFILEIRA -> 3ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
         //--------------------------------------------------------------------------------------------------------------------

        case 3:

 cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;             cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[1][0]<<endl;
                cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    ";cout<<mat[2][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;     //FILEIRA 1;3;2ou3 [1][2];[1][5]
                cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
                cout<<"    ";cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
                cin>>x;
                // ( RESULTADO  2ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[1][2];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[1][5];}
              }
                }
                 break;
                  break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 3ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 3, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 3:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
    cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
        cout<<"    ";cout<<mat[1][6];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[1][4]<<endl;
        cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][1]<<endl;
        cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[2][5]<<endl;
        cout<<"    ";cout<<mat[2][4];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][2]<<endl;
        cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[0][6]<<endl;
        cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
        cout<<"    ";cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
        cout<<"    ";cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
        cin>>op;
        switch(op){
        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 3ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
           cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    ";cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    ";cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    ";cout<<mat[1][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][0]<<endl; //FILEIRA 3;1; 1ou2 [2][1];[2][4]
              cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][0]<<endl;
              cout<<"    ";cout<<mat[1][2];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[2][3]<<endl;
              cout<<"    ";cout<<mat[2][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][1];}
                else{if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][4];}

                }
                 break;

         //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 3ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
              cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [2][0];[2][3];[2][6]
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
              cin>>x;
              // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][0];}
                else{if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][3];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
          // ( 3ª RODADA; SENDO 3ªFILEIRA -> 3ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
          //--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"                                                                                                                      "<<endl;
            cout<<"Fileira 1";                   cout<<"   ";  cout<<"Fileira 2";                                   cout<<"   ";                     cout<<"Fileira 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[2][0]<<endl;
                cout<<"    ";cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    ";cout<<mat[1][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;     //FILEIRA 1;3;2ou3 [2][2];[2][5]
                cout<<"    ";cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
                cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
                cout<<"    ";cout<<"Em qual fileira esta o numero em que voce pensou?"<<endl;
                cin>>x;
                // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][2];}
                else{if(x==3){cout<<"O numero escolhido foi";cout<<" ";cout<<mat[2][5];}
              }
                }
                 break;
                  break;








}

return 0;
}


