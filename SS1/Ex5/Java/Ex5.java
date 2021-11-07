import java.util.Random;

public class Ex5 {
    public static void maxRand(int []a,int n){
        while(true)
        {
            Random r2 = new Random();
            int value = r2.nextInt();
            System.out.println(value);
           for (int i = 0; i < n; i++)
            {
                if (a[0] == 0)
		{
                    a[0] = a[1];
		    n--;
		}
		a[n] = value;
            }
            n = n + 1;
            int tg;
            for (int i = 0; i < n; i++)
	    {
		for (int j = i + 1; j < n; j++)
		{
		    if (a[i] < a[j])
                    {
			tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		    }
		}
	    }
            System.out.println("3 So tri lon nhat: " + a[0] + "," + a[1] + "," + a[2]);
            try{
                Thread.sleep(5000); 
            }
             catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }

    public static void main(String[] args)
    {
        int[] a = new int[100];
        maxRand(a,1);
    }
}