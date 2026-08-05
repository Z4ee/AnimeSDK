#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNameFormatFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET UNITYSDK_OFFSET(0x983EB0)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET UNITYSDK_OFFSET(0x983ED0)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_6B44E7165373C497_OFFSET UNITYSDK_OFFSET(0x983EC0)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_BF9E6935D8F529C7_OFFSET UNITYSDK_OFFSET(0x324D50)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3CCD40)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_F11185D908E76B09_OFFSET UNITYSDK_OFFSET(0x1D197AC0)

namespace System
{
	inline static constexpr unsigned int RuntimeMethodHandle_TypeDefinitionIndex = 408;

	struct alignas(8) RuntimeMethodHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_2_BF9E6935D8F529C7(::System::IntPtr v)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_BF9E6935D8F529C7_OFFSET))(this, v);
		}

		/*
		::System::Void Method_2_2D9A8F3394962A5B(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET))(this, info, context);
		}
		*/

		/*
		::System::Void Method_2_6B44E7165373C497(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_6B44E7165373C497_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Method_2_67F6AE7F9001053A(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::String* Method_2_F11185D908E76B09(::System::Reflection::RuntimeMethodInfo* method, ::System::TypeNameFormatFlags format)
		{
			return ((::System::String*(*)(::System::Reflection::RuntimeMethodInfo*, ::System::TypeNameFormatFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_F11185D908E76B09_OFFSET))(method, format);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
