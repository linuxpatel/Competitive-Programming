class Solution {
public:
    int reverse(signed int x) {
        long long rev = 0;
        while(x!=0)
        {
           rev=rev*10 + x%10;
           x=x/10;
        }
    return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
    //Explaination below for adding the obe statement
    }
};

/*My prev code*/

// int reverse(signed int x) {
//     long long rev = 0;
//     while(x!=0)
//     {
//        rev=rev*10 + x%10;
//        x=x/10;
//     }
// return rev;

/*For example, if 'b = a * 10' causes overflow, 'b' will be equal to a strange
pseudo-random number. So 'b/10' will not be equal to 'a' anymore. This while 
loop will never end*/
