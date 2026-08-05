#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA1.h"

namespace System::Security::Cryptography { class SHA1Internal; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E450500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E4504F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1E450540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1E450570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E4505A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E450440)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1CryptoServiceProvider_TypeDefinitionIndex = 1122;

	class SHA1CryptoServiceProvider : public ::System::Security::Cryptography::SHA1
	{
	public:
		::System::Security::Cryptography::SHA1Internal* sha; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET))(this);
		}
	};
}
