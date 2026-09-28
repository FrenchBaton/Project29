#include<iostream>
#include<string>
using namespace std;


template<class T>
class Var
{
	T obj;
	bool isString = false;
public:
	Var(int a);
	Var(double a);
	Var() {}
	
	void Show();
	Var<T>& operator=(T o);

	Var<T> operator+(T o);
	Var<T> operator+(const char* o);
	Var<T> operator-(T o);
	Var<T> operator-(const char* o);
	Var<T> operator*(T o);
	Var<T> operator*(const char* o);
	Var<T> operator/(T o);
	Var<T> operator/(const char* o);

	Var<T> operator+=(T o);
	Var<T> operator+=(const char* o);
	Var<T> operator-=(T o);
	Var<T> operator-=(const char* o);
	Var<T> operator*=(T o);
	Var<T> operator*=(const char* o);
	Var<T> operator/=(T o);
	Var<T> operator/=(const char* o);


	bool operator<(T o);
	bool operator<(const char* o);
	bool operator<=(T o);
	bool operator<=(const char* o);
	bool operator>(T o);
	bool operator>(const char* o);
	bool operator>=(T o);
	bool operator>=(const char* o);
	bool operator==(T o);
	bool operator==(const char* o);
	bool operator!=(T o);
	bool operator!=(const char* o);


	operator int();
	operator string();
	operator double();
};

template<class T>
Var<T>::Var(int a)
{
	obj = a;
}

template<class T>
Var<T>::Var(double a)
{
	obj = a;
}

template<class T>
Var<T> Var<T>::operator+(T o)
{
	Var<T> rez = obj + o;
	return rez;
}

template<class T>
Var<T> Var<T>::operator+(const char* o)
{
	Var<T> rez = obj + stoi(o);
	return rez;
}

template<class T>
Var<T> Var<T>::operator-(T o)
{
	Var<T> rez = obj - o;
	return rez;;
}

template<class T>
Var<T> Var<T>::operator-(const char* o)
{
	Var<T> rez = obj - stoi(o);
	return rez;
}

template<class T>
Var<T> Var<T>::operator*(T o)
{
	Var<T> rez = obj * o;
	return rez;
}

template<class T>
Var<T> Var<T>::operator*(const char* o)
{
	Var<T> rez = obj * stoi(o);
	return rez;
}

template<class T>
Var<T> Var<T>::operator/(T o)
{
	Var<T> rez = obj / o;
	return rez;
}

template<class T>
Var<T> Var<T>::operator/(const char* o)
{
	Var<T> rez = obj / stoi(o);
	return rez;
}

template<class T>
Var<T> Var<T>::operator+=(T o)
{
	obj += o;
	return *this;
}

template<class T>
Var<T> Var<T>::operator+=(const char* o)
{
	obj += stoi(o);
	return *this;
}

template<class T>
Var<T> Var<T>::operator-=(T o)
{
	obj -= o;
	return *this;
}

template<class T>
Var<T> Var<T>::operator-=(const char* o)
{
	obj -= stoi(o);
	return *this;
}

template<class T>
Var<T> Var<T>::operator*=(T o)
{
	obj *= o;
	return *this;
}

template<class T>
Var<T> Var<T>::operator*=(const char* o)
{
	obj *= stoi(o);
	return *this;
}

template<class T>
Var<T> Var<T>::operator/=(T o)
{
	obj /= o;
	return *this;
}

template<class T>
Var<T> Var<T>::operator/=(const char* o)
{
	obj /= stoi(o);
	return *this;
}


template<class T>
bool Var<T>::operator<(T o)
{
	if (obj < o) return true;
	return false;
}

template<class T>
bool Var<T>::operator<(const char* o)
{
	if (obj < stoi(o)) return true;
	return false;
}

template<class T>
bool Var<T>::operator<=(T o)
{
	if (obj <= o) return true;
	return false;
}

