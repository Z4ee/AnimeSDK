#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElement; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E982390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E982590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E982670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9824B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E982750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9822B0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainElementEnumerator_TypeDefinitionIndex = 3198;

	class X509ChainElementEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void _ctor(::System::Collections::IEnumerable* enumerable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR__CTOR_OFFSET))(this, enumerable);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElement* get_Current()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
