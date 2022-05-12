#include <iostream>
#include <algorithm>
using namespace std;
struct node{int data; struct node *next;};
int main() {
    node *p= nullptr;
    node *m= nullptr;
    node *headP = p;
    node *headM= m;
    node *pPrev;
    node *mPrev;

    int a[]{1, -1, 2, 3, -4, 6};
    for (int i=0; i < sizeof a / sizeof *a; i++) {

        if (a[i] >= 0) {
            node *pTemp =new(node);
            pTemp->data=a[i];

                if (headP== nullptr){
                    headP =pTemp;
                    pPrev=headP;
                }else{
                    pPrev->next =pTemp;
                    pPrev =pTemp;
                }


        } else {
            node *temp =new(node);
            temp->data=a[i];
            
            if (headM== nullptr){
                headM =temp;
                mPrev=headM;
            }else{
                mPrev->next =temp;
                mPrev =temp;
            }


        }

    }
    for (int i=0; i < sizeof a / sizeof *a+1; i = i + 2) {

        a[i] = headP->data;
        cout << headP->data<<endl;
        headP = headP->next;
        a[i + 1] = headM->data;
        if (headM->next== nullptr)
            cout<<"null";
        cout<<headM->data<<endl;
        headM = headM->next;

    }
    return 0;
}