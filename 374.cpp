/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long int i=0,m;
        while(i<n)
        {
            m=((i+n)+1)/2;
            if(guess(m)==0)
                return m;
            else if(guess(m)==-1)
                n=m;
            else
                i=m;
        }
        return m;
    }
};
