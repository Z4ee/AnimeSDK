#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8D60A0)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D8D6120)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D6020)

namespace System::Threading
{
	inline static constexpr unsigned int LockRecursionException_TypeDefinitionIndex = 821;

	class LockRecursionException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
