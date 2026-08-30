#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class RtFieldInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B01FF0)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B01FE0)
#define SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x161E0)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x19B9D5A0)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19B9D580)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19B9D590)
#define SYSTEM_RUNTIMEFIELDHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B01FD0)
#define SYSTEM_RUNTIMEFIELDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace System
{
	inline static constexpr unsigned int RuntimeFieldHandle_TypeDefinitionIndex = 422;

	struct alignas(8) RuntimeFieldHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE__CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE__CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void SetValueInternal(::System::Reflection::FieldInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetValue(::System::Reflection::RtFieldInfo* a1, ::System::Object* a2, ::System::Object* a3, ::System::RuntimeType* a4, ::System::Reflection::FieldAttributes a5, ::System::RuntimeType* a6, ::System::Boolean& a7)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetValueDirect(::System::Reflection::RtFieldInfo* a1, ::System::RuntimeType* a2, ::System::Void* a3, ::System::Object* a4, ::System::RuntimeType* a5)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::RuntimeType*, ::System::Void*, ::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
