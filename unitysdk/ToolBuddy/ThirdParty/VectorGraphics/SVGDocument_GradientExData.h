#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GRADIENTEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C614650)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_GradientExData_TypeDefinitionIndex = 31125;

	class SVGDocument_GradientExData : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D FillTransform; // 0x10
		::System::Boolean WorldRelative; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GRADIENTEXDATA__CTOR_OFFSET))(this);
		}
	};
}
