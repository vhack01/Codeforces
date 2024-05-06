import java.util.*;
import java.util.Scanner;

public
class Main
{
    static final int MOD = (int)1e9 + 7;

    static boolean checkNeg(int[] arr)
    {
        for (int num : arr)
        {
            if (num > 0)
            {
                return false;
            }
        }
        return true;
    }

    static void solve()
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = scanner.nextInt();
        }

        if (checkNeg(arr))
        {
            int sum = 0;
            for (int num : arr)
            {
                sum = ((sum % MOD) + (num % MOD) + MOD) % MOD;
            }
            System.out.println(sum);
        }
        else
        {
            int mxSum = 0;
            for (int num : arr)
            {
                mxSum = (mxSum % MOD + num % MOD) % MOD;
            }

            int mx = 0, sum = 0;
            for (int num : arr)
            {
                sum = (sum % MOD + num % MOD) % MOD;
                if (sum < 0)
                {
                    sum = 0;
                }
                mx = Math.max(mx, sum) % MOD;
            }
            mxSum = (mxSum % MOD + mx % MOD) % MOD;
            for (int i = 0; i < k - 1; i++)
            {
                mx = (mx % MOD * 2) % MOD;
                mxSum = (mxSum % MOD + mx % MOD) % MOD;
            }
            System.out.println(mxSum % MOD);
        }
    }

public
    static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0)
        {
            solve();
        }
    }
}
