// date:17.4.7
// author: linyang <942510346@qq.com>
// v1 水平方向的直方图

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, i, j;
	int lowercount[26] = { 0 };
	int uppercount[26] = { 0 };
	int visiblecount[127 - 31] = { 0 };

	while ((c = getchar()) != EOF) {
		if (c >= 32 && c <= 127) {
			++visiblecount[c - 32];
		}
	}

	printf("char | num\n");
	for (i = 0; i < (127 - 31); i++) {
		printf("%c | ", i + 32);
		for (j = 0; j < visiblecount[i]; j++) {
			printf("* ");
		}
		printf("\n");
	}

	/*while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			++lowercount[c - 'a'];
		} else if (c >= 'A' && c <= 'Z') {
			++uppercount[c - 'A'];
		}
	}

	printf("char | num\n");
	for (i = 0; i < 26; i++) {
		printf("%c | ", i + 'a');
		for (j = 0; j < lowercount[i]; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0; i < 26; i++) {
		printf("%c | ", i + 'A');
		for (j = 0; j < uppercount[i]; j++) {
			printf("* ");
		}
		printf("\n");
	}*/

	return 0;
}



/*
// 第一行代表的字符是空格（ascii 32）， 最后一行代表的字符是DEL删除（ascii 127），
kolya@asus ~/src/tcpl/1-A_Tutorial_Introduction/exercise $ ./1-14 < 1-14.c
char | num
  | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
! | * * 
" | * * * * * * * * * * * * * * * * * * * * * * 
# | * 
$ | * 
% | * * * 
& | * * * * * * 
' | * * * * * * * * * * * * * * * * 
( | * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
) | * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
* | * * * * * * * * * * * * * * * 
+ | * * * * * * * * * * * * * * * * * * * * * 
, | * * * * * * 
- | * * * * * * * 
. | * * * * * 
/ | * * * * * * * * * * * * * * * 
0 | * * * * * * * * * * * 
1 | * * * * * * * * * * * 
2 | * * * * * * * * * * * 
3 | * * * * * * 
4 | * * * * 
5 | * 
6 | * * * * * 
7 | * * * * * 
8 | 
9 | * 
: | * * 
; | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
< | * * * * * * * * * * * 
= | * * * * * * * * * * * * * * * * * * * 
> | * * * * * 
? | 
@ | * * 
A | * * * * 
B | 
C | 
D | 
E | * * 
F | * * 
G | 
H | 
I | * 
J | 
K | 
L | 
M | 
N | 
O | * * 
P | 
Q | 
R | 
S | 
T | * 
U | 
V | 
W | 
X | 
Y | 
Z | * 
[ | * * * * * * * * * * 
\ | * * * * * 
] | * * * * * * * * * * 
^ | 
_ | * * 
` | 
a | * * * * * * * * * * * * * * * * * * * * 
b | * * * * * 
c | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
d | * * * * * * 
e | * * * * * * * * * * * * * * * * * * * * * * * 
f | * * * * * * * * * * * * * * * * * * * * * * 
g | * * * * * * * 
h | * * * * * * * * * * * 
i | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
j | * * * * * * * * * * * 
k | * * 
l | * * * * * * * * * * * * * * * 
m | * * * * * * 
n | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
o | * * * * * * * * * * * * * * * * * * * * * * * * * * * 
p | * * * * * * * * * * * * * * * * * * * 
q | * * * 
r | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
s | * * * * * * * * * * * 
t | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
u | * * * * * * * * * * * * * * * * * * * * * * 
v | * * * * * * 
w | * * * * * * 
x | * * 
y | * * * 
z | * * 
{ | * * * * * * * * * * * * * * * 
| | * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
} | * * * * * * * * * * * * * * * 
~ | * 
 | 
*/

/*
kolya@asus ~/src/tcpl/1-A_Tutorial_Introduction/exercise $ ./1-14
abcdefg
char | num
a | * 
b | * 
c | * 
d | * 
e | * 
f | * 
g | * 
h | 
i | 
j | 
k | 
l | 
m | 
n | 
o | 
p | 
q | 
r | 
s | 
t | 
u | 
v | 
w | 
x | 
y | 
z | 
*/