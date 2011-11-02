#include"Stack.h"

Stack::Stack(int n) {
        int stack[n];// = new int[n];
        isFull = true;
        isEmpty = true;
        number = 0;
        total = n;
    }
 Stack::~Stack() {
        delete(stack);
    }

    void Stack:: push(int n) {

        if (!isFull) {
            stack[number] = n;
            number++;
            isEmpty = false;
            if (number = total) {
                isFull = true;
            }
            return;
        } else {
            int temp[number + 100];// = new int[number + 100];
            for (int i = 0; i <= number; i++) {
                temp[i] = stack[i];
            }
            int stack[number + 100];// = new int[number + 100];
            for (int i = 0; i <= number + 100; i++) {
                stack[i] = temp[i];
            }
            number++;
            total += 100;
            isFull = false;
            delete(temp);
        }
    }

   int Stack:: pop() {
        if (isEmpty) {
            return 65535;
        }
        int re = stack[number];
        stack[number] = 0;
        number--;
        if (number = 0) {
            isEmpty = true;
        }
        if (total - number > 100) {
            int temp[total - 100];// = new int[total - 100];
            for (int i = 0; i <= number; i++) {
                temp[i] = stack[i];
            }
            delete(stack);
            int stack[total - 100];// = new int[total - 100];
            for (int i = 0; i <= number; i++) {
                stack[i] = temp[i];
            }
            delete(temp);
        }
        return re;
    }



