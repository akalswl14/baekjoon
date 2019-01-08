import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int x = 0;
	static int y = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < 2; i++) {
			int N = Integer.parseInt(st.nextToken());
			if (x != 0) {
				y += N / 100;
				N %= 100;
				y += N / 10 * 10;
				N %= 10;
				y += N * 100;
			} else {
				x += N / 100;
				N %= 100;
				x += N / 10 * 10;
				N %= 10;
				x += N * 100;
			}
		}
		if(x<y) {
			x=y;
		}
		bw.write(Integer.toString(x));
		bw.flush();
		bw.close();
	}
}
