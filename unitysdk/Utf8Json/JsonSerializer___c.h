#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_JSONSERIALIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D54C0)
#define UTF8JSON_JSONSERIALIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D5500)
#define UTF8JSON_JSONSERIALIZER___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1C1D5510)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer___c_TypeDefinitionIndex = 85515;

	class JsonSerializer___c : public ::System::Object
	{
	public:
		static ::Utf8Json::JsonSerializer___c** StaticGet___9()
		{
			return (::Utf8Json::JsonSerializer___c**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer___c_TypeDefinitionIndex)->GetStaticField(0x4A990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* __cctor_b__38_0(::System::Int32 x)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER___C___CCTOR_B__38_0_OFFSET))(this, x);
		}
	};
}
