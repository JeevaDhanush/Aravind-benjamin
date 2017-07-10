package guvi;

import java.util.Arrays;
import java.util.Scanner;

public class Del {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String a=sc.next();
		int num=sc.nextInt();
		int b=a.length();
		int []c=new int[b];	
		sc.close();
		try{
		for(int i=0;i<b;i++)
		{
			c[i]=Integer.valueOf(String.valueOf(a.charAt(i)));
		}
		Arrays.sort(c);
		int d=b-num;
		for(int k=0;k<d;k++){
				System.out.print(c[k]);
		}
		}catch (Exception e){
			System.out.println("The entered string is word not a number\n please enter the number:)");
		}
	}

}
