#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C429750)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C429790)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__SERIALIZE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C4297A0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter___c_TypeDefinitionIndex = 85748;

	class DynamicObjectTypeFallbackFormatter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Utf8Json::IJsonFormatterResolver*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Utf8Json::IJsonFormatterResolver*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter___c_TypeDefinitionIndex)->GetStaticField(0x4A900);
		}
		static ::Utf8Json::Formatters::DynamicObjectTypeFallbackFormatter___c** StaticGet___9()
		{
			return (::Utf8Json::Formatters::DynamicObjectTypeFallbackFormatter___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter___c_TypeDefinitionIndex)->GetStaticField(0x4A908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__CTOR_OFFSET))(this);
		}

		::System::String* _Serialize_b__4_0(::Utf8Json::IJsonFormatterResolver* x)
		{
			return ((::System::String*(*)(::PVOID, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER___C__SERIALIZE_B__4_0_OFFSET))(this, x);
		}
	};
}
