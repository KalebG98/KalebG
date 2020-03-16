#include <iostream>

using namespace std;

class LL {
public:
	char data;
	LL *next;
	LL(char ch)
	{
		this->data = ch;
		this->next = NULL;
	}
};
int main() {
	LL *header = NULL, *node;
	char ch;
	while ((ch = getchar()) != '\n') {
		node = new LL(ch);
		if (!header) {
			header = node;
		}
		else {
			LL *temp = header;
			LL *prev = NULL;
			while (temp && node->data > temp->data)
			{
				prev = temp;
				temp = temp->next;
			}
			prev->next = node;
			node->next = temp;
		}
	}
	while (header)
	{
		cout << header->data;
		LL *temp = header;
		header = header->next;
		delete(temp);
	}
	return 0;
}