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
		int mel = Integer.parseInt(st.nextToken());
		int cnt = mel;
		int up = 1;
		if(cnt==8) {
			up = 0;
		}
		for(int i=0;i<7;i++) {
			mel = Integer.parseInt(st.nextToken());
			if(up==1) {
				cnt++;
			}
			else {
				cnt--;
			}
			if(cnt!=mel) {
				bw.write("mixed");
				bw.flush();
				bw.close();
				return;
			}
		}
		if(up==1) {
			bw.write("ascending");
		}
		else {
				bw.write("descending");
		}
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
