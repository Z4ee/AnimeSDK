#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleEnum_1.h"
#include "unitysdk/UnityEngine/UIElements/StyleFloat.h"
#include "unitysdk/UnityEngine/UIElements/StyleInt.h"
#include "unitysdk/UnityEngine/UIElements/StyleLength.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleValue.h"

namespace System { class String; }
namespace UnityEngine::UIElements { template <typename T> class IStyleValue_1; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET UNITYSDK_OFFSET(0x1EDFCAE0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET UNITYSDK_OFFSET(0x1EDFCAC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueExtensions_TypeDefinitionIndex = 5999;

	class StyleValueExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleLength ToStyleLength(::UnityEngine::UIElements::StyleSheets::StyleValue a1)
		{
			return ((::UnityEngine::UIElements::StyleLength(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET))(a1);
		}

		static ::UnityEngine::UIElements::StyleFloat ToStyleFloat(::UnityEngine::UIElements::StyleSheets::StyleValue a1)
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET))(a1);
		}
	};
}
