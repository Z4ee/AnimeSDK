#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleColor.h"
#include "unitysdk/UnityEngine/UIElements/StyleFont.h"
#include "unitysdk/UnityEngine/UIElements/StyleInt.h"
#include "unitysdk/UnityEngine/UIElements/StyleLength.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197BC0A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x197BBF20)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197BC110)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x197BC2E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x197BBDD0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int InheritedStylesData_TypeDefinitionIndex = 25119;

	class InheritedStylesData : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleSheets::InheritedStylesData** StaticGet_none()
		{
			return (::UnityEngine::UIElements::StyleSheets::InheritedStylesData**)Il2CppClass::FromTypeDefinitionIndex(InheritedStylesData_TypeDefinitionIndex)->GetStaticField(0x1E9C0);
		}
		::UnityEngine::UIElements::StyleColor color; // 0x10
		::UnityEngine::UIElements::StyleFont font; // 0x28
		::UnityEngine::UIElements::StyleLength fontSize; // 0x40
		::UnityEngine::UIElements::StyleInt unityFontStyle; // 0x50
		::UnityEngine::UIElements::StyleInt unityTextAlign; // 0x5C
		::UnityEngine::UIElements::StyleInt visibility; // 0x68
		::UnityEngine::UIElements::StyleInt whiteSpace; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleSheets::InheritedStylesData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::InheritedStylesData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_INHERITEDSTYLESDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
