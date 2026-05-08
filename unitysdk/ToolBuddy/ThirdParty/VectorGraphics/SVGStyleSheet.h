#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A1C0870)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A1BF930)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_GET_SELECTORS_OFFSET UNITYSDK_OFFSET(0x1A1BF830)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A1BF6A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BF550)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleSheet_TypeDefinitionIndex = 28491;

	class SVGStyleSheet : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>>* m_Selectors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET__CTOR_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* get_Item(::System::String* key)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_selectors()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_GET_SELECTORS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET_CLEAR_OFFSET))(this);
		}
	};
}
