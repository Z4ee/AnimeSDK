#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UIElements/Length.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StylePropertyID.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x18AE0850)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x18AE07F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x18AE0820)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x18AE0870)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0x18AE0890)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleValue_TypeDefinitionIndex = 5980;

	struct alignas(4) StyleValue
	{
		::UnityEngine::UIElements::StyleSheets::StylePropertyID id; // 0x10
		::UnityEngine::UIElements::StyleKeyword keyword; // 0x14
		::System::Single number; // 0x18
		::UnityEngine::UIElements::Length length; // 0x18
		::UnityEngine::Color color; // 0x18
		::System::Runtime::InteropServices::GCHandle resource; // 0x18

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create(::UnityEngine::UIElements::StyleSheets::StylePropertyID id)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_OFFSET))(id);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_1(::UnityEngine::UIElements::StyleSheets::StylePropertyID id, ::UnityEngine::UIElements::StyleKeyword keyword)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_1_OFFSET))(id, keyword);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_2(::UnityEngine::UIElements::StyleSheets::StylePropertyID id, ::System::Single number)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_2_OFFSET))(id, number);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_3(::UnityEngine::UIElements::StyleSheets::StylePropertyID id, ::System::Int32 number)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_3_OFFSET))(id, number);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue Create_4(::UnityEngine::UIElements::StyleSheets::StylePropertyID id, ::UnityEngine::Color color)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUE_CREATE_4_OFFSET))(id, color);
		}
	};
}
