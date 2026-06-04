#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x186960B0)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18697010)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x18697060)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18696920)

namespace System
{
	inline static constexpr unsigned int DelegateSerializationHolder_TypeDefinitionIndex = 386;

	class DelegateSerializationHolder : public ::System::Object
	{
	public:
		::System::Delegate* _delegate; // 0x10

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetDelegateData(::System::Delegate* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET))(a1, a2, a3);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, a1);
		}
	};
}
