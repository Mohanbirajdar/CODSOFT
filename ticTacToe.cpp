#include<iostream>
#include<ctime>
#include<random>
using namespace std;
char game_board[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
void board_show();
void get_player1_choice();
void get_player2_choice();
void com_vs_player();
void player_vs_player();
void get_computer_choice();
int count_board(char symbol);
char check_win();
int main(){
    int chose_mode;
    cout<<"------------------------------------"<<endl;
    cout<<"      SELECT YOUR MODE        "<<endl;
    cout<<" 1. COMPUTER VS PLAYER"<< endl;
    cout<<" 2. PLAYER VS PLAYER"<<endl;
    cout<<"------------------------------------"<<endl;
    cin>> chose_mode;
    switch (chose_mode)
    {
    case 1 :
        com_vs_player();
        break;
    case 2 :
        player_vs_player();
    
    default:
        cout<<" PLEASE SELECT A VALID MODE "<<endl;
        break;
    }
  return 0;
}
void get_computer_choice(){
    srand(time(0));
    int choice;
    do {
        choice=rand()%10;

    }while (game_board[choice] != ' ');
    {
        game_board[choice]='O';
    }
    

}
void get_player1_choice(){
    int choice;
    while (true)
    {
        cout << " Select your position (from 1 to 9): ";
        cin >> choice;
        choice--;
        if (choice<0 || choice>8 )
        {
            cout<< " Please Select a Valid move ."<<endl;

        }else if (game_board[choice] != ' ')
        {
            cout<<" Please Select an empty position :"<< endl;

        }
        else{
            game_board[choice]='X';
            break;

        }
        
        

    }
    
}
void get_player2_choice(){
    int choice;
    while (true)
    {
        cout << " Select your position (from 1 to 9): ";
        cin >> choice;
        choice--;
        if (choice<0 || choice>8 )
        {
            cout<< " Please Select a Valid move ."<<endl;

        }else if (game_board[choice] != ' ')
        {
            cout<<" Please Select an empty position :"<< endl;

        }
        else{
            game_board[choice]='O';
            break;

        }
        
        

    }
    
}
int count_board(char symbol){
    int total=0;
    for (int i = 0; i < 9; i++)
    {
        if (game_board[i]==symbol)
        {
            total+=1;
        }      
    }
    return total;
}
char check_win(){
    if (game_board[0]== game_board[1]&& game_board[1]==game_board[2]&& game_board[0]!=' '){
        return game_board[0];}
    if (game_board[3]== game_board[4]&& game_board[3]==game_board[5]&& game_board[3]!=' ')
       { return game_board[3];
       }
    if (game_board[6]== game_board[7]&& game_board[7]==game_board[8]&& game_board[6]!=' '){
        return game_board[6]; }
    if (game_board[0]== game_board[3]&& game_board[0]==game_board[6]&& game_board[0]!=' '){
        return game_board[0];}
    if (game_board[1]== game_board[4]&& game_board[4]==game_board[7]&& game_board[1]!=' '){
        return game_board[1];}
    if (game_board[2]== game_board[5]&& game_board[5]==game_board[8]&& game_board[2]!=' '){
        return game_board[2];}
    if (game_board[0]== game_board[4]&& game_board[4]==game_board[8]&& game_board[0]!=' '){
        return game_board[0];}
    if (game_board[2]== game_board[4]&& game_board[4]==game_board[6]&& game_board[2]!=' '){
        return game_board[2];}
    if (count_board('X')+count_board('O')<9)
    {
        return 'C';
    }else{
        return 'D';
    }
    

    
}

void board_show(){
    cout<<"   "<<"   |   "<<"   |   "<< endl;
    cout<<"   "<<game_board[0]<<"  1|  "<<game_board[1]<<"   |  "<<game_board[2]<< endl;
    cout<<"   "<<"   |   "<<"   |   "<< endl;
    cout<<"--------------------"<<endl;
    cout<<"   "<<"   |   "<<"   |   "<< endl;
    cout<<"   "<<game_board[3]<<"  |  "<<game_board[4]<<"   |  "<<game_board[5]<< endl;
    cout<<"   "<<"   |   "<<"   |   "<< endl;
    cout<<"--------------------"<<endl;
    cout<<"   "<<"   |   "<<"   |   "<< endl;
    cout<<"   "<<game_board[6]<<"  |  "<<game_board[7]<<"   |  "<<game_board[8]<< endl;
    cout<<"   "<<"   |   "<<"   |   "<< endl;

    
}
void com_vs_player(){
    string player;
    cout<<" Enter Your Name : ";
    cin>> player;
    while (true)
    {
        system("cls");
        board_show();
        if (count_board('X')==count_board('O'))
        {
            cout<<" "<< player <<"'s turn, Chose your Move"<<endl;
            get_player1_choice();
        }else
        {
            get_computer_choice();
        }
        char winner= check_win();
        if (winner=='X')
        {
            system("cls");
            board_show();
            cout<< player << " WON THE GAME"<<endl;
            break;
        }else if (winner=='O')
        {
            system("cls");
            board_show();
            cout<<"COMPUTER WON THE GAME"<<endl;
            break;
        }
        else if (winner=='D')
        {
            cout<<"GAME IS DRAWN"<<endl;
            break;
        }
             
    }
    
}
void player_vs_player(){
    string player1, player2;
    cout<<"Enter player1 Name : ";
    cin >> player1;
    cout<<"Enter player2 Name : ";
    cin >> player2;
    while (true)
    {
        system("cls");
        board_show();
        if (count_board('X')==count_board('O'))
        {
            cout<< player1 <<"'s turn, chose your move "<<endl;
            get_player1_choice();

        }else
        {
            cout<< player2<<"'s turn, chose your move "<<endl;
            get_player2_choice();
        }
        char winner = check_win();
        if (winner=='X')
        {
            system("cls");
            board_show();
            cout<< player1 << " WON THE GAME."<<endl;
            break;
        }
        else if (winner=='O')
        {
            system("cls");
            board_show();
            cout<< player2 << " WON THE GAME."<<endl;
            break;
        } else if (winner=='D')
        {
            system("cls");
            board_show();
            cout<< player1 << " GAME IS DRAW."<<endl;
            break;
        }     
    }
}