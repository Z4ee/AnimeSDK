#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json::Internal { class AutomataDictionary_AutomataNode; }

#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95A2C0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F95A300)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1F95A310)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__19_1_OFFSET UNITYSDK_OFFSET(0x1F95A330)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode___c_TypeDefinitionIndex = 95161;

	class AutomataDictionary_AutomataNode___c : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::AutomataDictionary_AutomataNode___c** StaticGet___9()
		{
			return (::Utf8Json::Internal::AutomataDictionary_AutomataNode___c**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x52EF0);
		}
		static ::System::Func_2<::Utf8Json::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x52EF8);
		}
		static ::System::Func_2<::Utf8Json::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Utf8Json::Internal::AutomataDictionary_AutomataNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode___c_TypeDefinitionIndex)->GetStaticField(0x52F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _EmitSearchNextCore_b__19_0(::Utf8Json::Internal::AutomataDictionary_AutomataNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__19_0_OFFSET))(this, x);
		}

		::System::Boolean _EmitSearchNextCore_b__19_1(::Utf8Json::Internal::AutomataDictionary_AutomataNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__EMITSEARCHNEXTCORE_B__19_1_OFFSET))(this, x);
		}
	};
}
