import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		st = new StringTokenizer(br.readLine());
		int C = Integer.parseInt(st.nextToken());
		for (int i = 0; i < C; i++) {
			st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken());
			int[] num = new int[1000];
			int score = 0;
			for (int j = 0; j < N; j++) {
				num[j] = Integer.parseInt(st.nextToken());
				score += num[j];
			}
			score /= N;
			Double pcn = 0.0;
			for (int j = 0; j < N; j++) {
				if(num[j]>score) {
					pcn++;
				}
			}
			double rtn = pcn/N*100.00;
			System.out.printf("%.3f",rtn);
			System.out.println("%");
		}
	}
}
