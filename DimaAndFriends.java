import java.util.Scanner;

public class DimaAndFriends {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); // Número de amigos
        int sumFriends = 0; // Suma de los dedos de los amigos
        for (int i = 0; i < n; i++) {
            sumFriends += scanner.nextInt();
        }
        int totalPeople = n + 1; // Dima + amigos
        int count = 0; // Contador de formas en que Dima no limpia
        for (int dimaFingers = 1; dimaFingers <= 5; dimaFingers++) {
            int totalFingers = sumFriends + dimaFingers;
            int selectedPosition = (totalFingers - 1) % totalPeople;
            if (selectedPosition != 0) { // 0 es Dima
                count++;
            }
        }
        System.out.println(count);
    }
}