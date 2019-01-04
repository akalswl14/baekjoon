import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int[] num = new int[10001];

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int cnt = 1;
		int rtn = 0;
		while (true) {
			if (cnt > N) {
				break;
			}
			if(calculate(cnt)==1) {
				rtn ++;
			}
			cnt++;
		}
		bw.write(Integer.toString(rtn));
		bw.flush();
		bw.close();
	}

	public static int calculate(int num) {
		int diff = 10;
		int diff_tmp;
		if (num == 1000) {
			if(num%1000/100==0) {
				return 0;
			}
			diff_tmp = num / 1000 - num % 1000 / 100;
			if (diff == 10) {
				diff = diff_tmp;
			}
			if (diff_tmp != diff) {
				return 0;
			}
			num %= 1000;
		}
		if (num >= 100) {
			if(num%100/10==0) {
				return 0;
			}
			diff_tmp = num / 100 - num % 100 / 10;
			if (diff == 10) {
				diff = diff_tmp;
			}
			if (diff_tmp != diff) {
				return 0;
			}
			num %= 100;
		}
		if (num >= 10) {
			diff_tmp = num / 10 - num % 10;
			if (diff == 10) {
				diff = diff_tmp;
			}
			if (diff_tmp != diff) {
				return 0;
			}
			num %= 10;
		}
		return 1;
	}
}
