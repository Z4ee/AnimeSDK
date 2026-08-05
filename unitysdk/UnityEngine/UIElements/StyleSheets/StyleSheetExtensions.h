#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_ISVARFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D009160)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetExtensions_TypeDefinitionIndex = 28230;

	class StyleSheetExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsVarFunction(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_ISVARFUNCTION_OFFSET))(handle);
		}
	};
}
