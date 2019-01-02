import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		String inp = s.next();
		int ans=0;
		for(int i=0;i<N;i++) {
			ans+=Integer.parseInt(inp.substring(i, i+1));
		}
		System.out.println(ans);
		s.close();
	}

}
