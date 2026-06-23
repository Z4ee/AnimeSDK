#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_GradientExData.h"

namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RADIALGRADIENTEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60AB60)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_RadialGradientExData_TypeDefinitionIndex = 31127;

	class SVGDocument_RadialGradientExData : public ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_GradientExData
	{
	public:
		::System::String* Fx; // 0x30
		::System::String* Cy; // 0x38
		::System::String* Cx; // 0x40
		::System::String* Fy; // 0x48
		::System::String* R; // 0x50
		::System::Boolean Parsed; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RADIALGRADIENTEXDATA__CTOR_OFFSET))(this);
		}
	};
}
