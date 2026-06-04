#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_DIGESTHEADERPARSER_GETKEYWORDANDVALUE_OFFSET UNITYSDK_OFFSET(0x1AF678B0)
#define SYSTEM_NET_DIGESTHEADERPARSER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1AF67C50)
#define SYSTEM_NET_DIGESTHEADERPARSER_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AF675B0)
#define SYSTEM_NET_DIGESTHEADERPARSER_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x1AF67580)
#define SYSTEM_NET_DIGESTHEADERPARSER_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x1AF67550)
#define SYSTEM_NET_DIGESTHEADERPARSER_GET_QOP_OFFSET UNITYSDK_OFFSET(0x1AF675E0)
#define SYSTEM_NET_DIGESTHEADERPARSER_GET_REALM_OFFSET UNITYSDK_OFFSET(0x1AF67520)
#define SYSTEM_NET_DIGESTHEADERPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1AF67610)
#define SYSTEM_NET_DIGESTHEADERPARSER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AF67BA0)
#define SYSTEM_NET_DIGESTHEADERPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF67DD0)
#define SYSTEM_NET_DIGESTHEADERPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF67470)

namespace System::Net
{
	inline static constexpr unsigned int DigestHeaderParser_TypeDefinitionIndex = 2818;

	class DigestHeaderParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_keywords()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DigestHeaderParser_TypeDefinitionIndex)->GetStaticField(0x24800);
		}
		::Il2CppArray<::System::String*>* values; // 0x10
		::System::String* header; // 0x18
		::System::Int32 pos; // 0x20
		::System::Int32 length; // 0x24

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER__CCTOR_OFFSET))();
		}

		::System::String* get_Realm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GET_REALM_OFFSET))(this);
		}

		::System::String* get_Opaque()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GET_OPAQUE_OFFSET))(this);
		}

		::System::String* get_Nonce()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GET_NONCE_OFFSET))(this);
		}

		::System::String* get_Algorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GET_ALGORITHM_OFFSET))(this);
		}

		::System::String* get_QOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GET_QOP_OFFSET))(this);
		}

		::System::Boolean Parse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_PARSE_OFFSET))(this);
		}

		::System::Void SkipWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::String* GetKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GETKEY_OFFSET))(this);
		}

		::System::Boolean GetKeywordAndValue(::System::String*& a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTHEADERPARSER_GETKEYWORDANDVALUE_OFFSET))(this, a1, a2);
		}
	};
}
