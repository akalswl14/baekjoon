import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String inp = s.next();
		for (int i = 1; i <= inp.length(); i++) {
			System.out.print(inp.charAt(i-1));
			if (i != 0 && i % 10 == 0) {
				System.out.println();
			}
		}
		s.close();
	}

}
