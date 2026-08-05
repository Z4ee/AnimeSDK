#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/KeyedHashAlgorithm.h"

namespace System::Security::Cryptography { class CryptoStream; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class TailStream; }
namespace System::Security::Cryptography { class TripleDES; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D817200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1D816E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1D817050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D816E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D816CC0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MACTripleDES_TypeDefinitionIndex = 1072;

	class MACTripleDES : public ::System::Security::Cryptography::KeyedHashAlgorithm
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* m_encryptor; // 0x30
		::System::Security::Cryptography::TripleDES* des; // 0x38
		::System::Security::Cryptography::TailStream* _ts; // 0x40
		::System::Security::Cryptography::CryptoStream* _cs; // 0x48
		::System::Int32 m_bytesPerBlock; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgbData, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET))(this, rgbData, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
