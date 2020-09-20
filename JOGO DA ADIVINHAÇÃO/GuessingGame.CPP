#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
int mat [3][7],i,j,op,x,y;
int numSort;
 srand( time( NULL) );
// INSERE VALORES ALEATÓRIOS NA MATRIZ |3 x 7|
//-------------------------------------------
    for(i=0; i<3; i++)
    {
        for(j=0; j<7; j++)
        {
            do
            {
                numSort= rand() % 99;

                for(x=0; x<3; x++)  // Aqui faz a comparação de um valor sorteado com os que já estão na matriz, para que não ocorra a repetição dos mesmos.
                {
                    for(y=0; y<7; y++)
                    {
                        if(mat[x][y]==numSort)
                        {
                            numSort=1;
                            break;
                        }
                    }
                }
            }
            while(numSort<10);


            mat[i][j]= numSort;
        }
    }


    cout<<"GGGGGGG  AAAAAA  MM    MM   EEEEEEE     GGGGGGG   U    U   EEEEEEE   SSSSSS   SSSSSS   II   NN    N   GGGGGGG        |??????|"<<endl;
    cout<<"GGG      A    A  M M  M M   E           GGG       U    U   E         S        S        II   N N   N   GGG            |?    ?|"<<endl;
    cout<<"GGGGGGG  AAAAAA  M  MM  M   EEEEEE      GGGGGGG   U    U   EEEEEE    SSSSSS   SSSSSS   II   N  N  N   GGGGGGG        |  ????|"<<endl;
    cout<<"GGG  GG  A    A  M      M   E           GGG  GG   U    U   E              S        S   II   N   N N   GGG  GG        |  ?   |"<<endl;
    cout<<"GGGGGGG  A    A  M      M   EEEEEEE     GGGGGGG   UUUUUU   EEEEEEE   SSSSSS   SSSSSS   II   N    NN   GGGGGGG        |  O   |"<<endl;

    cout<<"\n -EXPAND SCREEN"<<endl;











//------------------------------------------------------------------------------------------
// ( 1ª RODADA; QUALQUER ESCOLHA DE FILEIRA ) DEMONSTRAÇÃO DE VALORES |3 x 7|
//------------------------------------------------------------------------------------------
  cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"Choose any number that is in the rows and just indicate which one it is in.         "<<endl;

  cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[2][0]<<endl;
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[2][2]<<endl;
       cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[2][3]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][5]<<endl;
       cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][6]<<endl;
cout<<"The number that you thought is in which row?"<<endl;
  cin>>op;




