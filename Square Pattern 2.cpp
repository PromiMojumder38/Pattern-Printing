/*
		You will be given an integer a and n
		1<= n <= 1000
                1<= a <= 100
		you have to print this:
		
		for a=10, n=7:
	16 16 16 16 16 16 16 16 16 16 16 16 16 
	16 15 15 15 15 15 15 15 15 15 15 15 16 
	16 15 14 14 14 14 14 14 14 14 14 15 16 
	16 15 14 13 13 13 13 13 13 13 14 15 16 
	16 15 14 13 12 12 12 12 12 13 14 15 16 
	16 15 14 13 12 11 11 11 12 13 14 15 16 
	16 15 14 13 12 11 10 11 12 13 14 15 16 
	16 15 14 13 12 11 11 11 12 13 14 15 16 
	16 15 14 13 12 12 12 12 12 13 14 15 16 
	16 15 14 13 13 13 13 13 13 13 14 15 16 
	16 15 14 14 14 14 14 14 14 14 14 15 16 
	16 15 15 15 15 15 15 15 15 15 15 15 16 
	16 16 16 16 16 16 16 16 16 16 16 16 16
        // From 10 to 10 + 7 - 1
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					<  <  MY SOLUTION  > >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
/* ~ CoderMehraJ ~ */
#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int n,tot,p,q,hahahaha;
    scanf("%d%d",&hahahaha, &n);
  	int ar[2*n][2*n];
    tot=2*n-1;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            ar[i][j]=0;
        }
    }
    p=0; q=tot-1;
    for(int i=(hahahaha+n-1);i>=hahahaha;i--){
        for(int j=0+p;j<tot;j++){
            ar[p][j]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[j][p]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[q][j]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[j][q]=i;
        }
        p++;
        q--;
        tot--;
    }
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            printf("%d ",ar[i][j]);
        }
        puts("");
    }
    return 0;
}
