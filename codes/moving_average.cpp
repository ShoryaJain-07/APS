#include <bits/stdc++.h>
using namespace std;

class SimpleMovingAverage {

queue<double> Dataset;
int period;
double sum;

public:
SimpleMovingAverage(int per) { period = per; }


void addData(double num)
{
	sum += num;
	Dataset.push(num);

	if (Dataset.size() > period) {
	sum -= Dataset.front();
	Dataset.pop();
	}
}

double getMean() { return sum / period; }
};

int main()
{
double input_data[]
	= { 1, 3, 5, 6, 8, 12, 18, 21, 22, 25 };
int per = 3;
SimpleMovingAverage obj(per);
for (double x : input_data) {
	obj.addData(x);
	cout << "New number added is " << x
	<< ", SMA = " << obj.getMean() << endl;
}
}

