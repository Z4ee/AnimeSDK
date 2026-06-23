#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }

#define SYSTEM_DIAGNOSTICS_ASSERTWRAPPER_SHOWASSERT_OFFSET UNITYSDK_OFFSET(0x1B751650)
#define SYSTEM_DIAGNOSTICS_ASSERTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7516D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int AssertWrapper_TypeDefinitionIndex = 2790;

	class AssertWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASSERTWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void ShowAssert(::System::String* stackTrace, ::System::Diagnostics::StackFrame* frame, ::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::Diagnostics::StackFrame*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASSERTWRAPPER_SHOWASSERT_OFFSET))(stackTrace, frame, message, detailMessage);
		}
	};
}
