import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int T,H,W,N,ans;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		T = Integer.parseInt(st.nextToken());
		for(int i=0;i<T;i++) {
			st = new StringTokenizer(br.readLine());
			H = Integer.parseInt(st.nextToken());
			W = Integer.parseInt(st.nextToken());
			N = Integer.parseInt(st.nextToken());
			if(N%H==0) {
				ans = N/H + H*100;
			}else {
				ans = N/H+1 +N%H*100;
			}
			bw.write(Integer.toString(ans));
			bw.newLine();
		}
		bw.flush();
		bw.close();
		return ;
	}
}
