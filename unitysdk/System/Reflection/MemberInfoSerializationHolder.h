#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BD97FD0)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1BD98030)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x1BD97960)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x1BD97930)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD97D10)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfoSerializationHolder_TypeDefinitionIndex = 574;

	class MemberInfoSerializationHolder : public ::System::Object
	{
	public:
		::System::String* m_signature2; // 0x10
		::System::RuntimeType* m_reflectedType; // 0x18
		::System::Runtime::Serialization::SerializationInfo* m_info; // 0x20
		::System::String* m_memberName; // 0x28
		::System::String* m_signature; // 0x30
		::System::Reflection::MemberTypes m_memberType; // 0x38

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* a1, ::System::String* a2, ::System::RuntimeType* a3, ::System::String* a4, ::System::Reflection::MemberTypes a5)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::Reflection::MemberTypes))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetSerializationInfo_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::String* a2, ::System::RuntimeType* a3, ::System::String* a4, ::System::String* a5, ::System::Reflection::MemberTypes a6, ::Il2CppArray<::System::Type*>* a7)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::String*, ::System::Reflection::MemberTypes, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, a1);
		}
	};
}
