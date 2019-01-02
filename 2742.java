import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		for(int i=N;i>0;i--) {
			System.out.println(i);
		}
		s.close();
	}

}
