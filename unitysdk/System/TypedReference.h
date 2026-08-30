#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B64850)
#define SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B64840)
#define SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3B648B0)
#define SYSTEM_TYPEDREFERENCE_INTERNALTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC7E820)
#define SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC7E660)
#define SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BC7E030)
#define SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BC7E8C0)
#define SYSTEM_TYPEDREFERENCE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC7E7A0)

namespace System
{
	inline static constexpr unsigned int TypedReference_TypeDefinitionIndex = 353;

	struct alignas(8) TypedReference
	{
		::System::RuntimeTypeHandle type; // 0x10
		::System::IntPtr Value; // 0x18
		::System::IntPtr Type; // 0x20

		static ::System::TypedReference MakeTypedReference(::System::Object* a1, ::Il2CppArray<::System::Reflection::FieldInfo*>* a2)
		{
			return ((::System::TypedReference(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET))(a1, a2);
		}

		static ::System::TypedReference MakeTypedReferenceInternal(::System::Object* a1, ::Il2CppArray<::System::Reflection::FieldInfo*>* a2)
		{
			return ((::System::TypedReference(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCEINTERNAL_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Object* ToObject(::System::TypedReference a1)
		{
			return ((::System::Object*(*)(::System::TypedReference))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_TOOBJECT_OFFSET))(a1);
		}

		static ::System::Object* InternalToObject(::System::Void* a1)
		{
			return ((::System::Object*(*)(::System::Void*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_INTERNALTOOBJECT_OFFSET))(a1);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET))(this);
		}

		static ::System::Void SetTypedReference(::System::TypedReference a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET))(a1, a2);
		}
	};
}
