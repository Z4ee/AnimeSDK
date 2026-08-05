#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UIElements { class StyleSelector; }

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0076A0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0076E0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__TOSTRING_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D0076F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector___c_TypeDefinitionIndex = 28196;

	class StyleComplexSelector___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleComplexSelector___c** StaticGet___9()
		{
			return (::UnityEngine::UIElements::StyleComplexSelector___c**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector___c_TypeDefinitionIndex)->GetStaticField(0x23D30);
		}
		static ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector___c_TypeDefinitionIndex)->GetStaticField(0x23D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__20_0(::UnityEngine::UIElements::StyleSelector* x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleSelector*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR___C__TOSTRING_B__20_0_OFFSET))(this, x);
		}
	};
}
