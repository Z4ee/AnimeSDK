#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8ED2B0)
#define SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8ED250)
#define SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x8ED310)
#define SYSTEM_TYPEDREFERENCE_INTERNALTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6D0B80)
#define SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A6D0A20)
#define SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A6D0540)
#define SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A6D0C20)
#define SYSTEM_TYPEDREFERENCE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6D0B00)

namespace System
{
	inline static constexpr unsigned int TypedReference_TypeDefinitionIndex = 341;

	struct alignas(8) TypedReference
	{
		::System::RuntimeTypeHandle type; // 0x10
		::System::IntPtr Value; // 0x18
		::System::IntPtr Type; // 0x20

		static ::System::TypedReference MakeTypedReference(::System::Object* target, ::Il2CppArray<::System::Reflection::FieldInfo*>* flds)
		{
			return ((::System::TypedReference(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET))(target, flds);
		}

		static ::System::TypedReference MakeTypedReferenceInternal(::System::Object* target, ::Il2CppArray<::System::Reflection::FieldInfo*>* fields)
		{
			return ((::System::TypedReference(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCEINTERNAL_OFFSET))(target, fields);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET))(this, o);
		}

		static ::System::Object* ToObject(::System::TypedReference value)
		{
			return ((::System::Object*(*)(::System::TypedReference))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_TOOBJECT_OFFSET))(value);
		}

		static ::System::Object* InternalToObject(::System::Void* value)
		{
			return ((::System::Object*(*)(::System::Void*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_INTERNALTOOBJECT_OFFSET))(value);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET))(this);
		}

		static ::System::Void SetTypedReference(::System::TypedReference target, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET))(target, value);
		}
	};
}
