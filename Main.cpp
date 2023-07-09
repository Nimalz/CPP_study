//#include <iostream>
//#include "Log.cpp"
//
//class Entity
//{
//private:
//	std::string m_Name;
//public:
//	Entity(const std::string& name)
//		:m_Name(name){}
//
//	std::string GetName() { return m_Name; }
//};
//
//int main()
//{
//	/*Log log;
//	log.Setlevel(Log::Warning);
//	log.Error_p("Hello!");
//	log.Warn_p("Hello!");
//	log.Info_p("Hello!");
//	std::cin.get();*/
//	std::string gg;
//
//	std::cout << gg << std::endl;
//	Entity* e = new Entity("tataga");
//	std::cout << e->GetName() << std::endl;
//
//
//}
//
//#include <iostream>

//class A {
//public:
//	int x = 0;
//	int y = 1;
//
//	A()
//	{
//		std::cout << "Created!" << std::endl;
//	}
//	~A()
//	{
//		std::cout << "Destroyed!" << std::endl;
//	}
//
//};
//
//class ScopedPtr
//{
//private:
//	A* ptr;
//public:
//	ScopedPtr(A* ptr):
//		ptr(ptr)
//	{
//		
//	}
//	~ScopedPtr()
//	{
//		delete ptr;
//	}
//};
////class Student {
////public:
////
////private:
////	int _no = 111;
////	int _age = 20;
////	A _a;
////};
//
//int main() {
//	{
//		ScopedPtr e(new A());
//	}
//	return 0;
//}
//class Ass {
//public:
//	int a, b;
//	Ass(int a, int b) :
//		a(a), b(b) {}
//     };
//
//std::ostream& operator << (std::ostream& stream, const Ass& other)
//{
//	stream << other.a << "," << other.b;
//	return stream;
//}
//int main() {
//	Ass Apple(5,6);
//	std::cout << Apple << std::endl;
//	
//}
//#include <iostream>
//#include <string>
//
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned int m_Size;
//public:
//
//	String(const char* string) 
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	String(const String& other):m_Size(other.m_Size)
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size+1);
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	friend std::ostream& operator<<(std::ostream& stream, const String& string);
//	char& operator[](unsigned int index)
//	{
//		return m_Buffer[index];
//	}
//};
//
//std::ostream& operator<<(std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//int main()
//{
//	String string = "dsfgdf";
//	std::cout << string << std::endl;
//
//}
//
//#include <iostream>
//#include <GLFW/glfw3.h>
//
//int main() {
//	int a = glfwInit();
//	std::cout << a << std::endl;
//	std::cin.get();
//}
//#include <iostream>
//#include <array>
//template <int T>
//
//void PrintArray(const std::array<int, T>& data)
//{
//	for (int i = 0; i < T; i++)
//	{
//		std::cout << data[i] << std::endl;
//	}
//}
//int main()
//{
//	std::array<int, 5> data;
//	data[0] = 2;
//	data[4] = 4;
//	PrintArray(data);
//}
//#include <iostream>
//#include <chrono>
//#include <thread>
//
//struct Timer
//{
//	std::chrono::time_point<std::chrono::steady_clock> start, end;
//	std::chrono::duration<float> duration;
//	Timer()
//	{
//		start = std::chrono::high_resolution_clock::now();
//
//	}
//
//	~Timer()
//	{
//		end = std::chrono::high_resolution_clock::now();
//		duration = end - start;
//		float ms = duration.count() * 1000.0f;
//		std::cout << "Timer took " << ms << "ms" << std::endl;
//	}
//};
//
//void Function()
//	{
//	Timer timer;
//
//	for (int i = 0; i < 100; i++)
//		std::cout << "Hello\n";
//	}
//
//int main()
//{
//	//using namespace std::literals::chrono_literals;
//	//auto start = std::chrono::high_resolution_clock::now();
//	//std::this_thread::sleep_for(1s);
//	//auto end = std::chrono::high_resolution_clock::now();
//
//	//std::chrono::duration<float> duration = end - start;
//	//std::cout << duration.count() << "s" << std::endl;
//	Function();\
//
//} 

