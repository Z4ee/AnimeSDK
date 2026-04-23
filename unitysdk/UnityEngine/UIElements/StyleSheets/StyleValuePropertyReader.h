#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUEPROPERTYREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A51BE00)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleValuePropertyReader_TypeDefinitionIndex = 5988;

	class StyleValuePropertyReader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEVALUEPROPERTYREADER__CTOR_OFFSET))(this);
		}
	};
}
