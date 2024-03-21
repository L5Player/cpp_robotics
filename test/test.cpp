#include <iostream>
#include <queue>

int main()
{
    auto cmp = [](const int left, const int right){return left > right;};

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(1);
    pq.push(6);
    pq.push(8);

    std::cout << pq.top() << std::endl;

    pq.pop();
    std::cout << pq.top() << std::endl;

}