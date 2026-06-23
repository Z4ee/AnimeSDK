#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C616D30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS2_0__GET_ITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1C616DF0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleSheet___c__DisplayClass2_0_TypeDefinitionIndex = 31147;

	class SVGStyleSheet___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Item_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__DISPLAYCLASS2_0__GET_ITEM_B__0_OFFSET))(this, x);
		}
	};
}
