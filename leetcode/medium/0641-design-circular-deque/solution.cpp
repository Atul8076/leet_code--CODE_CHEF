class MyCircularDeque {
public:
    int *arr;
    int front, rear, size;

    MyCircularDeque(int k) {
      arr = new int[k] ;
      rear = front= -1;
      size = k; 
    }

    ~MyCircularDeque() {
        delete[] arr;
    }
    
    bool insertFront(int value) {
       if(isEmpty()) {
        rear = front = 0;
        arr[front] = value;
        return true;
       }
       else if(isFull()){
        return false;

       }
       else{
        front = (front-1+size)%size;
        arr[front] = value;
        return true;
    }
    }
    
    bool insertLast(int value) {
       if(isEmpty()){
        rear = front = 0;
        arr[rear] = value;
        return true;
    }
    else if(isFull()){
        return false;
    }
    else {
        rear = (rear+1)%size;
        arr[rear] = value;
        return true;
    }
    }
    
    bool deleteFront() {
       if(isEmpty()){
        return false;
       }
       else if(rear == front ){
        rear = front = -1;
        return true ;
       }
       else{
        front = (front+1)%size;
        return true;
       }
    }
    
    bool deleteLast() {
       if(isEmpty()){
        return false;
       }
       else if(rear == front ){
        rear = front = -1;
        return true ;
       }
       else{
        rear = (rear-1+size)%size ;
        return true;
       }
    }
    
    int getFront() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int getRear() {
        if(isEmpty()){
            return -1;

        }
        else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
      return front == -1;  
    }
    
    bool isFull() {
       return (rear+1)%size == front;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */