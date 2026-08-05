#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace Utf8Json { class JsonSerializer_NonGeneric_CompiledMethods; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F749BC0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F749C00)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F749C10)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric___c_TypeDefinitionIndex = 95020;

	class JsonSerializer_NonGeneric___c : public ::System::Object
	{
	public:
		static ::Utf8Json::JsonSerializer_NonGeneric___c** StaticGet___9()
		{
			return (::Utf8Json::JsonSerializer_NonGeneric___c**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_NonGeneric___c_TypeDefinitionIndex)->GetStaticField(0x528F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC___C__CTOR_OFFSET))(this);
		}

		::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods* __cctor_b__4_0(::System::Type* t)
		{
			return ((::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC___C___CCTOR_B__4_0_OFFSET))(this, t);
		}
	};
}
