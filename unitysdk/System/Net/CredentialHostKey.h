#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_CREDENTIALHOSTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C880280)
#define SYSTEM_NET_CREDENTIALHOSTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C880100)
#define SYSTEM_NET_CREDENTIALHOSTKEY_MATCH_OFFSET UNITYSDK_OFFSET(0x1C8800A0)
#define SYSTEM_NET_CREDENTIALHOSTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C880320)
#define SYSTEM_NET_CREDENTIALHOSTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C880090)

namespace System::Net
{
	inline static constexpr unsigned int CredentialHostKey_TypeDefinitionIndex = 3268;

	class CredentialHostKey : public ::System::Object
	{
	public:
		::System::String* AuthenticationType; // 0x10
		::System::String* Host; // 0x18
		::System::Boolean m_ComputedHashCode; // 0x20
		::System::Int32 Port; // 0x24
		::System::Int32 m_HashCode; // 0x28

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
