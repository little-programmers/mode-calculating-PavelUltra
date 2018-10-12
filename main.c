#include <stdio.h>
#include <assert.h>

// calculate_mode возвращает моду из массива а.
// вместо точки с запятой открывайте фигурные скобки и пишите ваше решение.
int calculate_mode(int n, int a[n]){
	int count1 = 0;
	int count2 = 0;
	int moda = a[0];
	int std = 0;
	int g = 0;
	int j;
	int i;
	
	for( j = 0; j < n; j++){
		g = a[j];
			for (i= 0;i<n;i++){
				if(g == a[i])
					count1 ++;
			}	
		
		if(count1 > count2 ){
			moda = a[j];
			count2 = count1;
		}
		else if(count1 >= count2 && moda < a[j] ){
			moda = a[j];
			count2 = count1;	
		}
		count1 = 0;
		}
	return moda;
}


void test_calculate_mode() {
    assert(calculate_mode(1, (int[]){1}) == 1);
    assert(calculate_mode(2, (int[]){1,-1}) == 1);
    assert(calculate_mode(3, (int[]){1,2,3}) == 3);
    assert(calculate_mode(3, (int[]){0,0,0}) == 0);
    assert(calculate_mode(5, (int[]){1,2,3,3,4}) == 3);
    assert(calculate_mode(6, (int[]){1,1,2,2,3,4}) == 2);
    assert(calculate_mode(10, (int[]){1,12,-3,-3,12,-3,1,4,-3,4}) == -3);

    printf("Тесты прошли успешно!\n");
}

int main() {
    test_calculate_mode();
    return 0;
}
