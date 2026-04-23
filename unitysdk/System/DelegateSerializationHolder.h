#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x178DDC40)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x178DECD0)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x178DED20)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x178DE540)

namespace System
{
	inline static constexpr unsigned int DelegateSerializationHolder_TypeDefinitionIndex = 387;

	class DelegateSerializationHolder : public ::System::Object
	{
	public:
		::System::Delegate* _delegate; // 0x10

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER__CTOR_OFFSET))(this, info, ctx);
		}

		static ::System::Void GetDelegateData(::System::Delegate* instance, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET))(instance, info, ctx);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, context);
		}
	};
}
