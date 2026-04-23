#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class DigestHeaderParser; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A100760)
#define SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A101BC0)
#define SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET UNITYSDK_OFFSET(0x1A101CE0)
#define SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET UNITYSDK_OFFSET(0x1A1024C0)
#define SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x1A100720)
#define SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x1A101C50)
#define SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET UNITYSDK_OFFSET(0x1A101CA0)
#define SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET UNITYSDK_OFFSET(0x1A101C10)
#define SYSTEM_NET_DIGESTSESSION_HA1_OFFSET UNITYSDK_OFFSET(0x1A101FB0)
#define SYSTEM_NET_DIGESTSESSION_HA2_OFFSET UNITYSDK_OFFSET(0x1A102190)
#define SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A101DE0)
#define SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET UNITYSDK_OFFSET(0x1A1005D0)
#define SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1A1022A0)
#define SYSTEM_NET_DIGESTSESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A101B70)
#define SYSTEM_NET_DIGESTSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A100590)

namespace System::Net
{
	inline static constexpr unsigned int DigestSession_TypeDefinitionIndex = 2819;

	class DigestSession : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(DigestSession_TypeDefinitionIndex)->GetStaticField(0x13630);
		}
		::System::String* _cnonce; // 0x10
		::System::Net::DigestHeaderParser* parser; // 0x18
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x20
		::System::DateTime lastUse; // 0x28
		::System::Int32 _nc; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION__CTOR_OFFSET))(this);
		}

		::System::String* get_Algorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET))(this);
		}

		::System::String* get_Realm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET))(this);
		}

		::System::String* get_Nonce()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET))(this);
		}

		::System::String* get_Opaque()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET))(this);
		}

		::System::String* get_QOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET))(this);
		}

		::System::String* get_CNonce()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET))(this);
		}

		::System::Boolean Parse(::System::String* challenge)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET))(this, challenge);
		}

		::System::String* HashToHexString(::System::String* toBeHashed)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET))(this, toBeHashed);
		}

		::System::String* HA1(::System::String* username, ::System::String* password)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA1_OFFSET))(this, username, password);
		}

		::System::String* HA2(::System::Net::HttpWebRequest* webRequest)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA2_OFFSET))(this, webRequest);
		}

		::System::String* Response(::System::String* username, ::System::String* password, ::System::Net::HttpWebRequest* webRequest)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET))(this, username, password, webRequest);
		}

		::System::Net::Authorization* Authenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET))(this, webRequest, credentials);
		}

		::System::DateTime get_LastUse()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET))(this);
		}
	};
}
