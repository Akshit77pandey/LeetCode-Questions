class MedianFinder {
public:
    priority_queue<int> leftmax_heap;
    priority_queue<int, vector<int>, greater<int>> rightmin_heap;

    MedianFinder() {}
    
    void addNum(int num) {
        if (leftmax_heap.empty() || num <= leftmax_heap.top()) {
            leftmax_heap.push(num);
        } else {
            rightmin_heap.push(num);
        }
        
        if (leftmax_heap.size() > rightmin_heap.size() + 1) {
            rightmin_heap.push(leftmax_heap.top());
            leftmax_heap.pop();
        } else if (rightmin_heap.size() > leftmax_heap.size()) {
            leftmax_heap.push(rightmin_heap.top());
            rightmin_heap.pop();
        }
    }
    
    double findMedian() {
        if (leftmax_heap.size() == rightmin_heap.size()) {
            return (leftmax_heap.top() + rightmin_heap.top()) / 2.0;
        }
        return leftmax_heap.top();
    }
};