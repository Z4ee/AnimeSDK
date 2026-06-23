#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LineInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LinkInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_QuadInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/TextDataNeeds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AEAC3F0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELISTS_OFFSET UNITYSDK_OFFSET(0x1AEAC290)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAC4D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_TextInfo_TypeDefinitionIndex = 63180;

	class NAP_TextInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_QuadInfo>* quadInfo; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>* linkInfo; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LineInfo>* lineInfo; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* characterInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Void EnsureLists(::UnityEngine::UI::Extension::TextDataNeeds needs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TextDataNeeds))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELISTS_OFFSET))(this, needs);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEAR_OFFSET))(this);
		}
	};
}
