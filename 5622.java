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
		for (int i = 0; i < word.length(); i++) {
			c = word.charAt(i);
			if(c=='A'||c=='B'||c=='C') {
				cnt += 3;
			}else if(c=='D'||c=='E'||c=='F') {
				cnt += 4;
			}else if(c=='G'||c=='H'||c=='I') {
				cnt += 5;
			}else if(c=='J'||c=='K'||c=='L') {
				cnt += 6;
			}else if(c=='M'||c=='N'||c=='O') {
				cnt += 7;
			}else if(c=='P'||c=='Q'||c=='R'||c=='S') {
				cnt += 8;
			}else if(c=='T'||c=='U'||c=='V') {
				cnt += 9;
			}else if(c=='W'||c=='X'||c=='Y'||c=='Z') {
				cnt += 10;
			}
		}

	bw.write(Integer.toString(cnt));bw.flush();
	bw.close();
}}