//#include "Timer.h"
//#include <iostream>
//
//int main()
//{
//	int value = 0;
//	{
//		Timer Tiner;
//		for (int i = 0; i < 1000000; i++)
//			value += 2;
//	}
//	
//	std::cout << value << std::endl;
//}
//#include <iostream>
//
//template<typename T1, typename T2>
//
//class Person
//{
//public:
//	Person(T1 age, T2 name)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	void Show()
//	{
//		std::cout << this->m_age << "\n" << this->m_name << std::endl;
//		std::cout << typeid(T1).name() << std::endl;
//		std::cout << typeid(T2).name() << std::endl;
//	}
//
//	T1 m_age;
//	T2 m_name;
//	
//};
//
//template<typename T1>
//void PrintPerson(T1 &p)
//{
//	p.Show();
//	
//}
//
//int main()
//{
//	Person<int, std::string> p (11,"Akk");
//	p.Show();
//	PrintPerson(p);
//}

//#include <iostream>
//
//template <typename T>
//
//class Base
//{
//	T a;
//};
//template <typename T1, typename T2>
//
//class son : public Base <T1>
//{
//public:
//	son()
//	{
//		std::cout << typeid(T1).name() << std::endl;
//		std::cout << typeid(T2).name() << std::endl;
//	}
//	son(T1 a,T2 b)
//	{
//		std::cout << typeid(T1).name() << std::endl;
//		std::cout << typeid(T2).name() << std::endl;
//		std::cout << "1111" << std::endl;
//	}
//	T2 m;
//};
//
//int main()
//{
//	son<int, float> s1 (1, 5.5f);
//}
//
//#include <iostream>
//#include <variant>
//
//int main()
//{
//	std::variant<int, float> var{ 5.6f };
//	std::cout << std::get <float>(var) << std::endl;
//	var = 1;
//	std::cout << std::get <int>(var) << std::endl;
//
//	std::cout << sizeof(int) << std::endl;
//	std::cout << sizeof(float) << std::endl;
//	std::cout << sizeof(var) << std::endl;
//}
//

//#include <future>
//#include <iostream>
//
//int main() 
//{
//    std::future<int> f1 = std::async(std::launch::async, []() {
//        return 8;
//        });
//    std::cout << f1.get() << std::endl;
//
//    std::future<void> f2 = std::async(std::launch::async, []() {
//        std::cout << 8 << std::endl;
//        });
//    f2.wait();
//
//    std::future<int> future = std::async(std::launch::async, []() {
//        std::this_thread::sleep_for(std::chrono::seconds(3));
//        return 8;
//        });
// 
//    std::cout << "waiting...\n";
//    std::future_status status;
//    do {
//        status = future.wait_for(std::chrono::seconds(1));
//        if (status == std::future_status::deferred) {
//            std::cout << "deferred\n";
//        }
//        else if (status == std::future_status::timeout) {
//            std::cout << "timeout\n";
//        }
//        else if (status == std::future_status::ready) {
//            std::cout << "ready!\n";
//        }
//    } while (status != std::future_status::ready);
//    std::cout << "result is " << future.get() << '\n';
//}
//#include <string>
//#include <iostream>
//#include "Timer.h"
//
//static uint32_t s_AllocCount = 0;
//
//void* operator new(size_t size)
//{
//	s_AllocCount++;
//	std::cout << "Allocating " << size << "bytes\n";
//	return malloc(size);
//}
//#define STRING_VIEW 1
//#if STRING_VIEW
//void PrintName(std::string_view name)
//{
//	std::cout << name << std::endl;
//}
//#else
//void PrintName(const std::string& name)
//{
//	std::cout << name << std::endl;
//}
//#endif
//
//int main()
//{
//	Timer time;
//	for (int i = 0; i < 1000; i++)
//
//	{
//		std::string name = "Dong Yuanzhen";
//#if STRING_VIEW
//		std::string_view firstName(name.c_str(), 4);
//		std::string_view lastName(name.c_str() + 5, 12);
//#else
//		std::string firstName = name.substr(0, 4);
//		std::string lastName = name.substr(5, 12);
//#endif
//		PrintName("Dong Yuanzhen");
//		PrintName(firstName);
//		PrintName(lastName);
//		std::cout << s_AllocCount << " Alloctions made" << std::endl;
//	}
//
//
//}
//#include <iostream>
//
//#pragma pack(push) //保存对齐状态
//#pragma pack(4)//设定为4字节对齐
//	struct test
//	{
//		char m1;
//		double m4;
//		int m3;
//	};
//#pragma pack(pop)//恢复对齐状态
//
//int main()
//{
//	test test(1, 50, 3);
//	std::cout << sizeof(char) << std::endl;
//	std::cout << sizeof(double) << std::endl;
//	std::cout << sizeof(int) << std::endl;
//	std::cout << sizeof(test) << std::endl;
//}

