#include<stdio.h>
int read(){
	char ch;int res=0,zf=1;
	while((ch=getchar())<48||ch>57)if(ch=='-')zf=!zf;res=(ch^48);
	while((ch=getchar())>=48&&ch<=57)res=(res<<3)+(res<<1)+(ch^48);
	return zf?res:(-res);
}
int n,t;
int main(){
	t=read();
	while(t--){
		n=read();
		int q=n/2;
		 
		for(int i=1;i+i<=n;i++){
			printf("%d ",i+q);
			printf("%d ",i);
		}
		if(n%2)printf("%d ",n);
		putchar('\n');		
	}
	return 0;
}
