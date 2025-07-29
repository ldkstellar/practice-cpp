class MyString {
 public:
  MyString(const MyString& other);
  MyString(const char* str);
  MyString(MyString&& other);
  ~MyString();
  MyString& operator=(MyString&& other);
  const char* str();

 private:
  char* mString;
  int msize;
};