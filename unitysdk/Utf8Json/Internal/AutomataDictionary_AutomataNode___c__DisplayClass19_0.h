#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace System::Reflection::Emit { class ILGenerator; }

#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA72370)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__EMITSEARCHNEXTCORE_B__2_OFFSET UNITYSDK_OFFSET(0x1FA723B0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__EMITSEARCHNEXTCORE_B__3_OFFSET UNITYSDK_OFFSET(0x1FA72380)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode___c__DisplayClass19_0_TypeDefinitionIndex = 95160;

	class AutomataDictionary_AutomataNode___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Reflection::Emit::Label _EmitSearchNextCore_b__3(::System::Int32 _)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__EMITSEARCHNEXTCORE_B__3_OFFSET))(this, _);
		}

		::System::Reflection::Emit::Label _EmitSearchNextCore_b__2(::System::Int32 _)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS19_0__EMITSEARCHNEXTCORE_B__2_OFFSET))(this, _);
		}
	};
}
