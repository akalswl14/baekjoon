import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int month = s.nextInt();
		int day = s.nextInt();
		int sum = 0;
		for(int i=1;i<month;i++) {
			if(i==4||i==6||i==9||i==11) {
				sum+=30;
			}
			else if(i==2) {
				sum+=28;
			}
			else {
				sum+=31;
			}
		}
		sum+=day;
		sum%=7;
		if(sum==1) {
			System.out.println("MON");
		}
		else if(sum==2) {
			System.out.println("TUE");
		}
		else if(sum==3) {
			System.out.println("WED");
		}
		else if(sum==4) {
			System.out.println("THU");
		}
		else if(sum==5) {
			System.out.println("FRI");
		}
		else if(sum==6) {
			System.out.println("SAT");
		}
		else{
			System.out.println("SUN");
		}
		
		s.close();
	}

}
