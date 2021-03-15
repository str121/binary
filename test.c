#include <stdio.h>

	int main(void){
		int num = 13;
		int arr[10];
	int idx = 0;

	while (1){
		arr[idx] = num % 2;
		num = (num / 2);
		
		idx++;
		
		if (num == 0){	break;	}

	}

	for (int i = idx - 1; i >=0; i--){
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
