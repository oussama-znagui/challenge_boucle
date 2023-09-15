int main(){
	int x,i,rest,y;
	printf("saisissez le nombre x");
	scanf("%d",&x);
	
	while(x != 0){
		rest = x%10;
		y = (y*10) + rest;
		printf("%d",rest);
		x = x/10;
	}
	
	
}
