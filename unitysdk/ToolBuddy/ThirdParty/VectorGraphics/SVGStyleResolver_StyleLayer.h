#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGStyleResolver_NodeData.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleSheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_STYLELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BF310)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver_StyleLayer_TypeDefinitionIndex = 28483;

	class SVGStyleResolver_StyleLayer : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* attributeSheet; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* styleSheet; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_NodeData nodeData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_STYLELAYER__CTOR_OFFSET))(this);
		}
	};
}
