#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UIElements/Length.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StylePropertyID.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1BA46330)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1BA462D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1BA46300)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x1BA46350)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0x1BA46370)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleValue_TypeDefinitionIndex = 6274;

	struct alignas(4) StyleValue
	{
		::UnityEngine::UIElements::StyleSheets::StylePropertyID id; // 0x10
		::UnityEngine::UIElements::StyleKeyword keyword; // 0x14
		::System::Single number; // 0x18
		::UnityEngine::UIElements::Length length; // 0x18
		::UnityEngine::Color color; // 0x18
		::System::Runtime::InteropServices::GCHandle resource; // 0x18

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_OFFSET))(a1);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_1(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1, ::UnityEngine::UIElements::StyleKeyword a2)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_2(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1, ::System::Single a2)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_3(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_3_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_4(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_4_OFFSET))(a1, a2);
		}
	};
}
