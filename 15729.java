import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int N,rtn=0;
	static boolean[] arr;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		arr = new boolean[N];
		st = new StringTokenizer(br.readLine());
		for(int i=0;i<N;i++) {
			if(Integer.parseInt(st.nextToken())==1) {
				arr[i]= true;
			}else {
				arr[i] = false;
			}
		}
		for(int i=0;i<N;i++) {
			if(arr[i]==true) {
				rtn++;
				if(i<N-2) {
					arr[i+1]=!arr[i+1];
					arr[i+2]=!arr[i+2];
				}else if(i==N-2) {
					arr[i+1]=!arr[i+1];
				}
				
			}
		}
		bw.write(Integer.toString(rtn));
		bw.flush();
		bw.close();
	}
}
