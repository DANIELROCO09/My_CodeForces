import java.io.*;
import java.util.*;

public class ElisasBoxes {
    static class FastReader {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try { st = new StringTokenizer(br.readLine()); }
                catch (IOException e) { e.printStackTrace(); }
            }
            return st.nextToken();
        }
        int nextInt() { return Integer.parseInt(next()); }
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        PrintWriter out = new PrintWriter(System.out);

        int N=fr.nextInt();
        int M=fr.nextInt();

        int[] boxes=new int[N];
        for(int i=0;i<N;i++){
        	boxes[i]=fr.nextInt();
        }

        boolean band = false;
        for(int i=0;i<N;i++){
        	if(boxes[i]>=M){
        		out.println(i+1);
        		band=true;
        		break;
        	}
        }

        if(band!=true){
        	out.println(-1);
        }

        out.flush();
    }
}