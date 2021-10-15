#include <stdio.h>
int print_board(char board[3][3]){
	
	/*function to print board containing all the played moves*/
	
	printf(" %c | %c | %c \n___|___|___\n %c | %c | %c \n___|___|___\n %c | %c | %c \n   |   |   \n",
			board[0][0], board[0][1], board[0][2],
			board[1][0], board[1][1], board[1][2],
			board[2][0], board[2][1], board[2][2]);
	return 0;
};

int user_play(char board[3][3]){
	
	/*function to take in user input (coordinates on board) to play
	If wrong or invalid input throws back error message and prompts 
	for a valid input*/
	
	int user_play_x, user_play_y;
	char ch;
	int correct_play = 0;
	printf("Enter play Coordinate (*format: x,y) between (0,0) and (2,2):\n");
	
	while(1){
		
		scanf("%d%c%d",&user_play_x,&ch,&user_play_y);
		
		//checks input validity
		if((user_play_x > 2 || user_play_y > 2) || (user_play_x < 0 || user_play_y < 0)){
			printf("Invalid coordinates\n");
			printf("Enter play Coordinate (*format: x,y) between (0,0) and (2,2):\n");
			continue;
		}
		
		//checks availability of input coordinates
		if(board[user_play_x][user_play_y] == ' '){
			board[user_play_x][user_play_y] = '1';
			break;
		}else{
			printf("Coordinate already filled\n");
			printf("Enter play Coordinate (*format: x,y) between (0,0) and (2,2):\n");
		}
	}
	
	return 0;
}

int computer_play(char board[3][3]){
	
	/*function plays the computers move.
	Iterate through board until find an empty space*/
	
	int played = 0;
	int x = 0;
	
	while(x < 3 && !played){
		for(int y = 0; y < 3; y++){
			if(board[x][y] == ' '){
				board[x][y] = '0';
				played = 1;
				break;
			}
		}
		
		x++;
	}
	
	return 0;
}

int * player_plays(char player_,char board[3][3]){
	
	//function to compile the plays made by given player
	//returns pointer to array for the plays made
	
	static int player[] = {9,9,9,9,9}; 
	int player_idx = 0;
	int pos = 0;
	
	if(player_ == 'h'){
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < 3; ++j){
				if(board[i][j] == '1'){
					player[player_idx] = pos;
					player_idx++;
				}
				pos++;
			}
		}
	}
	
	if(player_ == 'c'){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(board[i][j] == '0'){
					player[player_idx] = pos;
					player_idx++;
				}
				pos++;
			}
		}
	}
	
	return player;
}


int check_win(int * player,char board[3][3]){ 

	//functoin to check win of the given player.
	
	int win_combinations[8][3] = {{0,1,2},{3,4,5},{6,7,8},
								  {0,3,6},{1,4,7},{2,5,8},
								  {0,4,8},{2,4,6}};
	for(int i = 0; i < 8; i++){
		int match = 0;
		for(int j = 0; j < 3; j++){
			if(win_combinations[i][j] == player[0]){
				match = 1;
			}else if(win_combinations[i][j] == player[1]){
				match = 1;
			}else if(win_combinations[i][j] == player[2]){
				match = 1;
			}else if(win_combinations[i][j] == player[3]){
				match = 1;
			}else if(win_combinations[i][j] == player[4]){
				match = 1;
			}else{
				match = 0;
				break;
			}
		}
			
		if(match){
			return 1;
		}
	}
	return 0;
}

int check_winner(int player_turn,char board[3][3]){
	
	//function to check who won or is it a draw
	
	if(player_turn){
		return check_win(player_plays('h',board),board);
	}else{
		return check_win(player_plays('c',board),board);
	}
}

void start_game(){
	
	//Function that runs the game loop
	
	printf("*******************\n     TicTacToe     \n*******************\n");
	printf("Press any character key to start game and 'q' to quit game:\n");
	
	while(1){
		char start;
		char restart;
		int result_player = 0;
		int result_comp = 0;
		char board[3][3] = {{' ',' ',' '},
						 {' ',' ',' '},
						 {' ',' ',' '}};
		print_board(board);
		scanf("%c",&start);
		if(start != 'q'){
			for(int i = 0; i < 5; i++){
				user_play(board);
				print_board(board);
				if(i >= 2){
					if(check_winner(1,board)){
						result_player = check_winner(1,board);
						break;
					}
				}
				computer_play(board);
				print_board(board);
				if(i >= 2){
					if(check_winner(0,board)){
						result_comp = check_winner(0,board);
						break;
					}
				}
			}
			
			if(result_player > result_comp){
				printf("Player Wins\n");
			} else if(result_player = result_comp){
				printf("Draw\n");
			}else{
				printf("Player Loses\n");
			}
			
			printf("Play Again (y/n):\n");
			
			scanf("%c",&restart);
			
			if(restart == 'y'){
				continue;
			}
			if(restart == 'n'){
				break;
			}
			
		}else{
			break;
		}
	}
}
int main(){
	start_game();
	return 0;
}