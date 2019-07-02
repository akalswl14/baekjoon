import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static String s;
	static char tmp;
	static int rtn=0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		s = st.nextToken();
		for(int i=0;i<s.length();i++) {
			tmp = s.charAt(i);
			if(tmp == 'x') {
				if(i==0) {
					rtn = 1;
				}else if(s.charAt(i-1)=='-') {
					rtn = -1;
				}
				else {
					rtn = Integer.parseInt(s.substring(0, i));
				}
				i = s.length()+1;
				break;
			}
		}
		bw.write(Integer.toString(rtn));
		bw.flush();
		bw.close();
	}
}
