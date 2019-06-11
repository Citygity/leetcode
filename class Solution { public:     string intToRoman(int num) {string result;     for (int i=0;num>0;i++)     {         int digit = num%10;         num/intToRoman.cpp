class Solution {
public:
    string intToRoman(int num) {string result;
    for (int i=0;num>0;i++)
    {
        int digit = num%10;
        num /=10;
        if (i==0)
        {
            if (digit==0)
                continue;
            if (digit<=3)
                result.insert(0,digit,'I');
            if (digit==4)
                result.insert(0,"IV");
            if (digit==5)
                result.insert(0,"V");
            if (digit>=6&&digit<9){
                result.insert(0,digit-5,'I');
                result.insert(0,"V");
            }
            if (digit==9)
                result.insert(0,"IX");
        }
        if (i==1)
        {
            if (digit==0)
                continue;
            if (digit<=3)
                result.insert(0,digit,'X');
            if (digit==4)
                result.insert(0,"XL");
            if (digit==5)
                result.insert(0,"L");
            if (digit>=6&&digit<9){
                result.insert(0,digit-5,'X');
                result.insert(0,"L");
            }
            if (digit==9)
                result.insert(0,"XC");
        }
        if (i==2)
        {
            if (digit==0)
                continue;
            if (digit<=3)
                result.insert(0,digit,'C');
            if (digit==4)
                result.insert(0,"CD");
            if (digit==5)
                result.insert(0,"D");

            if (digit>=6&&digit<9){
                result.insert(0,digit-5,'C');
                result.insert(0,"D");
            }
            if (digit==9)
                result.insert(0,"CM");
        }
        if (i==3)
        {
            if (digit==0)
                continue;
            if (digit<=3)
                result.insert(0,digit,'M');
        }
    }
    return result;
    }
};
