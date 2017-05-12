# include <stdio.h>
// # include <conio.h>
# include <errno.h>
# include <stdlib.h>
 
// int * largestnumber (int *x, int *y)
// {

//     if(*x > *y) // nó sẽ so sánh cái gì ? value or address ? Tại sao nó cái cài này mà không lấy cái kia ?
//       return x;
//     else
//       return y;
// }

void main()
 {

    int i, j, *large = NULL, *x= NULL, *y= NULL, *max= NULL;
   
    printf("Please enter two values\n");
    scanf("%d %d", &i,&j); // Nhận value nhập vào và mang bỏ vào/lưu trữ tại ngôi nhà i với địa chỉ là &i
  
    printf("Largest of two numbers (%d,%d)\n", i, j); // in value i, j, *large

    printf("Largest of two numbers (%d,%d)=%d\n", x, y, max);

    // printf("Largest of two numbers (%d,%d)=%d\n", *x, *y, *max);

    printf("Largest of two numbers (%d,%d)=%d\n", &i, &j, large);

    printf("After compare\n");

    x = &i; // lấy value hay là address? ==> take address of i and now, value pointer x is address of i. 
    y = &j;
    if(*x > *y) //so sanh value hay là address ? ==> compair value of pointers x & y together
      max = x;
    else
      max = y;

    large = max;
    // large=largestnumber(&i,&j); // có phải gán value của con trở large bởi value hàm trả về ?
    printf("Largest of two numbers (%d,%d)=%d\n", i, j, *large); // in value i, j, *large

    printf("Largest of two numbers (%d,%d)=%d\n", x, y, max);

    printf("Largest of two numbers (%d,%d)=%d\n", *x, *y, *max);

    printf("Largest of two numbers (%d,%d)=%d\n", &i, &j, large);

    printf("........................................................\n");
    printf("Plus value *x, *y\n");
    x = (x +1);
    y = (y +1);
    printf("(%d,%d)=%d\n", i, j, *large); // in value i, j, *large
    printf("(%d,%d)\n", *x, *y, *max);

    printf("........................................................\n");
    printf("Plus value *x, *y\n");
    *x = *(x +1);
    *y = *(y +1);
    printf("(%d,%d)=%d\n", i, j, *large); // in value i, j, *large
    printf("(%d,%d)\n", *x, *y, *max);

}