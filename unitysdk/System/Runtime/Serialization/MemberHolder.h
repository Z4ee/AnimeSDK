#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0663A0)
#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D066360)
#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D066350)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int MemberHolder_TypeDefinitionIndex = 1146;

	class MemberHolder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::MemberInfo*>* members; // 0x10
		::System::Runtime::Serialization::StreamingContext context; // 0x18
		::System::Type* memberType; // 0x28

		::System::Void _ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER__CTOR_OFFSET))(this, type, ctx);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_EQUALS_OFFSET))(this, obj);
		}
	};
}
