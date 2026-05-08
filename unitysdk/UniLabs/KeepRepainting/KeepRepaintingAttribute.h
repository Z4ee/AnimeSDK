#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UniLabs/Utilities/EditorMode.h"

namespace System { class String; }

#define UNILABS_KEEPREPAINTING_KEEPREPAINTINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4990C0)
#define UNILABS_KEEPREPAINTING_KEEPREPAINTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4990B0)

namespace UniLabs::KeepRepainting
{
	inline static constexpr unsigned int KeepRepaintingAttribute_TypeDefinitionIndex = 85831;

	class KeepRepaintingAttribute : public ::System::Attribute
	{
	public:
		::System::String* RepaintIf; // 0x10
		::UniLabs::Utilities::EditorMode RepaintEditorMode; // 0x18
		::System::Single RepaintInterval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_KEEPREPAINTING_KEEPREPAINTINGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UniLabs::Utilities::EditorMode repaintEditorMode, ::System::Single repaintInterval)
		{
			return ((::System::Void(*)(::PVOID, ::UniLabs::Utilities::EditorMode, ::System::Single))((::PBYTE)hIl2Cpp + UNILABS_KEEPREPAINTING_KEEPREPAINTINGATTRIBUTE__CTOR_1_OFFSET))(this, repaintEditorMode, repaintInterval);
		}
	};
}
