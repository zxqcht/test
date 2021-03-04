#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
 } 
char IsWin(char board[ROW][COL],int row,int col)
{
    int i=0;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	 } 
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	return board[1][1];
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
	return board[1][1];
	if(1==IsFull(board,row,col))
	{
		return 'Q';
	 } 
	return 'C';
}
void menu()
{
	printf("****************************\n");
	printf("****  1.play    0.exit  ****\n");
	printf("****************************\n");

}
void game()
{
	char ret=0;
	int i=0,j=0;
	char board[ROW][COL]={0};
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			board[i][j]=' ';
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<COL-1)
		     printf("|");
		}
		printf("\n");
		    if(i<ROW-1)
    	    {
    	    	for(j=0;j<COL;j++)
    	    	{
                   printf("---");
                   if(j<COL-1)
    	    	    printf("|");
				}
				printf("\n");
		   }
	}
	while(1)
	{
		//玩家下棋
		int x=0,y=0;
		printf("玩家走:>\n");
	while(1)
	{
		printf("请输入要下的坐标:");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=ROW&&y>=1&&y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		 } 
		else 
		{
			printf("坐标非法,请重新输入\n");
		}
	}
	     	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<COL-1)
		     printf("|");
		}
		printf("\n");
		    if(i<ROW-1)
    	    {
    	    	for(j=0;j<COL;j++)
    	    	{
                   printf("---");
                   if(j<COL-1)
    	    	    printf("|");
				}
				printf("\n");
		   }
	}
	//PANDUAN
	ret=IsWin(board,ROW,COL);	
	if(ret!='C')
	{
		break;
	}
		//电脑下棋 
		printf("电脑走:>\n");
      while(1)
      {
  		x=rand()%ROW;
		y=rand()%COL;
		if(board[x][y]==' ')
		   {
             board[x][y]='#';
             break;
          }
	  }
	  for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<COL-1)
		     printf("|");
		}
		printf("\n");
		    if(i<ROW-1)
    	    {
    	    	for(j=0;j<COL;j++)
    	    	{
                   printf("---");
                   if(j<COL-1)
    	    	    printf("|");
				}
				printf("\n");
		   }
	}
	//panduan 
	ret=IsWin(board,ROW,COL);
	if(ret!='C')
	{
		break;
	}
  }
   if(ret=='*')
	{
		printf("玩家赢\n"); 
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else 
	{
		printf("平局\n");
	}
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
		    printf("退出游戏");
			break;
		default:
		    printf("选择错误,请重新选择:\n");
		    break; 
		}
	}while(input);
 } 
int main()
{
	test();
}
