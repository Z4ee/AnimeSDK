#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x16418160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16416A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164169C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET UNITYSDK_OFFSET(0x16416AE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x16417CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16416920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x16416BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x16417F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x164182B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1640B5C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MD5CryptoServiceProvider_TypeDefinitionIndex = 1067;

	class MD5CryptoServiceProvider : public ::System::Security::Cryptography::MD5
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_K()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MD5CryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x8550);
		}
		::Il2CppArray<::System::UInt32>* buff; // 0x28
		::Il2CppArray<::System::Byte>* _ProcessingBuffer; // 0x30
		::Il2CppArray<::System::UInt32>* _H; // 0x38
		::System::Int32 _ProcessingBufferCount; // 0x40
		::System::UInt64 count; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET))(this);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_PROCESSBLOCK_OFFSET))(this, inputBuffer, inputOffset);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_PROCESSFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Void AddLength(::System::UInt64 length, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_ADDLENGTH_OFFSET))(this, length, buffer, position);
		}
	};
}
