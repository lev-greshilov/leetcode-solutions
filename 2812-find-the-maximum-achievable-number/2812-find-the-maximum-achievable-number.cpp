class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        /*
        Function will return x, which is the most achivable number
        after applying operation **op** t times;
        op = {
            num++ x++;
            num++ x++;
            num-- x++;
            num-- x--;
        }
        Constraints: num >= 1;
        Best operation  num++, x--; (moving towards + inf)
        because total diff between numbers is = 2;
        */
        // Diff 2 t times 
        return num + 2 * t;  
    }
};