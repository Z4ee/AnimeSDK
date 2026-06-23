#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C2D4590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET UNITYSDK_OFFSET(0x1C2D4550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AE3D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeySizes_TypeDefinitionIndex = 1045;

	class KeySizes : public ::System::Object
	{
	public:
		::System::Int32 m_maxSize; // 0x10
		::System::Int32 m_skipSize; // 0x14
		::System::Int32 m_minSize; // 0x18

		::System::Void _ctor(::System::Int32 minSize, ::System::Int32 maxSize, ::System::Int32 skipSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET))(this, minSize, maxSize, skipSize);
		}

		::System::Boolean IsLegal(::System::Int32 keySize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET))(this, keySize);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Security::Cryptography::KeySizes*>* legalKeys, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Security::Cryptography::KeySizes*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET))(legalKeys, size);
		}
	};
}
