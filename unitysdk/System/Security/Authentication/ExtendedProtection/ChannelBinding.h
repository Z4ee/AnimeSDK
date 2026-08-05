#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CHANNELBINDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD2DF10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CHANNELBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2DED0)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ChannelBinding_TypeDefinitionIndex = 3153;

	class ChannelBinding : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CHANNELBINDING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CHANNELBINDING__CTOR_1_OFFSET))(this, ownsHandle);
		}
	};
}
