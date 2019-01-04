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
		int tmp_n = N;
		int cnt=0;
		while(true) {
			tmp_n = calculate(tmp_n);
			cnt++;
			if(tmp_n == N) {
				break;
			}
		}
		bw.write(Integer.toString(cnt));
		bw.flush();
		bw.close();
	}
	public static int calculate(int num) {
		if(num<10) {
			return num*10+num;
		}
		else {
			return num%10*10+((num/10+num%10)%10);
		}
	}
}
