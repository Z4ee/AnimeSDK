#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security { class SecureString; }

#define SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOCOTASKMEMANSI_OFFSET UNITYSDK_OFFSET(0x1C1DE040)
#define SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET UNITYSDK_OFFSET(0x1C1DE0C0)
#define SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOGLOBALALLOCANSI_OFFSET UNITYSDK_OFFSET(0x1C1DE050)
#define SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOGLOBALALLOCUNICODE_OFFSET UNITYSDK_OFFSET(0x1C1DE0D0)

namespace System::Security
{
	inline static constexpr unsigned int SecureStringMarshal_TypeDefinitionIndex = 3137;

	class SecureStringMarshal : public ::System::Object
	{
	public:
		static ::System::IntPtr SecureStringToCoTaskMemAnsi(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOCOTASKMEMANSI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToGlobalAllocAnsi(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOGLOBALALLOCANSI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToCoTaskMemUnicode(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToGlobalAllocUnicode(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRINGMARSHAL_SECURESTRINGTOGLOBALALLOCUNICODE_OFFSET))(s);
		}
	};
}
