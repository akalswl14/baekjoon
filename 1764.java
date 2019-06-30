import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static ArrayList<String> arrlist = new ArrayList<String>();
	static ArrayList<String> rtn = new ArrayList<String>();
	static String[] arr;
	static int N;
	static int M;
	static int sum = 0;
	static String tmp;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			arrlist.add(st.nextToken());
		}
		Collections.sort(arrlist);
		arr = new String[N];
		arr = arrlist.toArray(arr);
		for(int i=0;i<M;i++) {
			st = new StringTokenizer(br.readLine());
			tmp = st.nextToken();
			if(Arrays.binarySearch(arr, tmp)>=0) {
				rtn.add(tmp);
				sum++;
			}
		}
		Collections.sort(rtn);
		bw.write(Integer.toString(sum));
		bw.newLine();
		for(int i=0;i<sum;i++) {
			bw.write(rtn.get(i));
			bw.newLine();
		}
		bw.flush();
		bw.close();
	}
}
