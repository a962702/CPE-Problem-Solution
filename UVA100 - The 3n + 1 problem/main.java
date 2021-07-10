import java.util.Scanner;

public class main{
	private static int alg(int n){
		int count = 1;
		while(n!=1){
			if(n%2 == 1) n = 3 * n + 1;
			else n = n / 2;
			count++;
		}
		return count;
	}

	public static void main(String[] args){
		int i, j;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			i = sc.nextInt();
			j = sc.nextInt();
			System.out.print(i + " " + j);
			if(i > j){
				int tmp = i;
				i = j;
				j = tmp;
			}
			int ans = 0;
			do{
				int tmp = alg(i);
				ans = (tmp > ans)?tmp:ans;
			}while(++i<=j);
			System.out.println(" " + ans);
		}
	}
}