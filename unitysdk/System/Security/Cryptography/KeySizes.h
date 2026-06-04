#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x187F12D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x187F12C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_SKIPSIZE_OFFSET UNITYSDK_OFFSET(0x187F12E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x187F1330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET UNITYSDK_OFFSET(0x187F12F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET UNITYSDK_OFFSET(0x187E4640)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeySizes_TypeDefinitionIndex = 999;

	class KeySizes : public ::System::Object
	{
	public:
		::System::Int32 m_minSize; // 0x10
		::System::Int32 m_skipSize; // 0x14
		::System::Int32 m_maxSize; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_MinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MINSIZE_OFFSET))(this);
		}

		::System::Int32 get_MaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Int32 get_SkipSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_SKIPSIZE_OFFSET))(this);
		}

		::System::Boolean IsLegal(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET))(this, a1);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Security::Cryptography::KeySizes*>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Security::Cryptography::KeySizes*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET))(a1, a2);
		}
	};
}
