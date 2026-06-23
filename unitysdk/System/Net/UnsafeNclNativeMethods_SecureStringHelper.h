#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecureString; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESECURESTRING_OFFSET UNITYSDK_OFFSET(0x1C664AD0)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1C664BC0)

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_SecureStringHelper_TypeDefinitionIndex = 3485;

	class UnsafeNclNativeMethods_SecureStringHelper : public ::System::Object
	{
	public:
		static ::System::String* CreateString(::System::Security::SecureString* secureString)
		{
			return ((::System::String*(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESTRING_OFFSET))(secureString);
		}

		static ::System::Security::SecureString* CreateSecureString(::System::String* plainString)
		{
			return ((::System::Security::SecureString*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_SECURESTRINGHELPER_CREATESECURESTRING_OFFSET))(plainString);
		}
	};
}
