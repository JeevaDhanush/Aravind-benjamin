package guvi;

import java.util.Scanner;

public class seed {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String a=sc.next();
		sc.close();
		int d=1;
		int[] b=new int [a.length()];
		for(int i=0;i<a.length();i++){
			b[i]=Integer.parseInt(String.valueOf(a.charAt(i)));
			d=d*b[i];
		}
		int q=d*Integer.valueOf(a);
		System.out.println(q);
			}
	}
