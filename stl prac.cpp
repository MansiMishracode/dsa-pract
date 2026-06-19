/* only for explaination
pairs
void explainpair(){
    pair<int,int> p={1,3};
    cout<< p.first(1)<<" "<<p.second(3);
    pair<int,pair<int,int>> p={1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};  utility library in c++ for pair datatype
    cout<<arr[1].second;(2,5)
    cout<<arr[0].second;(1,2)
}

vectors - we can always change the size of vector 
whenever we wish to they are dynamic in nature.

void explainVector(){

vector<int> v;  it creates a empty container{ }

v.push_back(1);  { 1 }
v.emplace_back(2);  {1,2}

vector<pair<int,int>>vec;  define vec of pair datatype
v.push_back({1,2});  { }
v.emplace_back(1,2); ( )

vector<int> v(5,100); {100,100,100,100,100}

vector<int> v(5); {0,0,0,0,0}

vector<int> v1(5,20);  {20,20,20,20,20}
vector<int> v2(v1); copy of it 

what is an iterator

vector<int>::iterator q =v.begin(); pointing to memory address of 1st element of vector

q++;
cout<< *(q)<<" "; doing * element is dereferencing the pointer to get the value at that address

q=q+2; set the pointer to point to 2nd element from current position
cout<< *(q)<<" ";

vector<int>::iterator q=v.end(); end() points to the memory address just after the last element of vector

vector<int>::iterator q=v.rend(); rend() points to the memory address just before the first element of vector

vector<int>::iterator q=v.rbegin(); rbegin() points to the memory address of the last element of vector 

cout<<v[0]<<" "<<v.at(0); 
cout<<v.back()<<" "; back() points to the last element of vector

for(vector<int>::iterator q=v.begin();q!=v.end();q++) it prints all the elements of vector as v.end points to 
the memory address just after the last element of vector
{
    cout<<*(q)<<" ";
    }

 for (auto q=v.begin(); q!=v.end();q++) auto is a keyword which automatically detects the datatype of q and assigns it to q
 {
 cout<<*(q)<<" ";
 }  
 for (auto q:v) in this case q is not a pointer but it is the value of the element in vector v
 {
 cout<<q<<" ";
 }
//{10,20,12,23}
 v.erase(v.begin()+1);  erase the element at index 1 {20}

 //{10,20,12,23,35}
 v.erase(v.begin()+2,v.begin()+4);  erase the elements from index 2 to
  index 3 {12,23}

  //    INSERT FUNCTION 
  vector<int> v(2,100); {100,100}
  v.insert(v.begin(),300); {300,100,100} 
  v.insert(v.begin()+1,2,10); {300,10,10,100,100} insert 2 10's at index 1

  vector<int> copy(2,50); {50,50}
  v.insert(v.begin(),copy.begin(),copy.end()); {50,50,300,10,10,100,100} insert copy vector at index 0
   cout<<v.size(); size() returns the number of elements in vector
   v.clear(); clear() removes all the elements from vector and makes it empty

   cout<<v.empty(); empty() returns true if vector is empty else false
   v.pop_back(); pop_back() removes the last element from vector


   LIST
   void explainList(){
   list<int> ls;  it creates a empty container{ }
   ls.push_back(1);  { 1 }
   ls.emplace_back(2);  {1,2}  

   ls.push_front(3);  {3,1,2} insert in vector is costly expensive in terms time complexity as it has to
    shift all the elements to right but in list it is not costly as it is a doubly linked list
 
   ls.emplace_front(4);  {4,3,1,2}
   // rest of the functions are same as vector but the difference is that list is a doubly linked list and vector is a dynamic array
//doubly linked list is a data structure in which each node contains a data part and two pointers, one pointing to the next node and
 the other pointing to the previous node. It allows for efficient insertion and deletion of elements from both ends of the list.
 
 Deque - double ended queue 
void explainDeque(){
    deque<int> dq;  it creates a empty container{ }
    dq.push_back(1);  { 1 }
    dq.emplace_back(2);  {1,2}  

    dq.push_front(3);  {3,1,2} insert in vector is costly expensive in terms time complexity as it has to
    shift all the elements to right but in deque it is not costly as it is a double ended queue
 
    dq.emplace_front(4);  {4,3,1,2}
    dq.pop_back();  {4,3,1} removes the last element from deque
    dq.pop_front();  {3,1} removes the first element from deque

    dq.back();  returns the last element of deque
    dq.front();  returns the first element of deque
    // rest of the functions are same as vector 
 
    STACK last in first out data structure
    void explainStack(){    

    QUEUE first in first out data structure
    void explainQueue()

    what is difference between queue and deque
    queue is a data structure that follows the FIFO (First In First Out) principle, where
    the first element added to the queue is the first one to be removed.
    deque is a data structure that allows insertion and deletion of elements from both ends,
    providing more flexibility than a standard queue.

     Priority Queue is a data structure that stores elements in a way that allows for efficient 
    retrieval of the highest (or lowest) priority element.

    Set is a data structure that stores unique elements in a sorted order, allowing for efficient
    insertion, deletion, and searching of elements. in set every operation takes log(n) time complexity for insertion, deletion 
    and searching of elements.

    void explainSet(){
    auto it=st.find(5); {1,2,3,4,5} find() returns an iterator to the element if it is found, otherwise
     it returns an iterator to the end of the set 

     auto it=st.lower_bound(3); 
     lower_bound() returns an iterator to the first element that is not less than the given value,
     in this case it will return an iterator to the element 3

    auto it=st.upper_bound(3); upper_bound() returns an iterator to the first element that is greater than the given value,
     in this case it will return an iterator to the element 4
}
     Multiset is a data structure that stores elements in a sorted order, allowing for efficient insertion,
      deletion, and searching of elements.
      ms.insert(5); {1,2,3,4,5,5} multiset allows duplicate elements
      ms.erase(5); {1,2,3,4} erase() removes all the occurrences of the given element from the multiset
      ms.erase(ms.find(5)); {1,2,3,4,5} erase() removes only the first occurrence of the given element from the multiset

      Unordered Set is a data structure that stores unique elements in an unordered manner, allowing for efficient
      insertion, deletion, and searching of elements. in unordered set every operation takes O(1) time complexity for insertion, deletion and 
      searching of elements.
    
      Map is a data structure that stores key-value pairs in a sorted order, allowing for efficient insertion, deletion, and searching of elements. 
      in map every operation takes log(n) time complexity for insertion, deletion and searching of elements.
      key is unique in map and value can be duplicate in map

      void explainMap(){
      map<int,int> mp;  it creates a empty container{ }
      map<int,pair<int,int>> mp;  it creates a empty container{ }
      mp[1]=2; {1,2} insert key 1 with value
     mp.insert({3,4}); {1,2},{2,3},{3,4} insert key 3 with value 4
     mp.emplace(4,5); {1,2},{2,3},{3,4},{4,5} insert key 4 with value 5

     mpp is a map of pair datatype
     mpp[{2,3}]=10; {1,2},{2,3},{3,4},{4,5},{2,3,10} insert key {2,3} with value 10 in map of pair datatype
    for(auto q:mp){
    cout<<q.first<<" "<<q.second<<endl; it prints all the key value pairs in map
    }

    multimap is a data structure that stores key-value pairs in a sorted order, allowing for efficient insertion, deletion, and searching of elements.
      in multimap every operation takes log(n) time complexity for insertion, deletion and searching of elements.
      multimap allows duplicate keys but values can be duplicate or unique in multimap
      unordered map is a data structure that stores key-value pairs in an unordered manner, allowing for efficient insertion, deletion, and 
      searching of elements. in unordered map every operation takes O(1) time complexity for insertion, deletion and searching of elements.

      explain extra
      sort function is used to sort the elements of a container in ascending order by default. it takes two arguments,
       the first one is the starting iterator and the second one is the ending iterator of the container. 
       it sorts the elements in the range [first, last) in ascending order.

         sort(v.begin(),v.end()); it sorts the elements of vector v in ascending order
         sort(v.begin(),v.end(),greater<int>()); it sorts the elements of vector v in descending order
         sort(arr,arr+n); it sorts the elements of array arr in ascending order
         sort(a,a+n,compare); it sorts the elements of array a in ascending order using a custom comparison function

         int maxi=*max_element(v.begin(),v.end()); it returns the maximum element in the vector v
*/