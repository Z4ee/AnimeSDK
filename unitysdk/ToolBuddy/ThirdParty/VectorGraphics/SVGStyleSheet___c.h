#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C08B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C08F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__GET_SELECTORS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A1C0900)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleSheet___c_TypeDefinitionIndex = 28494;

	class SVGStyleSheet___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SVGStyleSheet___c_TypeDefinitionIndex)->GetStaticField(0x21AC0);
		}
		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet___c** StaticGet___9()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet___c**)Il2CppClass::FromTypeDefinitionIndex(SVGStyleSheet___c_TypeDefinitionIndex)->GetStaticField(0x21AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__CTOR_OFFSET))(this);
		}

		::System::String* _get_selectors_b__5_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*>))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEET___C__GET_SELECTORS_B__5_0_OFFSET))(this, x);
		}
	};
}
