import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int min = -1;
		int n_x = 0;
		int n_y = 0;
		while (true) {
			if (3 * n_x >= N) {
				break;
			}
			n_x++;
		}
		while (true) {
			if (3 * n_y >= N) {
				break;
			}
			n_y++;
		}
		for (int i = 0; i <= n_x; i++) {
			int k = (N - 3 * i) / 5;
			if (3 * i + 5 * k == N) {
				if ((i + k < min || min == -1 )&& k >= 0) {
					min = i + k;
				}
			}
		}
		for (int i = 0; i <= n_y; i++) {
			int k = (N - 5 * i) / 3;
			if (3 * k + 5 * i == N) {
				if ((i + k < min || min == -1 )&& k >= 0) {
					min = i + k;
				}
			}
		}
		System.out.println(min);
		s.close();
	}

}
