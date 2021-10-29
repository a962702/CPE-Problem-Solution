import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class main{
	public static void main(String args[]){
		ArrayList<BigInteger> arr = new ArrayList<>();
		arr.add(BigInteger.ONE);
		arr.add(BigInteger.ONE);
		for(int i = 2; i <= 1000; i++){
			arr.add(arr.get(i - 1).multiply(BigInteger.valueOf(i)));
		}
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			String s = arr.get(sc.nextInt()).toString();
			int total = 0;
			for(int i = 0; i < s.length(); i++){
				total += Integer.parseInt(s.charAt(i) + "");
			}
			System.out.println(total);
		}
	}
}