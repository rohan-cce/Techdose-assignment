class MyStack {
Queue<Integer> queue;
    public MyStack() {
        queue= new LinkedList<>();
    }
    
    public void push(int a) {
        queue.add(a);
    }
    
    public int pop() {
        int k=0;
       Iterator itr = queue.iterator();
        while(itr.hasNext()){
          k=(int)itr.next();
                  if(itr.hasNext()==false){
                  itr.remove();
                    
           break; }
           
        }
       
        return k;
    }
    
    public int top() {
        int k=0;
         Iterator itr = queue.iterator();
        while(itr.hasNext()){
             k=(int)itr.next();
            }
        return k;
    }
    
    public boolean empty() {
        if(queue.size()>0)
            return false;
        return true;
    }
}