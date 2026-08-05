#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET UNITYSDK_OFFSET(0x1C336A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET UNITYSDK_OFFSET(0x1C336BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C336540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C336B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x1C336690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C3367E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C336D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3364D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDES_TypeDefinitionIndex = 1110;

	class TripleDES : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(TripleDES_TypeDefinitionIndex)->GetStaticField(0x10E0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(TripleDES_TypeDefinitionIndex)->GetStaticField(0x10E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET))(this, value);
		}

		static ::System::Security::Cryptography::TripleDES* Create()
		{
			return ((::System::Security::Cryptography::TripleDES*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET))();
		}

		static ::System::Boolean IsWeakKey(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET))(rgbKey);
		}

		static ::System::Boolean EqualBytes(::Il2CppArray<::System::Byte>* rgbKey, ::System::Int32 start1, ::System::Int32 start2, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET))(rgbKey, start1, start2, count);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET))(rgbKey);
		}
	};
}
