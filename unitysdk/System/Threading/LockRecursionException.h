#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC3AFE0)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC3B040)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3AF80)

namespace System::Threading
{
	inline static constexpr unsigned int LockRecursionException_TypeDefinitionIndex = 835;

	class LockRecursionException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
