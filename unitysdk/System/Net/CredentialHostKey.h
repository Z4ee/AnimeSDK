#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_CREDENTIALHOSTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1921E580)
#define SYSTEM_NET_CREDENTIALHOSTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1921E400)
#define SYSTEM_NET_CREDENTIALHOSTKEY_MATCH_OFFSET UNITYSDK_OFFSET(0x1921E3A0)
#define SYSTEM_NET_CREDENTIALHOSTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1921E620)
#define SYSTEM_NET_CREDENTIALHOSTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1921E390)

namespace System::Net
{
	inline static constexpr unsigned int CredentialHostKey_TypeDefinitionIndex = 3269;

	class CredentialHostKey : public ::System::Object
	{
	public:
		::System::String* Host; // 0x10
		::System::String* AuthenticationType; // 0x18
		::System::Int32 m_HashCode; // 0x20
		::System::Boolean m_ComputedHashCode; // 0x24
		::System::Int32 Port; // 0x28

		::System::Void _ctor(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALHOSTKEY__CTOR_OFFSET))(this, host, port, authenticationType);
		}

		::System::Boolean Match(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALHOSTKEY_MATCH_OFFSET))(this, host, port, authenticationType);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALHOSTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALHOSTKEY_EQUALS_OFFSET))(this, comparand);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALHOSTKEY_TOSTRING_OFFSET))(this);
		}
	};
}
