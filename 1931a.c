#include<stdio.h>
signed main(){
	int t;
	int sum;
	int l1=-1,l2=-1,l3=-1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&sum);
			if(sum==3){
				printf("aaa\n");
				continue;
			}
			int flag=0;
			while(flag==0 && l1<25){
				l1++;
//				printf("\nl1=%d\t",l1);
				while(flag==0 && l2<25){
					l2++;
//					printf("l2=%d\t",l2);
					while(flag==0 && l3<25){
						l3++;
//						printf("l3=%d\t",l3);
//						printf("l1+l2+l3=%d\n",l1+l2+l3);
						if((l1+l2+l3+3)==sum){
//							printf("%d,%d,%d\n",l1,l2,l3);
							printf("%c%c%c\n",l1+97,l2+97,l3+97);
							flag=1;
						}
					}
					l3=0;
				}
				l2=0;
			}
			flag=0;
			l1=-1;
			l2=-1;
			l3=-1;
	}
}
