
template <typename T>
Stack<T>::Stack(Stack const& other)
	 : vec(other.vec){}//copy ctor

template <typename T>
void Stack<T>::push(T const& value){
	vec.push_back(value);
}
template <typename T>
void Stack<T>::pop() {
	if(!vec.empty()){
		vec.pop_back();
	}
	return;
}
template <typename T>
T const& Stack<T>::top() const {
	if(!vec.empty()){
		return vec.back();
	}
}
template <typename T>
size_t Stack<T>::size() const {
	return vec.size();
}
template <typename T>
Stack<T>& Stack<T>::operator=(Stack const& other){
	vec = other.vec();
}
template <typename T>
void Stack<T>::print() const {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
}
/*
template<typename T>
void Stack<T>::printOn() (std::ostream& strm) const {
for (T const& elem : elems) {
strm << elem << ’ ’; // call << for each element
}
}

std::istream& operator>>(std::istream& is, const Stack<T>& s){
	T elem;
	while(is >> elem) {
		s.push(elem);
	}
	return is;
}
*/

void Stack<std::string>::push(std::string const& value) {
	elems.push_back(value);
}
void Stack<std::string>::pop() {
	elems.pop_back();
}
std::string const& Stack<std::string>::top() const {
	return elems.back();
}


