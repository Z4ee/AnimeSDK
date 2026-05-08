#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C0860)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS3_0__SET_ITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1A1C0940)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleSheet___c__DisplayClass3_0_TypeDefinitionIndex = 28493;

	class SVGStyleSheet___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _set_Item_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS3_0__SET_ITEM_B__0_OFFSET))(this, x);
		}
	};
}