switch(op){


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 1ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 1, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 1:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"   Same number, which one is row?                                                                                                                   "<<endl;
      cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"         ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"         ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[0][6];cout<<"         ";cout<<mat[0][5]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[0][3];cout<<"         ";cout<<mat[0][2]<<endl;     //FILEIRA 1;2 [0][0];[0][3];[0][6]
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[0][0];cout<<"         ";cout<<mat[1][6]<<endl;     //FILEIRA 1;1 [0][1];[0][4]
       cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[1][4];cout<<"         ";cout<<mat[1][3]<<endl;     //FILEIRA 1;3 [0][2];[0][5]
       cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][1];cout<<"         ";cout<<mat[1][0]<<endl;
       cout<<"The number that you thought is in which row?"<<endl;
       cin>>op;
       switch(op){



//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------
        case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"    Same number, which one is row?                                                                                                                  "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat [0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat [0][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 1;1; 1ou2 [0][1];[0][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat [2][6];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat [0][0];cout<<"        ";cout<<mat[0][3]<<endl;
              cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat [2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO 1ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[0][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][4];}

                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [0][0];[0][3];[0][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][2]<<endl;
              cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  1ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA OU 3ªFILEIRA ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[0][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][3];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[0][6];}
              }
                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3ª RODADA; SENDO 1ªFILEIRA -> 3ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
//--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
            cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][0]<<endl;
                cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[0][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    "; cout<<mat[2][5];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
                cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;     //FILEIRA 1;3;2ou3 [0][2];[0][5]
                cout<<"    "; cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
                cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  1ªFILEIRA -> 1ªFILEIRA ->  2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[0][5];}
              }
                }
                break;
                break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 2ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 2, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"       Same number, which one is row?                                                                                                               "<<endl;
          cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][5]<<endl;
       cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][2]<<endl;
       cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[0][6]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
       cout<<"The number that you thought is in which row?"<<endl;
       cin>>op;
          switch(op){

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 2ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 2;1; 1ou2 [1][1];[1][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[0][1]<<endl;
              cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
              cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  2ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[1][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][4];}

                }
                 break;

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 2ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"       Same number, which one is row?                                                                                                               "<<endl;
            cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat [0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat [1][5];cout<<"        ";cout<<mat [2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [0][1];cout<<"        ";cout<<mat [0][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat [1][6]<<endl;     //FILEIRA 2;2;1ou2ou3 [1][0];[1][3];[1][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat [2][5];cout<<"        ";cout<<mat [0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat [1][1];cout<<"        ";cout<<mat [1][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat [2][3];cout<<"        ";cout<<mat [2][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  2ªFILEIRA -> 2ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA OU 3ª FILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: "<<mat[1][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][3];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[1][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
         // ( 3ª RODADA; SENDO 2ªFILEIRA -> 3ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
         //--------------------------------------------------------------------------------------------------------------------

        case 3:

 cout<<"-----------------------------------------------------------------------------------"<<endl;
 cout<<"       Same number, which one is row?                                                                                                               "<<endl;
              cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[1][0]<<endl;
                cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    ";cout<<mat[2][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;     //FILEIRA 1;3;2ou3 [1][2];[1][5]
                cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
                cout<<"    ";cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  2ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[1][5];}
              }
                }
                 break;
                  break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2ª RODADA; SENDO 3ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA. COMO AQUI É REFERENTE A FILEIRA 3, É CONSTRUÍDAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 3:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"        Same number, which one is row?                                                                                                                "<<endl;
      cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
        cout<<"    ";cout<<mat[1][6];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[1][4]<<endl;
        cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][1]<<endl;
        cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[2][5]<<endl;
        cout<<"    ";cout<<mat[2][4];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][2]<<endl;
        cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[0][6]<<endl;
        cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
        cout<<"    ";cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
        cout<<"    ";cout<<"The number that you thought is in which row?"<<endl;
        cin>>op;
        switch(op){
        //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 3ªFILEIRA -> 1ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"            Same number, which one is row?                                                                                                            "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    ";cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    ";cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    ";cout<<mat[1][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][0]<<endl; //FILEIRA 3;1; 1ou2 [2][1];[2][4]
              cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][0]<<endl;
              cout<<"    ";cout<<mat[1][2];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[2][3]<<endl;
              cout<<"    ";cout<<mat[2][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 1ªFILEIRA OU 2ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[2][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][4];}

                }
                 break;

         //--------------------------------------------------------------------------------------------------------------------
        // ( 3ª RODADA; SENDO 3ªFILEIRA -> 2ªFILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"          Same number, which one is row?                                                                                                              "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [2][0];[2][3];[2][6]
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA ) AQUI O VALOR PENSADO É MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[2][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][3];}
                else{if(x==3){cout<<"The number is:"; cout<<" ";cout<<mat[2][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
          // ( 3ª RODADA; SENDO 3ªFILEIRA -> 3ªFILEIRA  ) AQUI OS VALORES MATRICIAIS SÃO REMANEJADOS DE FORMA ESTRATÉGICA.
          //--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"             Same number, which one is row?                                                                                                           "<<endl;
              cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[2][0]<<endl;
                cout<<"    ";cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    ";cout<<mat[1][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;     //FILEIRA 1;3;2ou3 [2][2];[2][5]
                cout<<"    ";cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
                cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
                cout<<"    ";cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  3ªFILEIRA -> 1ªFILEIRA -> 2ªFILEIRA OU 3ªFILEIRA  ) AQUI O VALOR PENSADO É MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[2][5];}
              }
                }
                 break;
                  break;








}

return 0;
}


