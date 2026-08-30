#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class Aes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET UNITYSDK_OFFSET(0x1E771ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x1E76F9F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET UNITYSDK_OFFSET(0x1E76FA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET UNITYSDK_OFFSET(0x1E76F900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E774380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76F190)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesTransform_TypeDefinitionIndex = 3131;

	class AesTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_T0()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_Rcon()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SBox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT1()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T1()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT2()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT3()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT0()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T3()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T2()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_iSBox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		::Il2CppArray<::System::UInt32>* expandedKey; // 0x50
		::System::Int32 Nr; // 0x58
		::System::Int32 Nk; // 0x5C

		::System::Void _ctor(::System::Security::Cryptography::Aes* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Aes*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET))(this, a1, a2);
		}

		::System::UInt32 SubByte(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET))(this, a1);
		}

		::System::Void Encrypt128(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Decrypt128(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET))(this, a1, a2, a3);
		}
	};
}
