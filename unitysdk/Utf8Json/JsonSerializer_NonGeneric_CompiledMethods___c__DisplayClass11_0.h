#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C21E7B0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__GETMETHOD_B__0_OFFSET UNITYSDK_OFFSET(0x1C21E7C0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__GETMETHOD_B__1_OFFSET UNITYSDK_OFFSET(0x1C21E820)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric_CompiledMethods___c__DisplayClass11_0_TypeDefinitionIndex = 85512;

	class JsonSerializer_NonGeneric_CompiledMethods___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Type*>* arguments; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMethod_b__0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__GETMETHOD_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetMethod_b__1(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS___C__DISPLAYCLASS11_0__GETMETHOD_B__1_OFFSET))(this, x);
		}
	};
}
