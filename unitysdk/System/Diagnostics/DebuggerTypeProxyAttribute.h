#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB516A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerTypeProxyAttribute_TypeDefinitionIndex = 1580;

	class DebuggerTypeProxyAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeName; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
