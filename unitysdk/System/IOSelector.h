#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IOSelectorJob; }

#define SYSTEM_IOSELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x1E9506F0)

namespace System
{
	inline static constexpr unsigned int IOSelector_TypeDefinitionIndex = 2490;

	class IOSelector : public ::System::Object
	{
	public:
		static ::System::Void Add(::System::IntPtr a1, ::System::IOSelectorJob* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IOSelectorJob*))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTOR_ADD_OFFSET))(a1, a2);
		}
	};
}
