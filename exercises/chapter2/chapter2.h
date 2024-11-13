#ifndef CHAPTER2_H
#define CHAPTER2_H
#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;
typedef unsigned int uint32;
void function_from_chat2();
void show_bytes(byte_pointer start, size_t len);
void show_int (int x);
void show_float (float x);
void show_pointer(void *x);
void test_show_bytes(int val);
void move_bits();
void hex_to_binary(uint32 n);
void inplace_swap(int *x, int *y);
void reverse_array(int a[], int cnt);
#endif