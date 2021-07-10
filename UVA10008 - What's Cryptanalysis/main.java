import java.util.Scanner;
import java.lang.Character;

public class main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		int[] count = new int[26];
		while(n>0){
			n--;
			String str = sc.nextLine();
			for(int i = 0; i < str.length(); i++){
				if(Character.isLetter(str.charAt(i))){
					char s = Character.toUpperCase(str.charAt(i));
					count[s-'A']++;
				}
			}
		}
		sc.close();
		while(true){
			int max = 0;
			for(int i = 0; i < 26; i++){
				if(count[i]>max) max = count[i];
			}
			if(max == 0) break;
			for(int i = 0; i < 26; i++){
				if(count[i] == max){
					System.out.println((char)(i + 'A') + " " + count[i]);
					count[i] = 0;
				}
			}
		}
	}
}