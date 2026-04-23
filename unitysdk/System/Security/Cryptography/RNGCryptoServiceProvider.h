#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RandomNumberGenerator.h"

namespace System { class Object; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_CHECK_OFFSET UNITYSDK_OFFSET(0x17A491B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A49490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A493F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x17A3D7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x17A49220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGCLOSE_OFFSET UNITYSDK_OFFSET(0x17A49210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGGETBYTES_OFFSET UNITYSDK_OFFSET(0x17A49200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17A490E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGOPEN_OFFSET UNITYSDK_OFFSET(0x17A490D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A490C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A381A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RNGCryptoServiceProvider_TypeDefinitionIndex = 1071;

	class RNGCryptoServiceProvider : public ::System::Security::Cryptography::RandomNumberGenerator
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RNGCryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x8B20);
		}
		::System::IntPtr _handle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_CHECK_OFFSET))(this);
		}

		static ::System::Boolean RngOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGOPEN_OFFSET))();
		}

		static ::System::IntPtr RngInitialize(::Il2CppArray<::System::Byte>* seed)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGINITIALIZE_OFFSET))(seed);
		}

		static ::System::IntPtr RngGetBytes(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGGETBYTES_OFFSET))(handle, data);
		}

		static ::System::Void RngClose(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_RNGCLOSE_OFFSET))(handle);
		}

		::System::Void GetBytes(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETBYTES_OFFSET))(this, data);
		}

		::System::Void GetNonZeroBytes(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_GETNONZEROBYTES_OFFSET))(this, data);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
