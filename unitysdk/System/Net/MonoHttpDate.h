#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_MONOHTTPDATE_PARSE_OFFSET UNITYSDK_OFFSET(0x1C881560)
#define SYSTEM_NET_MONOHTTPDATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8816C0)
#define SYSTEM_NET_MONOHTTPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8816B0)

namespace System::Net
{
	inline static constexpr unsigned int MonoHttpDate_TypeDefinitionIndex = 3548;

	class MonoHttpDate : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_rfc1123_date()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHttpDate_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::String** StaticGet_asctime_date()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHttpDate_TypeDefinitionIndex)->GetStaticField(0x3798);
		}
		static ::System::String** StaticGet_rfc850_date()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHttpDate_TypeDefinitionIndex)->GetStaticField(0x37A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_formats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHttpDate_TypeDefinitionIndex)->GetStaticField(0x37A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOHTTPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOHTTPDATE__CCTOR_OFFSET))();
		}

		static ::System::DateTime Parse(::System::String* dateStr)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOHTTPDATE_PARSE_OFFSET))(dateStr);
		}
	};
}
