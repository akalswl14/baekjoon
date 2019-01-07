import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int[] abc = new int[27];
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		String x = st.nextToken();
		for(int i=0;i<26;i++) {
			abc[i]=-1;
		}
		for(int i=0;i<x.length();i++) {
			if(abc[x.charAt(i)-97]==-1) {
				abc[x.charAt(i)-97] = i;
			}
		}
		for(int i=0;i<26;i++) {
			bw.write(Integer.toString(abc[i]));
			bw.write(" ");
		}
		bw.flush();
		bw.close();
	}
}
