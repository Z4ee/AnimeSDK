#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_INTERNAL_AUTOMATAKEYGEN_GETKEYSAFE_OFFSET UNITYSDK_OFFSET(0x1F911AD0)
#define UTF8JSON_INTERNAL_AUTOMATAKEYGEN_GETKEY_OFFSET UNITYSDK_OFFSET(0x1F911980)
#define UTF8JSON_INTERNAL_AUTOMATAKEYGEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F912840)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int AutomataKeyGen_TypeDefinitionIndex = 95163;

	class AutomataKeyGen : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetKeyMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(AutomataKeyGen_TypeDefinitionIndex)->GetStaticField(0x52EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATAKEYGEN__CCTOR_OFFSET))();
		}

		static ::System::UInt64 GetKey(::System::Byte*& p, ::System::Int32& rest)
		{
			return ((::System::UInt64(*)(::System::Byte*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATAKEYGEN_GETKEY_OFFSET))(p, rest);
		}

		static ::System::UInt64 GetKeySafe(::Il2CppArray<::System::Byte>* bytes, ::System::Int32& offset, ::System::Int32& rest)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATAKEYGEN_GETKEYSAFE_OFFSET))(bytes, offset, rest);
		}
	};
}
