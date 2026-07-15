#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x18D1A020)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1A410)

namespace System
{
	inline static constexpr unsigned int DelegateSerializationHolder_DelegateEntry_TypeDefinitionIndex = 387;

	class DelegateSerializationHolder_DelegateEntry : public ::System::Object
	{
	public:
		::System::String* targetTypeName; // 0x10
		::System::String* targetTypeAssembly; // 0x18
		::System::String* type; // 0x20
		::System::String* methodName; // 0x28
		::System::DelegateSerializationHolder_DelegateEntry* delegateEntry; // 0x30
		::System::Object* target; // 0x38
		::System::String* assembly; // 0x40

		::System::Void _ctor(::System::Delegate* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Delegate* DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET))(this, a1, a2);
		}
	};
}
