import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int cnt = 1, turn = 1, location = 1, mom = 1, son = 1;
	static boolean plus = false;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		while (true) {
			if (N == location) {
				bw.write(son + "/" + mom);
				bw.flush();
				bw.close();
				return;
			}
			if (location == turn) {
				plus = !plus;
				cnt++;
				turn += cnt;
				location++;
				if (plus == true) {
					mom++;
				} else {
					son++;
				}
				if (N == location) {
					bw.write(son + "/" + mom);
					bw.flush();
					bw.close();
					return;
				}
			} else {
				location++;
				if (plus == true) {
					mom--;
					son++;
				} else {
					mom++;
					son--;
				}
			}
		}
	}
}
