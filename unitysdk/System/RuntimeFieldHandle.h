#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class RtFieldInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_19D4B4EB534ABBEA_OFFSET UNITYSDK_OFFSET(0x8FE640)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET UNITYSDK_OFFSET(0x8FE630)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_571E199764B048BD_OFFSET UNITYSDK_OFFSET(0x1A7CA2B0)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET UNITYSDK_OFFSET(0x8FE650)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_8004D4ED772C50A9_OFFSET UNITYSDK_OFFSET(0x1A7CA290)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_8B1F4DC8AD6A3756_OFFSET UNITYSDK_OFFSET(0x1A7CA2A0)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2E87C0)

namespace System
{
	inline static constexpr unsigned int RuntimeFieldHandle_TypeDefinitionIndex = 407;

	struct alignas(8) RuntimeFieldHandle
	{
		::System::IntPtr value; // 0x10

		/*
		::System::Void Method_2_2D9A8F3394962A5B(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET))(this, info, context);
		}
		*/

		/*
		::System::Void Method_2_19D4B4EB534ABBEA(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_19D4B4EB534ABBEA_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Method_2_67F6AE7F9001053A(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Void Method_2_8004D4ED772C50A9(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_8004D4ED772C50A9_OFFSET))(fi, obj, value);
		}

		static ::System::Void Method_2_8B1F4DC8AD6A3756(::System::Reflection::RtFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType, ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ::System::Boolean& domainInitialized)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_8B1F4DC8AD6A3756_OFFSET))(field, obj, value, fieldType, fieldAttr, declaringType, domainInitialized);
		}

		static ::System::Void Method_2_571E199764B048BD(::System::Reflection::RtFieldInfo* field, ::System::RuntimeType* fieldType, ::System::Void* pTypedRef, ::System::Object* value, ::System::RuntimeType* contextType)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::RuntimeType*, ::System::Void*, ::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_571E199764B048BD_OFFSET))(field, fieldType, pTypedRef, value, contextType);
		}
	};
}
