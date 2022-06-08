#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<iostream>
#include<climits>
#include <algorithm>
#include <typeinfo>
#include <string>
#include <time.h>
using namespace std;

class MyString {
	friend istream& operator>>(istream& is, MyString& str) {
		char buffer[4096];
		is >> buffer;
		str.data = buffer;
		return is;
	}
	friend ostream& operator<<(ostream& os, MyString& str) {
		os << str.data;
		return os;
	}
public:
	MyString() {
		data = "";
	}
	MyString(const char*&& str) {
		this->data = str;
		str = nullptr;
		cout << "ÓÒÖµ";
	}
	MyString(const char* str) {
		char* newdata = new char[sizeof(str)];
		for (int i = 0;i < sizeof(str);++i) {
			newdata[i] = str[i];
		}
		data = newdata;
		cout << "¿½±´";
	}

private:
	const char* data;
};