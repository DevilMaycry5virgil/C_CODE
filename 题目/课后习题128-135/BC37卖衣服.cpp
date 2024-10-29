#include <stdio.h>

int main()
    {
        float val = 0;
        int month = 0;
        int day = 0;
        int quan = 0;
        scanf("%f %d %d %d",&val,&month,&day,&quan);
        if(month == 11 && day == 11)
        {
            val = val * 0.7;
            if(quan == 1)
            val = val - 50.0;
            if(val < 0)
            val = 0;
        }
        else if(month == 12 && day == 12)
        {
            val = val * 0.8;
             if(quan == 1)
            val = val - 50.0;
            if(val < 0)
            val = 0;
        }
        else 
        {
           val = val - 50.0;
            if(val < 0)
            val = 0;   
        }
        
        printf("%.2f",val);
          return 0;
    }
   
