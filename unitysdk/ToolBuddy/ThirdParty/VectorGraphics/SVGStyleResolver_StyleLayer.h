#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGStyleResolver_NodeData.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleSheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_STYLELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E510)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver_StyleLayer_TypeDefinitionIndex = 31757;

	class SVGStyleResolver_StyleLayer : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_NodeData nodeData; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* attributeSheet; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* styleSheet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_STYLELAYER__CTOR_OFFSET))(this);
		}
	};
}
