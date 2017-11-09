        #include <stdio.h>

        int main()

        {

            int a[5] = {1, 2, 3, 4, 53};

            int i;

            for (i = 0; i < 5; i++)

                if (a[i] == '5')

                    printf("%d\n", a[i]);

                else

                    printf("FAIL\n");

        }
