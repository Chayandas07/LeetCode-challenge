class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea = 0;
        double low = 2e9, high = 0; // Use safer initial bounds
        
        // 1. Calculate Total Area and Bounds carefully
        for(auto& sq : squares) {
            double y = sq[1];
            double l = sq[2];
            
            // Cast to double to avoid Integer Overflow!
            totalArea += l * l; 
            
            low = min(low, y);
            high = max(high, y + l);
        }

        double halfArea = totalArea / 2.0;
        
        // 2. Binary Search with fixed iterations
        // running 100 times guarantees precision without infinite loops
        for(int i = 0; i < 100; i++) {
            double mid = low + (high - low) / 2.0;
            
            if(calculateArea(squares, mid) >= halfArea) {
                high = mid; // Too high, go down
            } else {
                low = mid;  // Too low, go up
            }
        }
        
        // 3. Return the calculated bound, NOT 0
        return high; 
    }

    double calculateArea(vector<vector<int>>& squares, double currentY) {
        double area = 0;
        for(auto& sq : squares) {
            double y = sq[1];
            double l = sq[2];
            double top = y + l; // Use double to avoid overflow
            
            if(y >= currentY) {
                continue; // Square is fully above
            } 
            else if(top <= currentY) {
                area += l * l; // Square is fully below
            } 
            else {
                // Square is cut by the line
                area += l * (currentY - y);
            }
        }
        return area;
    }
};