//#include <iostream>
//#include "timer.h"
//#define CreateTimer(s) Timer timer##s
//#define _C(s) CreateTimer(s)
//#define Line __LINE__
//#define Cons(a,b) int(a+b)
//
//int main()
//{	
//	_C(__LINE__);
//	std::cout << Cons(1,5) << std::endl;
//	std::cin.get();
//}
//#include "Instrumentor.h"
//#include <iostream>
//
//
//void PrintFunction(int value)
//{
//	PROFILE_FUNCTION();
//	for (int i = 0; i < 1000; i++)
//	{
//		std::cout << "Hello World #" << (i + value) << std::endl;
//	}
//}
//
//void PrintFunction()
//{
//	PROFILE_FUNCTION();
//	for (int i = 0; i < 1000; i++)
//	{
//		std::cout << "Hello World #" << sqrt(i) << std::endl;
//	}
//}
//
//void RunBenchmark()
//{
//	PROFILE_FUNCTION();
//	std::cout << "Running Benchmarks...\n";
//	std::thread a([]() {PrintFunction(2); });
//	PrintFunction();
//
//	a.join();
//	
//}
//
//int main()
//{
//	Instrumentor::Get().BeginSession("Profile");
//	RunBenchmark();
//	Instrumentor::Get().EndSession();
//	
//}

//#include <iostream>
//
//class Random
//{
//public:
//	Random(const Random&) = delete;
//	Random operator= (Random& Random) = delete;
//	static Random& Get()
//	{
//		static Random s_Instance;
//		return s_Instance;
//	}
//	
//private:
//	Random() {};
//	int S_ssss =55;
//};
//
//
//int main()
//{
//	Random::Get();
//	
//}

//#include "Memory_check.h"
//#include <memory>
//
//struct  Object
//{
//	int x, y, z;
//};
//
//int main() 
//{
//	PrintMemoryUsage();
//	std::string string = "ddd";
//	PrintMemoryUsage();
//	{
//	std::unique_ptr<Object> obj = std::make_unique<Object>();
//	PrintMemoryUsage();
//	}
//	PrintMemoryUsage();
//}

//#include <iostream>
// 
//int& GetValue()
//{
//	static int value = 10;
//	return value;
//}
//
//int main()
//{
//	int i = GetValue();
//	i++;
//	int& b = i;
//	GetValue() = i;
//	std::cout << GetValue() << std::endl;
//	std::cout << b << std::endl;
//	GetValue() = b;
//	std::cout << GetValue() << std::endl;
//	
//}

