class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // Minimum possible eating speed
        int low = 1;

        // Maximum possible eating speed.
        // If Koko eats at the speed of the largest pile,
        // she can finish every pile in at most one hour.
        int high = *max_element(piles.begin(), piles.end());

        // We will search for the minimum valid speed.
        while (low <= high) {

            // Middle speed we are currently testing
            int mid = low + (high - low) / 2;

            // Calculate how many hours Koko needs
            // if she eats 'mid' bananas per hour.
            long long hours = 0;

            for (int pile : piles) {

                // Number of hours required for this pile.
                //
                // ceil(pile / mid)
                //
                // Instead of using ceil() with floating point,
                // we use:
                // (pile + mid - 1) / mid
                hours += (pile + mid - 1) / mid;
            }

            // If Koko can finish all bananas within 'h' hours,
            // then 'mid' is a VALID speed.
            //
            // But we want the MINIMUM valid speed,
            // so we try to find an even smaller speed.
            if (hours <= h) {

                high = mid - 1;
            }

            // If Koko needs more than 'h' hours,
            // then 'mid' is TOO SLOW.
            //
            // Therefore we need a larger eating speed.
            else {

                low = mid + 1;
            }
        }

        // When the loop ends:
        //
        // low = smallest speed that works
        //
        // Therefore return low.
        return low;
    }
};