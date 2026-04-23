#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleSheetCache_SheetHandleKey.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A51BDE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A51BDF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A51BD10)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_SheetHandleKeyComparer_TypeDefinitionIndex = 5991;

	class StyleSheetCache_SheetHandleKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey x, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey y)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey key)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET))(this, key);
		}
	};
}
