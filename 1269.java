import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int[] arr = new int[100000001];
	static int len_A;
	static int len_B;
	static int tmp;
	static int sum = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		len_A = Integer.parseInt(st.nextToken());
		len_B = Integer.parseInt(st.nextToken());
		sum = len_A;
		st = new StringTokenizer(br.readLine());
		for(int i=0;i<len_A;i++) {
			tmp = Integer.parseInt(st.nextToken());
			arr[tmp] = 1;
		}
		st = new StringTokenizer(br.readLine());
		for(int i=0;i<len_B;i++) {
			tmp = Integer.parseInt(st.nextToken());
			if(arr[tmp]==0) {
				sum++;
			}
			arr[tmp]++;
		}
		bw.write(Integer.toString(sum*2-len_A-len_B));
		bw.flush();
		bw.close();
	}
}
