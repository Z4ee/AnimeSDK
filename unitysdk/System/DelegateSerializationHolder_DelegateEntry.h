#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BE18500)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE18380)

namespace System
{
	inline static constexpr unsigned int DelegateSerializationHolder_DelegateEntry_TypeDefinitionIndex = 376;

	class DelegateSerializationHolder_DelegateEntry : public ::System::Object
	{
	public:
		::System::String* type; // 0x10
		::System::String* assembly; // 0x18
		::System::String* targetTypeName; // 0x20
		::System::DelegateSerializationHolder_DelegateEntry* delegateEntry; // 0x28
		::System::String* methodName; // 0x30
		::System::String* targetTypeAssembly; // 0x38
		::System::Object* target; // 0x40

		::System::Void _ctor(::System::Delegate* del, ::System::String* targetLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY__CTOR_OFFSET))(this, del, targetLabel);
		}

		::System::Delegate* DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* info, ::System::Int32 index)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET))(this, info, index);
		}
	};
}
