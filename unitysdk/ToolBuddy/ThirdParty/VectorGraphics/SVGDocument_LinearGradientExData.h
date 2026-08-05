#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_GradientExData.h"

namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINEARGRADIENTEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA90DE0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_LinearGradientExData_TypeDefinitionIndex = 31745;

	class SVGDocument_LinearGradientExData : public ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_GradientExData
	{
	public:
		::System::String* Y2; // 0x30
		::System::String* X1; // 0x38
		::System::String* Y1; // 0x40
		::System::String* X2; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINEARGRADIENTEXDATA__CTOR_OFFSET))(this);
		}
	};
}
