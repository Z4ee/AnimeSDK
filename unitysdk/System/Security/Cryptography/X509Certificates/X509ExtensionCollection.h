#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C8C90)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ExtensionCollection_TypeDefinitionIndex = 2701;

	class X509ExtensionCollection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509ExtensionCollection_TypeDefinitionIndex)->GetStaticField(0x2F260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CCTOR_OFFSET))();
		}
	};
}
