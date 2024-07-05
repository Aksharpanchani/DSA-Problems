#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
    vector<int> v;
    while (!stack.empty())
    {
        v.push_back(stack.top());
        stack.pop();
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        stack.push(v[i]);
    }

}
int main()
{
    stack<int> stack;
    stack.push(34);
    stack.push(3);
    stack.push(31);
    stack.push(98);
    stack.push(92);
    stack.push(23);
    sortStack(stack);
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}