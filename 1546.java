import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Double N = Double.parseDouble(br.readLine().trim());
		String[] num = br.readLine().trim().split(" ");
		Double score = 0.0;
		Double M = 0.0;
		for (int i = 0; i < N; i++) {
			Double now = Double.parseDouble(num[i]);
			if (M == 0.0) {
				M = now;
			} else {
				if (M < now) {
					M = now;
				}
			}
		}
		for(int i=0;i<N;i++) {
			Double now = Double.parseDouble(num[i]);
			score += now/M*100.0;
		}
		score /= N;
		bw.write(Double.toString(score));
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
