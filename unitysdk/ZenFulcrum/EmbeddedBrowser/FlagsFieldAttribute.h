#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_FLAGSFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D46E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FlagsFieldAttribute_TypeDefinitionIndex = 33145;

	class FlagsFieldAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FLAGSFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