//#include <iostream>
//
//void PrintName(std::string& name)
//{
//	std::cout << "String" << std::endl;
//	std::cout << name << std::endl;
//}
//
//void PrintName(char* name)
//{
//	std::cout << "char" << std::endl;
//	std::cout << name << std::endl;
//}
//
//void PrintName(std::string&& name)
//{
//	std::cout << "rvalue" << std::endl;
//	std::cout << name << std::endl;
//}
//
//int  main()
//{
//	std::string firstname = "Yuanzhen";
//	PrintName(firstname);
//	PrintName("Yuanzhen");
//}
//#include <iostream>
//#include "String.cpp"
//
//int main()
//{
//	Entity entity(String("Yuanzhen Dong"));
//	entity.PrintName();
//
//	std::cin.get();
//
//}
//#include <iostream>
//#include <array>
//
//template<typename T,size_t S>
//
//class Array
//{
//public:
//	constexpr size_t Size() const { return S; }
//	T& operator[](size_t index) { return m_data[index]; }
//	const T& operator[](size_t index) const { return m_data[index]; }
//	T* Data() { return m_Data; }
//	const T* Data() const { return m_Data; }
//private:
//	T m_Data[S];
//};
//
//int main()
//{
//	int size = 5;
//	Array<int, size> data;
//	static_assert(data.Size() < 10, "Size is too large!");
//	for (size_t i = 0; i < data.Size(); i++)
//	{
//		std::cout << data[i] << std::endl;
//	}
//}

//#include <iostream>
//#include "Array.h"
//#include "Vector.h"
//
//class Vector3 {
//public:
//    Vector3() {
//        m_MemoryBlock = new int[5];
//    }
//    Vector3(float scalar)
//        : x(scalar), y(scalar), z(scalar) {
//        m_MemoryBlock = new int[5];
//    }
//    Vector3(float x, float y, float z)
//        : x(x), y(y), z(z) {
//        m_MemoryBlock = new int[5];
//    }
//    
//    Vector3(const Vector3& other) = delete;
//
//    Vector3(Vector3&& other)
//        : x(other.x), y(other.y), z(other.z) {
//        std::cout << "Move" << std::endl;
//        m_MemoryBlock = other.m_MemoryBlock;
//        other.m_MemoryBlock = nullptr;
//    }
//    ~Vector3() {
//        std::cout << "Destroy" << std::endl;
//        delete[] m_MemoryBlock;
//    }
//
//    Vector3& operator=(const Vector3& other) {
//        std::cout << "Copy" << std::endl;
//        x = other.x;
//        y = other.y;
//        z = other.z;
//        m_MemoryBlock = other.m_MemoryBlock;
//        return *this;
//    }
//    Vector3& operator=(Vector3&& other) {
//        std::cout << "Move" << std::endl;
//        x = other.x;
//        y = other.y;
//        z = other.z;
//        m_MemoryBlock = other.m_MemoryBlock;
//        other.m_MemoryBlock = nullptr;
//        return *this;
//    }
//    friend std::ostream& operator<<(std::ostream&, const Vector3&);
//private:
//    float x = 0.0f, y = 0.0f, z = 0.0f;
//    int* m_MemoryBlock = nullptr;
//
//};
//
//std::ostream& operator<<(std::ostream& os, const Vector3& vec) {
//    os << vec.x << ", " << vec.y << ", " << vec.z;
//    return os;
//}
//template <typename T>
//void PrintVector(const Vector<T>& vector)
//{
//	for (size_t i = 0; i < vector.Size(); i++)
//		std::cout << vector[i] << std::endl;
//	std::cout << "---------------------------------------\n";
//}
//int main() {
//    {
//        Vector<Vector3> vec;
//        vec.EmplaceBack();
//        vec.EmplaceBack(1.0f);
//        vec.EmplaceBack(1.0f, 2.0f, 3.0f);
//        PrintVector(vec);
//        vec.PopBack();
//        PrintVector(vec);
//        vec.PopBack();
//        PrintVector(vec);
//    }
//
//    Vector<int> Vec;
//    Vec.PushBack(5);
//    Vec.EmplaceBack(2);
//    Vec.EmplaceBack(2);
//    Vec.EmplaceBack(2);
//    Vec.PopBack();
//    Vec.Clear();
//    std::cout << "hello" << std::endl;
//    return 0;
//}

//#include "Array.h"
//#include <iostream>
//int main()
//{
//	int size = 5;
//	Array<int, 5> data;
//	static_assert(data.Size() < 10, "Size is too large!");
//	for (size_t i = 0; i < data.Size(); i++)
//	{
//		data[i] = i;
//		std::cout << data[i] << std::endl;
//	}
//}

