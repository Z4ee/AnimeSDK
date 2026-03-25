#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Security::Cryptography { class DSAManaged; }
namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x16413850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16413B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16413CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16413A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16413C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x16413C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16413D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x16413DC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16413840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1640B150)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSACryptoServiceProvider_TypeDefinitionIndex = 1066;

	class DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA
	{
	public:
		static ::System::Boolean* StaticGet_useMachineKeyStore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x43F0);
		}
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::Mono::Security::Cryptography::DSAManaged* dsa; // 0x28
		::System::Boolean persisted; // 0x30
		::System::Boolean privateKeyExportable; // 0x31
		::System::Boolean persistKey; // 0x32
		::System::Boolean m_disposed; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 dwKeySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this, dwKeySize);
		}

		::System::Void Common(::System::Int32 dwKeySize, ::System::Boolean parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, dwKeySize, parameters);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, sender, e);
		}
	};
}
