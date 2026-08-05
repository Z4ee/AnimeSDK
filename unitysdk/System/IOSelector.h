#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IOSelectorJob; }

#define SYSTEM_IOSELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x1D888950)
#define SYSTEM_IOSELECTOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D888960)

namespace System
{
	inline static constexpr unsigned int IOSelector_TypeDefinitionIndex = 2701;

	class IOSelector : public ::System::Object
	{
	public:
		static ::System::Void Add(::System::IntPtr handle, ::System::IOSelectorJob* job)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IOSelectorJob*))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTOR_ADD_OFFSET))(handle, job);
		}

		static ::System::Void Remove(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTOR_REMOVE_OFFSET))(handle);
		}
	};
}