//
//#include <iostream>
//#include <Vector>
//#include "Vector.h"
//#include <map>
//
//
//int main()
//{
//	Vector<std::string> values({"1111","dong","sdfsdfds"});
//	values.PushBack("1");
//	values.EmplaceBack("2");
//	values.EmplaceBack("3");
//	values.EmplaceBack("4"); 
//	values.PushBack("5"); 
//
//
//	std::cout << "Not using iterators\n";
//	for (int i = 0; i < values.Size(); i++)
//	{
//		std::cout << values[i] << std::endl;
//	}
//	std::cout << "Range-based for loop\n";
//	for (auto& value : values)
//	{
//		std::cout << value << std::endl;
//	}
//	std::cout << "Iterator:\n";
//	for (Vector<std::string>::Iterator it = values.begin(); it != values.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//	
//	
//}
//#include <iostream>
//#include "Array.h"
//
//
//int main()
//{
//	Array<std::string, 2> data;
//	data[0] = "Yuanzhen";
//	data[1] = "Dong";
//
//	std::cout << "Range-based for loop\n";
//	for (auto& value : data)
//	{
//		std::cout << value << std::endl;
//	}
//
//	std::cout << "Iterator:\n";
//	for (Array<std::string,2>::Iterator it = data.begin(); it != data.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//
//}
//#include <iostream>
//#include <sstream>
//int main()
//{
//	std::string input;
//	getline(std::cin, input);
//	std::stringstream ss(input);
//}
//
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    virtual void foo()
//    {
//        cout << "A::foo() is called" << endl;
//    }
//};
//class B :public A
//{
//public:
//    void foo()
//    {
//        cout << "B::foo() is called" << endl;
//    }
//};
//int main(void)
//{
//    A* a = new B();
//    a->foo();   // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!
//    return 0;
//}

//#include<iostream>
//#include<map>
//#include<unordered_map>
//
//
//struct CityRecord
//{
//	std::string Name;
//	uint64_t Population;
//	double Latitude, Longitude;
//
//	bool operator==(const CityRecord& other) const
//	{
//		return (Name == other.Name
//			&& Population == other.Population
//			&& Latitude == other.Latitude
//			&& Longitude == other.Longitude);
//	}
//
//	bool operator< (const CityRecord& other) const
//	{
//		return Population < other.Population;
//	}
//};
//
//namespace std {
//	template<>
//	struct hash<CityRecord>
//	{
//		size_t operator() (const CityRecord& key) const
//		{
//			
//			return hash<std::string>()(key.Name);
//		}
//	};
//
//
//}
//
//int main()
//{
//	
//	std::map<std::string, CityRecord> cityMap;
//	cityMap["Tokyo"] = CityRecord{ "Tokyo", 5555 , 3.6 , 7.9 };
//	cityMap["Beijing"] = CityRecord{ "Beijing", 1256 , 3.6 , 7.9 };
//
//	std::map<CityRecord, uint32_t> cityFounded;
//	//cityFounded[CityRecord{ "Beijing", 1256 , 3.6 , 7.9 }];
//
//
//	const auto& cities = cityMap;
//	if (cities.find("Tokyo") != cities.end())
//	{
//		const CityRecord& data = cities.at("Tokyo");
//	}
//
//	for (auto& [name, city] : cityMap)
//	{
//		//std::cout << name << "\n Population: " << city.Population << std::endl;
//		cityFounded[city];
//	}
//
//	for (auto& [city, founded] : cityFounded)
//	{
//		std::cout << city.Name << "\n Population: " << city.Population << std::endl;
//		//cityFounded[city] = 0;
//	}
//
//	std::cin.get();
//}
#include <iostream>
struct Entity
{
	Entity* pa;
	std::string m_name;
};

int main()
{
	uint64_t offset = (uint64_t) & ((Entity*)0)->m_name;
	std::cout << offset << std::endl;

}