#include "Fraction.h"
#include<iostream>
using namespace std;
Fraction :: Fraction() {
}
Fraction:: Fraction(double mricx, double mnish, double mricx2, double mnish2){
	this->mricx = mricx;
	this->mnish = mnish;
	this->mricx = mricx2;
	this->mnish = mnish2;
}
void Fraction :: Addition() {
	cout << ((mricx * mnish2) + (mricx2 * mnish)) << " / " << mnish * mnish2 << endl;
}
void Fraction :: Subtraction() {
	cout << ((mricx * mnish2) - (mricx2 * mnish)) << " / " << mnish * mnish2 << endl;
}
void Fraction :: Multiplication() {
	cout << (mricx * mricx2) << " / " << (mnish * mnish2) << endl;
}
void Fraction :: Division() {
	cout << (mricx * mnish2) << " / " << (mricx2 * mnish) << endl;
}