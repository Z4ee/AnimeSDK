#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1861DA80)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext_MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 841;

	class OSSpecificSynchronizationContext_MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
