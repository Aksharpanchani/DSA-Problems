//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method. Make this in descending order */
void SortedStack::sort() {
     stack<int> tempStack;

    // Iterate through each element in the original stack
    while (!s.empty()) {
        // Pop the top element from the original stack
        int tmp = s.top();
        s.pop();

        // Move elements from tempStack to s until the top of tempStack is less than tmp
        while (!tempStack.empty() && tempStack.top() < tmp) {
            s.push(tempStack.top());
            tempStack.pop();
        }

        // Push tmp to the correct position in tempStack
        tempStack.push(tmp);
    }

    // Now, elements in tempStack are sorted in descending order
    // Move elements from tempStack back to s to achieve the desired output
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}
