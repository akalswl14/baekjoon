import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int[] abc = new int[26];
	static int cnt = 0;
	static char c;
	static int same = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		String word = st.nextToken();
		word = word.toUpperCase();
		for (int i = 0; i < word.length(); i++) {
			abc[word.charAt(i) - 65]++;
		}
		for (int i = 0; i < 26; i++) {
			if (abc[i] > cnt) {
				cnt = abc[i];
				c = (char) (i + 65);
				same = 0;
			} else if (abc[i] == cnt && cnt != 0) {
				same = 1;
			}
		}
		if (same == 1) {
			bw.write("?");
		} else {
			bw.write(c);
		}
		bw.flush();
		bw.close();
	}
}
