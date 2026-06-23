#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_NET_CREDENTIALKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D5D2350)
#define SYSTEM_NET_CREDENTIALKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5D2270)
#define SYSTEM_NET_CREDENTIALKEY_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x1D5D1F90)
#define SYSTEM_NET_CREDENTIALKEY_MATCH_OFFSET UNITYSDK_OFFSET(0x1D5D1EF0)
#define SYSTEM_NET_CREDENTIALKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D5D23F0)
#define SYSTEM_NET_CREDENTIALKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1EA0)

namespace System::Net
{
	inline static constexpr unsigned int CredentialKey_TypeDefinitionIndex = 3269;

	class CredentialKey : public ::System::Object
	{
	public:
		::System::Uri* UriPrefix; // 0x10
		::System::String* AuthenticationType; // 0x18
		::System::Boolean m_ComputedHashCode; // 0x20
		::System::Int32 UriPrefixLength; // 0x24
		::System::Int32 m_HashCode; // 0x28

		::System::Void _ctor(::System::Uri* uriPrefix, ::System::String* authenticationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY__CTOR_OFFSET))(this, uriPrefix, authenticationType);
		}

		::System::Boolean Match(::System::Uri* uri, ::System::String* authenticationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY_MATCH_OFFSET))(this, uri, authenticationType);
		}

		::System::Boolean IsPrefix(::System::Uri* uri, ::System::Uri* prefixUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY_ISPREFIX_OFFSET))(this, uri, prefixUri);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY_EQUALS_OFFSET))(this, comparand);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALKEY_TOSTRING_OFFSET))(this);
		}
	};
}
