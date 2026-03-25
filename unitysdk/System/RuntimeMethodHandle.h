#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNameFormatFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x163F6B50)
#define SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DA980)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x20DA970)
#define SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET UNITYSDK_OFFSET(0x14E5D30)
#define SYSTEM_RUNTIMEMETHODHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20DA960)
#define SYSTEM_RUNTIMEMETHODHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace System
{
	inline static constexpr unsigned int RuntimeMethodHandle_TypeDefinitionIndex = 421;

	struct alignas(8) RuntimeMethodHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr v)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE__CTOR_OFFSET))(this, v);
		}

		/*
		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE__CTOR_1_OFFSET))(this, info, context);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* ConstructInstantiation(::System::Reflection::RuntimeMethodInfo* method, ::System::TypeNameFormatFlags format)
		{
			return ((::System::String*(*)(::System::Reflection::RuntimeMethodInfo*, ::System::TypeNameFormatFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET))(method, format);
		}

		::System::Boolean IsNullHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET))(this);
		}
	};
}
