#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19E12130)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x19E12190)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x19E11BB0)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x19E11B80)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E11EC0)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfoSerializationHolder_TypeDefinitionIndex = 546;

	class MemberInfoSerializationHolder : public ::System::Object
	{
	public:
		::System::RuntimeType* m_reflectedType; // 0x10
		::System::Runtime::Serialization::SerializationInfo* m_info; // 0x18
		::System::String* m_signature2; // 0x20
		::System::String* m_signature; // 0x28
		::System::String* m_memberName; // 0x30
		::System::Reflection::MemberTypes m_memberType; // 0x38

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER__CTOR_OFFSET))(this, info, context);
		}

		static ::System::Void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::String* name, ::System::RuntimeType* reflectedClass, ::System::String* signature, ::System::Reflection::MemberTypes type)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::Reflection::MemberTypes))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET))(info, name, reflectedClass, signature, type);
		}

		static ::System::Void GetSerializationInfo_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::String* name, ::System::RuntimeType* reflectedClass, ::System::String* signature, ::System::String* signature2, ::System::Reflection::MemberTypes type, ::Il2CppArray<::System::Type*>* genericArguments)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::String*, ::System::Reflection::MemberTypes, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_1_OFFSET))(info, name, reflectedClass, signature, signature2, type, genericArguments);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, context);
		}
	};
}
