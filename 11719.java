import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s  =new Scanner(System.in);
		while(s.hasNextLine()) {//행이 있는지 확인 후 boolean을 리턴합니다. 줄바뀜이 있으면 true를 리턴합니다.
			String inp = s.nextLine();
			System.out.println(inp);
		}
		s.close();
	}
}
