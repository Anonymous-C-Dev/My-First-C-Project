#include <stdio.h>
#include <windows.h>
int main() {
	int num = 1;
	char decision;
	printf("Haii! Do you want me to say I Love You 100 times? Y/N.\n");
	scanf("%c" ,&decision);
	if (decision == 'Y' || decision == 'y') {
		printf("Got it! >w<\n");
		Sleep(1000);
		while(num <= 100) {
			printf("I Love You %d%%\n", num);
			num++;
			Sleep(1000);
		}
		printf("I Love You Soo Much, We reached 100%%! Now buy me icecream hehe\n");
		return 0;
	}
	if (decision == 'N' || decision == 'n') {
		printf("Awhh okay, come back anytime if you change your mind. >_<\n");
		return 0;
	}
	else {
		printf("You typed an invalid input, use only Y/N. Please Re-run the Program. O_O\n");
		return 0;
	}
}
