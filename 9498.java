import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(br.readLine().trim());// trim() : 왼쪽, 오른쪽 공백제거해줌.
		if (n >= 90 && n <= 100) {
			bw.write("A");
		}
		else if (n >= 80 && n <= 89) {
			bw.write("B");
		}
		else if (n >= 70 && n <= 79) {
			bw.write("C");
		}
		else if (n >= 60 && n <= 69) {
			bw.write("D");
		}
		else {
			bw.write("F");
		}
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
