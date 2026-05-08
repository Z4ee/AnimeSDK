#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography::X509Certificates { class X509Extension; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193CB7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x193CB9A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x193CBA80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193CB8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193CBB60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x193CB6C0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ExtensionEnumerator_TypeDefinitionIndex = 3207;

	class X509ExtensionEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void _ctor(::System::Collections::ArrayList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR__CTOR_OFFSET))(this, list);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Extension* get_Current()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Extension*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
