#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Security::Cryptography { class DSAManaged; }
namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x187EEBC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187EEF00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x187EF080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187EEDF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x187EEFD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x187EF010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x187EF140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x187EF190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187EEBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187E62D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSACryptoServiceProvider_TypeDefinitionIndex = 1067;

	class DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA
	{
	public:
		static ::System::Boolean* StaticGet_useMachineKeyStore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::Mono::Security::Cryptography::DSAManaged* dsa; // 0x28
		::System::Boolean privateKeyExportable; // 0x30
		::System::Boolean m_disposed; // 0x31
		::System::Boolean persistKey; // 0x32
		::System::Boolean persisted; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Common(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, a1, a2);
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

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void OnKeyGenerated(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, a1, a2);
		}
	};
}
