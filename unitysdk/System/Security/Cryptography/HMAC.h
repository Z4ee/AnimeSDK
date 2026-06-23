#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/KeyedHashAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2D4010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2D4300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2D3E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1C2D40C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1C2D4150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C2D3D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2D4070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2D3F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET UNITYSDK_OFFSET(0x1C2D3B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D43A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMAC_TypeDefinitionIndex = 1063;

	class HMAC : public ::System::Security::Cryptography::KeyedHashAlgorithm
	{
	public:
		::System::Security::Cryptography::HashAlgorithm* m_hash2; // 0x30
		::Il2CppArray<::System::Byte>* m_outer; // 0x38
		::Il2CppArray<::System::Byte>* m_inner; // 0x40
		::System::Security::Cryptography::HashAlgorithm* m_hash1; // 0x48
		::System::String* m_hashName; // 0x50
		::System::Int32 blockSizeValue; // 0x58
		::System::Boolean m_hashing; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET))(this);
		}

		::System::Void UpdateIOPadBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET))(this);
		}

		::System::Void InitializeKey(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET))(this, value);
		}

		static ::System::Security::Cryptography::HMAC* Create()
		{
			return ((::System::Security::Cryptography::HMAC*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ib, ::System::Int32 cb)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET))(this, rgb, ib, cb);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
