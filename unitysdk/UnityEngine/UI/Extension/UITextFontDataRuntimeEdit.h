#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_UITEXTFONTDATARUNTIMEEDIT_RESET_OFFSET UNITYSDK_OFFSET(0x900460)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextFontDataRuntimeEdit_TypeDefinitionIndex = 72668;

	struct alignas(1) UITextFontDataRuntimeEdit
	{
		::System::Boolean m_BestFit; // 0x10
		::System::Byte m_MinSize; // 0x11
		::System::Byte m_MaxSize; // 0x12

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTFONTDATARUNTIMEEDIT_RESET_OFFSET))(this);
		}
	};
}
