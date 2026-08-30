#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecureString; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESECURESTRING_OFFSET UNITYSDK_OFFSET(0x1B976B90)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1B976940)

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_SecureStringHelper_TypeDefinitionIndex = 2818;

	class UnsafeNclNativeMethods_SecureStringHelper : public ::System::Object
	{
	public:
		static ::System::String* CreateString(::System::Security::SecureString* a1)
		{
			return ((::System::String*(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESTRING_OFFSET))(a1);
		}

		static ::System::Security::SecureString* CreateSecureString(::System::String* a1)
		{
			return ((::System::Security::SecureString*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESECURESTRING_OFFSET))(a1);
		}
	};
}
