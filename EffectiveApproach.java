import java.io.*;
import java.util.*;

public class EffectiveApproach {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        int n = Integer.parseInt(br.readLine());
        int[] a = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(st.nextToken());
        }

        int[] pos = new int[n + 1]; // since elements are from 1 to n
        for (int i = 0; i < n; i++) {
            pos[a[i]] = i + 1; // 1-based position
        }

        int m = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        long vasya = 0;
        long petya = 0;
        for (int i = 0; i < m; i++) {
            int b = Integer.parseInt(st.nextToken());
            int p = pos[b];
            vasya += p;
            petya += n - p + 1;
        }

        pw.println(vasya + " " + petya);
        pw.flush();
    }
}