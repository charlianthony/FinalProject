Queues
-first in first out data structure
-when element added to the queue 

Queue
private:
	head //dequeue from head
	tail //enqueue from tail
	data
	queueSize //number of elements currently in the queue
	maxQueue //number of elements allowed 
public:
	isEmpty
	isFull
	Init()
	enqueue(value)
	dequeue()
	print()
	
enqueue(value)
	if(!isFull){ //is full when maxSize = queueSize
		data[tail]=value;
		queueSize++;
		if(tail == maxQueue-1) //will be true when tail is in the last position of the array
			tail = 0; //move the tail back to beginning of queue (wrap)
		else
			tail++; //keep moving tail till end
	}else{
		print "queue full"
	}

dequeue()
	if(!isEmpty){ //empty when queueSize=0
		value = data[head];
		queueSize--;
		if(head == maxQueue-1) 
			head = 0;
		else
			head++;
	}else
		print "queue empty"
	return value;