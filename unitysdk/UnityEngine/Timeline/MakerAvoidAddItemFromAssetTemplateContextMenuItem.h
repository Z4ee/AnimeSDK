#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_MAKERAVOIDADDITEMFROMASSETTEMPLATECONTEXTMENUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C405A00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MakerAvoidAddItemFromAssetTemplateContextMenuItem_TypeDefinitionIndex = 30868;

	class MakerAvoidAddItemFromAssetTemplateContextMenuItem : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MAKERAVOIDADDITEMFROMASSETTEMPLATECONTEXTMENUITEM__CTOR_OFFSET))(this);
		}
	};
}
