import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int cnt = 0;
	static char c;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		String word = st.nextToken();
		int N = word.length();
		for (int i = 0; i < N; i++) {
			c = word.charAt(i);
			if (c == 'c') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == '=') {
						i++;
					} else if (word.charAt(i + 1) == '-') {
						i++;
					}
				}
			} else if (c == 'd') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == '-') {
						i++;
					} else if (word.charAt(i + 1) == 'z' && (i < N - 2)) {
						if (word.charAt(i + 2) == '=') {
							i += 2;
						}
					}
				}
			} else if (c == 'l') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == 'j') {
						i++;
					}
				}
			} else if (c == 'n') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == 'j') {
						i++;
					}
				}
			} else if (c == 's') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == '=') {
						i++;
					}
				}
			} else if (c == 'z') {
				if (i < N - 1) {
					if (word.charAt(i + 1) == '=') {
						i++;
					}
				}
			}
			cnt++;
		}

		bw.write(Integer.toString(cnt));
		bw.flush();
		bw.close();
	}
}
