#ifndef __SINGLETON_H__
#define __SINGLETON_H__
#include <cstddef>


template <typename T>
class Singleton
{
public:
    static T* Instance()
    {
        if (mInstance == NULL) mInstance = new T;
        return mInstance;
    };
    static void DestroyInstance()
    {
    	if (mInstance != NULL) {
            delete mInstance;
            mInstance = NULL;
        }
    };
  
private:
    static T * mInstance;
};

template<typename T> T* Singleton<T>::mInstance = NULL;
#endif