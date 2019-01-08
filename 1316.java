import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int cnt = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			String word = st.nextToken();
			int[] abc = new int[26];
			char c = ' ';
			int isgroup = 1;
			for (int j = 0; j < word.length(); j++) {
				if (c == ' ') {
					c = word.charAt(j);
					abc[word.charAt(j) - 97] = 1;
				} else if (c != word.charAt(j)) {
					c = word.charAt(j);
					if (abc[word.charAt(j) - 97] == 1) {
						isgroup = 0;
					} else {
						abc[word.charAt(j) - 97] = 1;
					}
				}
			}
			if (isgroup == 1) {
				cnt++;
			}
		}
		bw.write(Integer.toString(cnt));
		bw.flush();
		bw.close();
	}
}
