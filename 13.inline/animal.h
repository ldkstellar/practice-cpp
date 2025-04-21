class Animal {
  /* data */
 public:
  Animal(const char*  name);
  ~Animal();
  inline char* getName() const;

 private:
  char* name;
};

char* Animal::getName() const { return name; }
