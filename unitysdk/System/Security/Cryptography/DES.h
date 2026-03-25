#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET UNITYSDK_OFFSET(0x164102F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1640FC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x16410380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET UNITYSDK_OFFSET(0x1640FE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x1640FD80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x16410390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x16410030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CCTOR_OFFSET UNITYSDK_OFFSET(0x164104D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CTOR_OFFSET UNITYSDK_OFFSET(0x1640FBC0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DES_TypeDefinitionIndex = 1008;

	class DES : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(DES_TypeDefinitionIndex)->GetStaticField(0x8420);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(DES_TypeDefinitionIndex)->GetStaticField(0x8428);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET))(this, value);
		}

		static ::System::Security::Cryptography::DES* Create()
		{
			return ((::System::Security::Cryptography::DES*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET))();
		}

		static ::System::Boolean IsWeakKey(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET))(rgbKey);
		}

		static ::System::Boolean IsSemiWeakKey(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET))(rgbKey);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET))(rgbKey);
		}

		static ::System::UInt64 QuadWordFromBigEndian(::Il2CppArray<::System::Byte>* block)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET))(block);
		}
	};
}
