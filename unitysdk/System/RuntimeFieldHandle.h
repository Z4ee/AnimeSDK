#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class RtFieldInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AC570)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x22AC560)
#define SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x17A22EF0)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A22ED0)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17A22EE0)
#define SYSTEM_RUNTIMEFIELDHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22AC550)
#define SYSTEM_RUNTIMEFIELDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace System
{
	inline static constexpr unsigned int RuntimeFieldHandle_TypeDefinitionIndex = 420;

	struct alignas(8) RuntimeFieldHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr v)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE__CTOR_OFFSET))(this, v);
		}

		/*
		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE__CTOR_1_OFFSET))(this, info, context);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET))(fi, obj, value);
		}

		static ::System::Void SetValue(::System::Reflection::RtFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType, ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ::System::Boolean& domainInitialized)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET))(field, obj, value, fieldType, fieldAttr, declaringType, domainInitialized);
		}

		static ::System::Void SetValueDirect(::System::Reflection::RtFieldInfo* field, ::System::RuntimeType* fieldType, ::System::Void* pTypedRef, ::System::Object* value, ::System::RuntimeType* contextType)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::RuntimeType*, ::System::Void*, ::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET))(field, fieldType, pTypedRef, value, contextType);
		}
	};
}
