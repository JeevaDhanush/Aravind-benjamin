package handson;

public class QEwr {
	public static void main(String[] args) {
		String a="code".toUpperCase();
		String b="kata".toUpperCase();
		String c="";
		String d="";
		char []a1=a.toCharArray();
		char[]b1=b.toCharArray();
		for (int i = 0; i < a1.length; i++) {
			int m=a1[i]+10;
			c+=(char)m;
		}
		for (int i = 1; i < b1.length-1; i++) {
			int m=b1[i]+10;
			if(m>90)
				m+=6;
			d+=(char)m;
		}
		d=b1[0]+d+b1[b1.length-1];
		System.out.println(c.toLowerCase()+" "+d.toLowerCase());
	}
}
