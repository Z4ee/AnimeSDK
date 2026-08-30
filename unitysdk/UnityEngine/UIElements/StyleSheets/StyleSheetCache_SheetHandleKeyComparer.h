#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleSheetCache_SheetHandleKey.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D61F3A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D61F3B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61F2D0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_SheetHandleKeyComparer_TypeDefinitionIndex = 6006;

	class StyleSheetCache_SheetHandleKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey a1, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
