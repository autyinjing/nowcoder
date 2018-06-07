class Solution {
public:
	int getSum(int a, int b) {
		//a=51(10)=110011(2)=1+2+16+32
		//b=43(10)=101011(2)=1+2+8+32
		//a^b=011000(2)=8+16
		//a&b=100011(2)=1+2+32
		//(a&b)<<1=1000110(2)=(1+2+32)*2
		//a+b=(8+16)+(1+2+32)*2=(a^b)+(a&b)<<1
		return (b == 0) ? a : getSum((a ^ b), (a & b) << 1);
	}
};