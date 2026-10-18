#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNameFormatFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x1C3131E0)
#define SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C24840)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3C24830)
#define SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D30)
#define SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET UNITYSDK_OFFSET(0x2F0A180)
#define SYSTEM_RUNTIMEMETHODHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C24820)
#define SYSTEM_RUNTIMEMETHODHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

namespace System
{
	inline static constexpr unsigned int RuntimeMethodHandle_TypeDefinitionIndex = 423;

	struct alignas(8) RuntimeMethodHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE__CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE__CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* ConstructInstantiation(::System::Reflection::RuntimeMethodInfo* a1, ::System::TypeNameFormatFlags a2)
		{
			return ((::System::String*(*)(::System::Reflection::RuntimeMethodInfo*, ::System::TypeNameFormatFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET))(a1, a2);
		}

		::System::Boolean IsNullHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET))(this);
		}
	};
}
