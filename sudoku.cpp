#include<iostream>
using namespace std;
void solved();
bool box_check(int [][9], int, int, int, int);
bool rows_check(int [][9], int, int, int, int);
bool column_check(int [][9], int, int, int, int);
void display(int [][9], int);
void add(int [][9], int, int, int);
int main(){
	string choice="yes";
	int row,column,value;
	int sudoku[9][9] = {
	{4, 2,9,0,0,3,0,0,0,},
	{3 ,7,0,1,0,0,9,0,0},
	{0 ,0,0,2,9,3,0,0,0},
	{8 ,3,0,0,1,0,4,0,6},
	{0 ,0,0,8,0,7,5,0,0},
	{7 ,4,5,9,3,0,0,1,0},
	{9 ,0,0,7,0,0,3,1,0},
	{2 ,5,7,0,0,0,6,0,0},
	{6 ,0,3,0,9,8,0,7,0}

	};
	cout<<"This is a sudoku game "<<endl;
	display(sudoku, 9);
	while(choice=="yes" or "Yes" or "y" or "Y"){
		cout<<"enter value and position "<<endl;
		cout<<"Value:";
		cin>>value;
		cout<<"Row:";
		cin>>row;
		cout<<"Column:";
		cin>>column;
		if (box_check(sudoku,9,value,row,column)==true && rows_check(sudoku,9,value,row,column)==true && column_check(sudoku,9,value,row,column)==true){
			cout<<"Input successful"<<endl;
			add(sudoku,row,column,value);
			display(sudoku, 9);
		}
		else{
			cout<<"You have wrong input";
		}
		cout<<"Do you wish to continue? (yes/no)"<<endl;
		cin>>choice;
	}
}

bool rows_check(int sudoku[][9],int size, int value, int row, int column){
	bool valid = true;
	for (int i=0 ; i<size ; i++){
		if (value==sudoku[row][i]){
			valid=false;
			cout<<"Row checker is false";
		}
	}
	return valid;
}

bool column_check(int sudoku[][9],int size, int value, int row, int column){
	bool valid = true;
	for (int i=0 ; i<size ; i++){
		if (value==sudoku[i][column]){
			valid=false;
			cout<<"column checker is false";
		}
	}
	return valid;
}

bool box_check(int sudoku[][9],int size, int value, int row, int column){
	bool valid=true;
	int origin_row=(row/3)*3;
	int origin_column=(column/3)*3;
	
	for (int i=origin_row ; i<size/3; i++){
		for (int j=origin_column ; j<size/3 ; j++){
			if (value==sudoku[i][j]){
				valid=false;
				//cout<<"origin_row"<<origin_row;
				//cout<<"origin_column"<<origin_column;
				cout<<"box checker is false";
			}
		}
	}
	return valid;
}

void display(int sudoku[][9], int size){
	cout<<"Column# ";
	for (int i=0 ; i<9 ; i++){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"-----------------------------";
	cout<<endl;
	for (int i=0 ; i<size ; i++){
		cout<<"Row#"<<i<<"  |";
		for (int j=0 ; j<size ; j++){
			cout<<sudoku[i][j]<<" ";
		}
		cout<<endl;
	}
}

void add(int sudoku[][9], int row, int column, int value){
	sudoku[row][column]=value;
}
/*{9,0,0,5,0,8,0,0,7},
		{0,8,0,3,0,2,9,0,5},
		{0,5,4,0,0,0,0,8,0},
		{0,7,0,6,8,0,0,3,2},
		{1,0,0,0,0,4,0,0,8},
		{5,0,0,2,1,9,0,6,0},
		{0,0,0,9,0,6,0,0,1},
		{7,2,6,0,0,1,0,4,0},
		{0,0,1,4,7,0,0,5,6}*/
