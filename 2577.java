import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int n=1;
	static int[] number = new int[11];
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		n *= Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		n *= Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		n *= Integer.parseInt(st.nextToken());
		String num = Integer.toString(n);
		for(int i=0;i<num.length();i++) {
			number[num.charAt(i)-'0']++;
		}
		for(int i=0;i<10;i++) {
			bw.write(Integer.toString(number[i]));
			bw.newLine();
		}
		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
