#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UICharInfo.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText___c__DisplayClass185_0_TypeDefinitionIndex = 45425;

	struct alignas(8) UILocalizationText___c__DisplayClass185_0
	{
		::UnityEngine::UI::Extension::UILocalizationText* __4__this; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* charInfos; // 0x18
		::System::Boolean richMatch; // 0x20
		::System::Int32 richStack; // 0x24
	};
}
