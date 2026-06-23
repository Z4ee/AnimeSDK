#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { class String; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPOSTPONEDFILLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FFE70)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGPostponedFills_TypeDefinitionIndex = 31115;

	class SVGPostponedFills : public ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::IFill*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPOSTPONEDFILLS__CTOR_OFFSET))(this);
		}
	};
}
