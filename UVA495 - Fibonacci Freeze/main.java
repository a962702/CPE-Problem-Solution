import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class main{
	public static void main(String args[]){
		ArrayList<BigInteger> F = new ArrayList<>();
		F.add(BigInteger.ZERO);
		F.add(BigInteger.ONE);
		for(int i = 2; i <= 5000; i++)
			F.add(F.get(i - 1).add(F.get(i - 2)));
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			int in = sc.nextInt();
			System.out.println("The Fibonacci number for " + in + " is " + F.get(in));
		}
	}
}