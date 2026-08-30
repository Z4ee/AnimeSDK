#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StylePropertyID.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleSheetCache_SheetHandleKey.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleValue.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UIElements::StyleSheets { class StyleSheetCache_SheetHandleKeyComparer; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x1D61C0E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D61C6B0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_TypeDefinitionIndex = 6004;

	class StyleSheetCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StyleValue>** StaticGet_s_InitialStyleValues()
		{
			return (::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StyleValue>**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_s_DeprecatedNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::System::Int32>** StaticGet_s_EnumToIntCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>** StaticGet_s_NameToIDCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAE8);
		}
		static ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer** StaticGet_s_Comparer()
		{
			return (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StylePropertyID>*>** StaticGet_s_RulePropertyIDsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StylePropertyID>*>**)Il2CppClass::FromTypeDefinitionIndex(StyleSheetCache_TypeDefinitionIndex)->GetStaticField(0x1CAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue GetInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETINITIALVALUE_OFFSET))(a1);
		}
	};
}
