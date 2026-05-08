#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { class Object; }
namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A8630)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDictionary_TypeDefinitionIndex = 28459;

	class SVGDictionary : public ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
