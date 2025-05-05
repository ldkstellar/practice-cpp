enum EError { SUCESSS, ERROR };
struct ErrorCode {
  EError Status;
  int code;
  /* data */
};
template <typename T>
struct Result {
  ErrorCode Error;
  T Value;
};
