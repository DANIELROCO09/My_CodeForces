import java.io.*;
import java.util.*;

public class Electrocardiograms{
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

        String s=fr.next();
        int n=fr.nextInt();
        while(n-->0){
        	String p=fr.next();

        	if(p.length()%s.length()!=0){
        		out.println("No");
        	}else{
        		StringBuilder cardio = new StringBuilder();
        		for(int i=0;i<p.length()/s.length();i++){
        			cardio.append(s);
        		}
        		if(p.equals(cardio.toString())){
        			out.println("Yes");
        		}else{
        			out.println("No");
        		}
        	}
        }
        out.flush();
    }
}