import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int N;
	static long sum=0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		for(int i=N;i>0;i--) {
			for(int j=i;j>0;j--) {
				sum+=j;
			}
		}
		for(int i=N-1;i>0;i-=2) {
			for(int j=i;j>0;j--) {
				sum+=j;
			}
		}
		bw.write(Long.toString(sum));
		bw.flush();
		bw.close();
	}
}
