#include <queue>

namespace queue_exercises {
    using namespace std;
    
    queue<int> initializeQueue(int n) {
        queue<int> q;
        for (int i = 0; i < n; i++){
            q.push(i);
        }
        return q;
    }
}