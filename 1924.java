import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int x, y;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		x = Integer.parseInt(st.nextToken());
		y = Integer.parseInt(st.nextToken());
		for (int i = 1; i < x; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				y += 31;
			} else if (i == 4 || i == 6 || i == 9 || i == 11) {
				y += 30;
			} else {
				y += 28;
			}
		}
		if (y % 7 == 1) {
			bw.write("MON");
		} else if (y % 7 == 2) {
			bw.write("TUE");
		} else if (y % 7 == 3) {
			bw.write("WED");
		} else if (y % 7 == 4) {
			bw.write("THU");
		} else if (y % 7 == 5) {
			bw.write("FRI");
		} else if (y % 7 == 6) {
			bw.write("SAT");
		} else {
			bw.write("SUN");
		}
		bw.flush();
		bw.close();
		return;
	}
}
