#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GRADIENTEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D3A0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_GradientExData_TypeDefinitionIndex = 31744;

	class SVGDocument_GradientExData : public ::System::Object
	{
	public:
		::System::Boolean WorldRelative; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D FillTransform; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GRADIENTEXDATA__CTOR_OFFSET))(this);
		}
	};
}
