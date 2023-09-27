#include <iostream>

using namespace std;


bool isFree(int F, int Holder[]){
       bool result;
       for(int i=0; i<=9; i++){
            if(F==Holder[i]){
                result= false;
                break;
                }
            else{
                result= true;
                }
       }
       return result;
}

bool Xwon(int record[]){
    bool result, x1, x2, x3, x4, x5, x6, x7, x8, x9;
    x1=false;x2=false;x3=false;
    x4=false;x5=false;x6=false;
    x7=false;x8=false;x9=false;
        for(int i=0; i<=5; i++){
            if(record[i]==1){x1=true;}
            if(record[i]==2){x2=true;}
            if(record[i]==3){x3=true;}
            if(record[i]==4){x4=true;}
            if(record[i]==5){x5=true;}
            if(record[i]==6){x6=true;}
            if(record[i]==7){x7=true;}
            if(record[i]==8){x8=true;}
            if(record[i]==9){x9=true;}
        }
    if(x1 && x2 && x3){result=true;}
    else if (x4 && x5 && x6){result=true;}
    else if(x7 && x8 && x9){result=true;}
    else if(x1 && x4 && x7){result=true;}
    else if(x2 && x5 && x8){result=true;}
    else if(x3 && x6 && x9){result=true;}
    else if(x1 && x5 && x9){result=true;}
    else if(x5 && x7 && x3){result=true;}
    else{result=false;}

    return result;

}

bool Owon(int record[]){
    bool result, o1, o2, o3, o4, o5, o6, o7, o8, o9;
    o1=false;o2=false;o3=false;
    o4=false;o5=false;o6=false;
    o7=false;o8=false;o9=false;
        for(int i=0; i<=4; i++){
            if(record[i]==1){o1=true;}
            if(record[i]==2){o2=true;}
            if(record[i]==3){o3=true;}
            if(record[i]==4){o4=true;}
            if(record[i]==5){o5=true;}
            if(record[i]==6){o6=true;}
            if(record[i]==7){o7=true;}
            if(record[i]==8){o8=true;}
            if(record[i]==9){o9=true;}
        }
    if(o1 && o2 && o3){result=true;}
    else if(o4 && o5 && o6){result=true;}
    else if(o7 && o8 && o9){result=true;}
    else if(o1 && o4 && o7){result=true;}
    else if(o2 && o5 && o8){result=true;}
    else if(o3 && o6 && o9){result=true;}
    else if(o1 && o5 && o9){result=true;}
    else if(o5 && o7 && o3){result=true;}
    else{result=false;}

    return result;

}
int main()
{
    int choice;
    do{
    system("cls");

    string In1 , In2, In3, In4, In5, In6, In7, In8, In9;
    int x, o;
    int Holded[9]={ 0, 0, 0, 0, 0, 0, 0, 0, 0,};
    int Xholder[5]={ 0, 0, 0, 0, 0,};
    int Oholder[4]={ 0, 0, 0, 0,};

    In1="."; In2="."; In3=".";
    In4="."; In5="."; In6=".";
    In7="."; In8="."; In9=".";

    bool Xwin=false;
    bool Owin=false;
    bool gameover=false;

    cout<<endl<<In1<<" | "<<In2<<" | "<<In3<<endl<<
          "---------"<<endl<<
          In4<<" | "<<In5<<" | "<<In6<<endl<<
          "---------"<<endl<<
          In7<<" | "<<In8<<" | "<<In9<<endl<<endl;


          int j=0;
          int xx=0;
          int oo=0;
    for(int i=0; i<=5; i++){


        cout<<" X turn: ";
        cin>>x;
        while(!isFree(x, Holded) || x>9 || x<1){
        cout<<" it is holded, X turn: ";
        cin>>x;
        }
        switch(x){
                case 1:
                    In1="X";
                    break;
                case 2:
                    In2="X";
                    break;
                case 3:
                    In3="X";
                    break;
                case 4:
                    In4="X";
                    break;
                case 5:
                    In5="X";
                    break;
                case 6:
                    In6="X";
                    break;
                case 7:
                    In7="X";
                    break;
                case 8:
                    In8="X";
                    break;
                case 9:
                    In9="X";
                    break;
                }
        Holded[j]=x;
        j+=1;

        Xholder[xx]=x;
        xx+=1;

        system("cls");
        cout<<endl<<In1<<" | "<<In2<<" | "<<In3<<endl<<
          "---------"<<endl<<
          In4<<" | "<<In5<<" | "<<In6<<endl<<
          "---------"<<endl<<
          In7<<" | "<<In8<<" | "<<In9<<endl<<endl;

        if(Xwon(Xholder)){
                cout<<endl<<"X WON THE GAME "<<endl;
                cout<<endl<<"O LOST THE GAME "<<endl<<endl;
                break;
            }

        if(i==4){
            cout<<endl<<" ITS A DRAW!!!"<<endl;
            break;
        }

        cout<<" O turn: ";
        cin>>o;
        while(!isFree(o, Holded) || o>9 || o<1 ){
        cout<<" it is holded, O turn: ";
        cin>>o;
        }
        switch(o){
                case 1:
                    In1="O";
                    break;
                case 2:
                    In2="O";
                    break;
                case 3:
                    In3="O";
                    break;
                case 4:
                    In4="O";
                    break;
                case 5:
                    In5="O";
                    break;
                case 6:
                    In6="O";
                    break;
                case 7:
                    In7="O";
                    break;
                case 8:
                    In8="O";
                    break;
                case 9:
                    In9="O";
                    break;
                }

        Holded[j]=o;
        j+=1;

        Oholder[oo]=o;
        oo+=1;

        system("cls");
        cout<<endl<<In1<<" | "<<In2<<" | "<<In3<<endl<<
          "---------"<<endl<<
          In4<<" | "<<In5<<" | "<<In6<<endl<<
          "---------"<<endl<<
          In7<<" | "<<In8<<" | "<<In9<<endl<<endl;

        if(Owon(Oholder)){
                cout<<endl<<"O WON THE GAME"<<endl;
                cout<<endl<<"X LOST THE GAME"<<endl<<endl;
                break;
                }
        }


    cout<<"replay?"<<endl<<"yes[1]   No[0]"<<endl;
    cin>>choice;
    }while(choice==1);
    }



