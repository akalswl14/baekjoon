import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String test = st.nextToken();
			int cnt = 0;
			int now = 0;
			for(int j=0;j<test.length();j++) {
				if(test.charAt(j)=='O') {
					if(now == 0) {
						now = 1;
						cnt += now;
					}
					else {
						now ++;
						cnt += now;
					}
				}
				else {
					now = 0;
				}
			}
			bw.write(Integer.toString(cnt));
			bw.newLine();
		}
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
