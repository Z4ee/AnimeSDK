#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_NAMEDWEBCOLORDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19F5F0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int NamedWebColorDictionary_TypeDefinitionIndex = 28489;

	class NamedWebColorDictionary : public ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_NAMEDWEBCOLORDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
