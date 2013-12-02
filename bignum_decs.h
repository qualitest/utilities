#ifndef BIGNUM_DECS_H
#define BIGNUM_DECS_H

class bigNumber
{
	public:
		bigNumber(vector<int> n);
		bigNumber();
		bigNumber(int n);
		~bigNumber() {};    

		int getDigit(int n) {return digits[n];}
		void setDigit(int n, int s) {digits[n] = s;}
		int getDigitCount();
		int getDecimalCount();
		int printNumber();
		void printStats();
		bool getNegative() {return negative;}
		void updateDigits();
		void adjustPrecision(int n);
		void query (int n);

		void timesTen (int n);
		void divideByTen (int n);
		
		void setNegative() {negative = true;}
		void setPositive() {negative = false;}
		
		bool operator < (bigNumber b); 
		bool operator <= (bigNumber b); 
		bool operator < (int n);
		bool operator <= (int n);

		bool operator > (bigNumber b);
		bool operator >= (bigNumber b);
		bool operator > (int n);
		bool operator >= (int n);

		bool operator == (bigNumber b); 
		bool operator == (int n);   
		bool operator != (bigNumber b);
		bool operator != (int n); 

		void operator += (bigNumber b);    
		void operator -= (bigNumber b);
		void operator *= (bigNumber b);
		void operator /= (bigNumber b);
		void operator -- (int);
		void operator = (bigNumber b);

		bigNumber operator * (bigNumber b);
		bigNumber operator * (int n);
		bigNumber operator / (bigNumber b);
		bigNumber operator / (int n);
		bigNumber operator + (bigNumber b);
		bigNumber operator + (int n);
		bigNumber operator - (bigNumber b);
		bigNumber operator - (int n);
		bigNumber absolute();
		bigNumber noDecimal();

		void decrement();

	private:
		int digits[MAXDIGITS];
		int digitCount;
		int decimalCount;
		bool negative;
};

#endif