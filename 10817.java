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
		int a = Integer.parseInt(array[0]);
		int ans = a, big=0, small=0; 
		for (int i = 1; i <= 2; i++) {
			a = Integer.parseInt(array[i]);
			if(a<ans) {
				if(small==0) {
					small = a;
				}
				else {
					if(small<a) {
						big = ans;
						ans = a;
					}
					else {
						big = ans;
						ans = small;
						small = a;
					}
				}
			}
			else {
				if(big==0) {
					big = a;
				}
				else {
					if(big>a) {
						small = ans;
						ans = a;
					}
					else {
						small = ans;
						ans = big;
						big = a;
					}
				}
			}
		}
		bw.write(Integer.toString(ans));

		bw.flush();// flush()는 현재 버퍼에 저장되어 있는 내용을 클라이언트로 전송하고 버퍼를 비운다.
		bw.close();
	}
}
