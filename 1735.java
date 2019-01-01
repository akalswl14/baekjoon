import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);	
		long a_j = sc.nextLong();
		long a_m = sc.nextLong();
		long b_j = sc.nextLong();
		long b_m = sc.nextLong();
		
		long m = a_m * b_m;
		long j = a_m * b_j + b_m * a_j;
		
		if(j==0) {
			System.out.println("0 1");
			System.exit(0);
		}
		long _gcd = gcd(m, j);
		//System.out.println(_gcd);
		System.out.println(j/_gcd +" "+m/_gcd);	
		
	}
	static long gcd(long a, long b) {
		if (b>a) return gcd(b,a);
		if(a%b==0) return b;
		else  return gcd(b, a%b);
	}	
}