template<class T>
bool Var<T>::operator<=(const char* o)
{
	if (obj <= stoi(o)) return true;
	return false;
}

template<class T>
bool Var<T>::operator>(T o)
{
	if (obj > o) return true;
	return false;
}

template<class T>
bool Var<T>::operator>(const char* o)
{
	if (obj > stoi(o)) return true;
	return false;
}

template<class T>
bool Var<T>::operator>=(T o)
{
	if (obj >= o) return true;
	return false;
}

template<class T>
bool Var<T>::operator>=(const char* o)
{
	if (obj >= stoi(o)) return true;
	return false;
}

template<class T>
bool Var<T>::operator==(T o)
{
	if (obj == o) return true;
	return false;
}

template<class T>
bool Var<T>::operator==(const char* o)
{
	if (obj == stoi(o)) return true;
	return false;
}

template<class T>
bool Var<T>::operator!=(T o)
{
	if (obj != o) return true;
	return false;
}

template<class T>
bool Var<T>::operator!=(const char* o)
{
	if (obj != stoi(o)) return true;
	return false;
}


template<class T>
void Var<T>::Show()
{
	cout << obj << endl;
}

template<class T>
inline Var<T>& Var<T>::operator=(T o)
{
	obj = o;
	return *this;
}

template<class T>
Var<T>::operator int()
{
	return obj;
}

template<class T>
Var<T>::operator string()
{
	return to_string(obj);
}

template<class T>
Var<T>::operator double()
{
	return obj;
}


template<>
class Var<string>
{
	bool isString = true;
	string obj;
public:
	Var(string a);
	Var(const char* a);
	Var() {}

	void Show();
	Var<string>& operator=(int o);
	Var<string>& operator=(double o);
	Var<string>& operator=(const char* o);

	Var<string> operator+(int o);
	Var<string> operator+(double o);
	Var<string> operator+(Var<string>& o);
	Var<string> operator*(Var<string>& o);
	Var<string> operator/(Var<string>& o);


	operator int();
	operator string();
	operator double();
};



Var<string>::Var(string a)
{
	obj = a;
}

Var<string>::Var(const char* a)
{
	string t = a;
	obj = t;
}

void Var<string>::Show()
{
	cout << obj << endl;
}

Var<string>& Var<string>::operator=(int o)
{
	obj = to_string(o);
	return *this;
}

Var<string>& Var<string>::operator=(double o)
{
	obj = to_string(o);
	return *this;
}

Var<string>& Var<string>::operator=(const char* o)
{
	obj = o;
	return *this;
}

Var<string> Var<string>::operator+(int o)
{
	Var<string> rez;
	rez = obj +to_string(o);
	return rez;
}

Var<string> Var<string>::operator+(double o)
{
	Var<string> rez;
	rez = obj + to_string(o);
	return rez;
}

Var<string> Var<string>::operator+(Var<string>& o)
{
	Var<string> rez;
	rez = obj + o.obj;
	return rez;
}

Var<string> Var<string>::operator*(Var<string>& o)
{
	Var<string> rez;
	for (int i = 0; i < strlen(obj.c_str()); i++) {
		for (int j = 0; j < strlen(o.obj.c_str()); j++) {
			if (obj[i] == o.obj[j]) { rez.obj += o.obj[j]; }
		}
	}
	return rez;
}

Var<string> Var<string>::operator/(Var<string>& o)
{
	Var<string> rez;
	bool cor = true;
	for (int i = 0; i < strlen(obj.c_str()); i++, cor = true) {
		for (int j = 0; j < strlen(o.obj.c_str()); j++) {
			if (obj[i] == o.obj[j]) { cor = false; }
		}
		if(cor){ rez.obj += obj[i]; }
	}
	return rez;
}

Var<string>::operator int()
{
	return stoi(obj);
}

Var<string>::operator string()
{
	return obj;
}


Var<string>::operator double()
{
	return stoi(obj);
}