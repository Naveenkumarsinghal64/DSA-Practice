class MyLinkedList {
public:
    MyLinkedList* head;
    MyLinkedList* tail;
    MyLinkedList* next;
    int val;

    MyLinkedList() {
        head=NULL;
        tail=NULL;
        next=NULL;
    }

    MyLinkedList(int value) {
        val=value;
        head=NULL;
        tail=NULL;
        next=NULL;
    }

    int get(int index) {
        MyLinkedList* temp=head;
        int count=0;
        while(temp!=NULL){
            if(count==index){
                return temp->val;
            }
            count++;
            temp=temp->next;
        }
        return -1;
    }

    void addAtHead(int val) {
        MyLinkedList* obj=new MyLinkedList(val);
        if(head==NULL){
            head=obj;
            tail=obj;
        }
        else{
            obj->next=head;
            head=obj;
        }
    }

    void addAtTail(int val) {
        MyLinkedList* obj=new MyLinkedList(val);
        if(head==NULL){
            head=obj;
            tail=obj;
        }
        else{
            tail->next=obj;
            tail=obj;
        }
    }

    void addAtIndex(int index,int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        MyLinkedList* temp=head;
        for(int i=0;i<index-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        MyLinkedList* obj=new MyLinkedList(val);
        obj->next=temp->next;
        temp->next=obj;
        if(obj->next==NULL){
            tail=obj;
        }
    }

    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }
        if(index==0){
            MyLinkedList* deleteNode=head;
            head=head->next;
            if(head==NULL){
                tail=NULL;
            }
            delete deleteNode;
            return;
        }
        MyLinkedList* temp=head;
        for(int i=0;i<index-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL||temp->next==NULL){
            return;
        }
        MyLinkedList* deleteNode=temp->next;
        temp->next=deleteNode->next;
        if(deleteNode==tail){
            tail=temp;
        }
        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */