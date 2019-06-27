import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static String A;
	static String B;
	static int len_A;
	static int len_B;
	static int tmp_a;
	static int tmp_b;
	static long sum = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		A = st.nextToken();
		B= st.nextToken();
		len_A = A.length();
		len_B = B.length();
		for(int i=0;i<len_A;i++) {
			tmp_a = Character.getNumericValue(A.charAt(i));
			for(int j=0;j<len_B;j++) {
				tmp_b = Character.getNumericValue(B.charAt(j));
				sum += tmp_a*tmp_b;
			}
		}
		bw.write(Long.toString(sum));
		bw.flush();
		bw.close();
	}
}

