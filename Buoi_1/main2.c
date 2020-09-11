#include <stdio.h>

main()
{
	float toan , ly , hoa , diemtong , diemtrungbinh ;
		
	printf("moi nhap diem toan\n");
	scanf("%f",&toan);
	
	printf("moi nhap diem ly\n");
	scanf("%f",&ly);
	
	printf("moi nhap diem hoa\n");
	scanf("%f",&hoa);
	
	diemtong=toan+ly+hoa;
	
	diemtrungbinh=diemtong/3;
	
	printf("diem tong la\n");
	printf("%f\n", diemtong);
	
	printf("diem trung binh la\n");
	printf("%f\n", diemtrungbinh);
	
	return 0;
	
}
