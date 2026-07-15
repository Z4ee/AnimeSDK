#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1D223310)
#define UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D220FA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaException_TypeDefinitionIndex = 5680;

	class AndroidJavaException : public ::System::Exception
	{
	public:
		::System::String* mJavaStackTrace; // 0x88

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}
	};
}
