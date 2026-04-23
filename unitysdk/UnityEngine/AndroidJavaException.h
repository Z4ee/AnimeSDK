#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A4064E0)
#define UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A404120)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaException_TypeDefinitionIndex = 5398;

	class AndroidJavaException : public ::System::Exception
	{
	public:
		::System::String* mJavaStackTrace; // 0x88

		::System::Void _ctor(::System::String* message, ::System::String* javaStackTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET))(this, message, javaStackTrace);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}
	};
}
