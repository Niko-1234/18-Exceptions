#ifndef _INSUFFICIENT_FUNDUS_EXCEPTION_H_
#define _INSUFFICIENT_FUNDUS_EXCEPTION_H_

class InsufficientFundusException : public std::exception{
public:
    InsufficientFundusException() noexcept = default;
    ~InsufficientFundusException() = default;
    virtual const char* what() const noexcept {
        return "Insufficient Fundus Exception";
    }
};

#endif // _INSUFFICIENT_FUNDUS_EXCEPTION_H_