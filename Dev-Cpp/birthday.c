#include<stdio.h>
int odddayinyear(int year){
	int ry400=(year-1)%400;
	int ro100=ry400/100;
	if(ro100==1){
		ro100=5;
	}else if(ro100==2){
		ro100=3;
	}else if(ro100==3){
		ro100=1;
	}else{
		ro100=0;
	}
	int ry100=ry400%100;
	int lpyear=ry100/4;
	int normalyear=ry100-lpyear;
	int totaloddday=2*lpyear+normalyear+ro100;
	int oddday=totaloddday%7;
	return oddday;
}
int odddayinmonthnormalyear(int month){
switch(month-1){
	case 0: return 0;
	case 1: return 3;
	case 2: return 3;
	case 3: return 6;
	case 4: return 8;
	case 5: return 11;
	case 6: return 13;
	case 7: return 16;
	case 8: return 19;
	case 9: return 21;
	case 10: return 24;
	case 11: return 26;
	default: printf("wrong entry");
	         break;        
   }
}
int odddayinmonthleapyear(int month){
	switch(month-1){
		case 0: return 0;
		case 1: return 3;
		case 2: return 4;
		case 3: return 7;
		case 4:	return 9;
		case 5: return 12;
		case 6: return 14;
		case 7: return 17;
		case 8: return 20;
		case 9: return 22;
		case 10: return 25;
		case 11: return 27;
		default: printf("Wrong entry");
		         break;	
	}
}
int odddayindays(int day){
	return (day%7);
}

int main(){
	int day,month,year;
	printf("Enter the date of birth ");
	scanf("%d%d%d",&day,&month,&year);
	int totalodddays;
	if(year%4==0){
		if(year%400==0){
			totalodddays= odddayinyear(year)+odddayinmonthleapyear(month)+odddayindays(day);
		}else if((year%100)==0){
			totalodddays=odddayinyear(year)+odddayinmonthnormalyear(month)+odddayindays(day);
		}else{
			totalodddays= odddayinyear(year)+odddayinmonthleapyear(month)+odddayindays(day);
		}
	}else{
		totalodddays=odddayinyear(year)+odddayinmonthnormalyear(month)+odddayindays(day);
	}
int	finalodddays=totalodddays%7;
	switch(finalodddays){
		case 0: printf("\n sunday ");
		        break;
		case 1: printf("\n monday ");
		        break;
		case 2: printf("\n tuesday ");
		        break;
		case 3: printf("\n wednesday ");
		        break;
		case 4: printf("\n thursday ");
		        break;
		case 5: printf("\n friday ");
		        break;
		case 6: printf("\n saturday ");
		        break;										        
	}
	return 0;
}
