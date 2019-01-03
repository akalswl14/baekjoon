import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String[] array = br.readLine().trim().split(" ");
		int N = Integer.parseInt(array[0]);
		int X = Integer.parseInt(array[1]);
		String[] num = br.readLine().trim().split(" ");
		for (int i = 0; i < N; i++) {
			int A = Integer.parseInt(num[i]);
			if(A<X) {
				bw.write(Integer.toString(A)+" ");
			}
		}
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
