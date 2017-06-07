#include <stdio.h>

void move(int from, int to) {
	printf("\nMove from %d to %d", from, to);
}

void hanoi(int n, int from, int by, int to) {
	if (n == 1)
	move(from, to);
	else {
	hanoi(n - 1, from, to, by);
	move(from, to);
	hanoi(n - 1, by, from, to);
	}
}

#define MAX 100
int stack[MAX];
int top;

void init_stack(void) {
	top = -1;
}

int push(int t) {

	if (top >= MAX - 1) {
	printf("\n    Stack overflow.");
	return -1;
	}

	stack[++top] = t;
	return t;
}

int pop(void) {
	if (top < 0) {
	printf("\n   Stack underflow.");
	return -1;
	}
	return stack[top--];
}

int is_stack_empty() {
	return (top > -1) ? 0 : 1;
}

void nr_hanoi(int n, int from, int by, int to) {

	init_stack();
	while (1) {
	while (n > 1) {
	push(to);
	push(by);
	push(from);
	push(n);
	n--;
	push(to);
	to = by;
	by = pop();
	}

	move(from, to);

	if (!is_stack_empty()) {
	n = pop();
	from = pop();
	by = pop();
	to = pop();

	move(from, to);

	n--;
	push(from);
	from = by;
	by = pop();
	}
	else {
	break;
	}
	}
}

void main(void) {
	int i = 5;

	hanoi(i, 1, 2, 3);
	printf("\n\n\nNon Recursive Hanoi \n");
	nr_hanoi(i, 1, 2, 3);
	return 0;
}