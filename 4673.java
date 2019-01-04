import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class Main {
	static int[] num = new int[10001];
	public static void main(String[] args) throws IOException {
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int cnt = 1;
		while (true) {
			if (cnt > 10000) {
				break;
			}
			int tmp = calculate(cnt);
			if(tmp<=10000) {
				num[tmp] = 1;
			}
			cnt++;
		}
		cnt = 1;
		while (true) {
			if (cnt > 10000) {
				break;
			}
			if (num[cnt] == 0) {
				bw.write(Integer.toString(cnt));
				bw.newLine();
			}
			cnt++;
		}
		bw.flush();
		bw.close();
	}

	public static int calculate(int num) {
		int rtn = num;
		if (num >= 10000) {
			rtn += num / 10000;
			num %= 10000;
		}
		if (num >= 1000) {
			rtn += num / 1000;
			num %= 1000;
		}
		if (num >= 100) {
			rtn += num / 100;
			num %= 100;
		}
		if (num >= 10) {
			rtn += num / 10;
			num %= 10;
		}
		return rtn + num;
	}
}
