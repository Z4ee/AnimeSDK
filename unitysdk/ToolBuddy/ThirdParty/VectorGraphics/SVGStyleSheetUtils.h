#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleSheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_COMBINEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DAA0070)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_COPYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DAA0FB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_ISSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1DAA1D40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1DAA1D20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEINLINE_OFFSET UNITYSDK_OFFSET(0x1DA9E7D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPARENVALUE_OFFSET UNITYSDK_OFFSET(0x1DAA18E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DAA0C20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DAA11B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSESELECTOR_OFFSET UNITYSDK_OFFSET(0x1DAA0210)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSE_OFFSET UNITYSDK_OFFSET(0x1DA970F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PEEKTOKEN_OFFSET UNITYSDK_OFFSET(0x1DAA0F50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_POPTOKEN_OFFSET UNITYSDK_OFFSET(0x1DAA0EA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x1DA9FB50)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleSheetUtils_TypeDefinitionIndex = 31769;

	class SVGStyleSheetUtils : public ::System::Object
	{
	public:
		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* Parse(::System::String* cssText)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet*(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSE_OFFSET))(cssText);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* ParseInline(::System::String* cssText)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEINLINE_OFFSET))(cssText);
		}

		static ::System::Boolean ParseSelector(::System::Collections::Generic::List_1<::System::String*>* tokens, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* sheet)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSESELECTOR_OFFSET))(tokens, sheet);
		}

		static ::System::Void CombineProperties(::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* first, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* second)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_COMBINEPROPERTIES_OFFSET))(first, second);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* CopyProperties(::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* props)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*(*)(::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_COPYPROPERTIES_OFFSET))(props);
		}

		static ::System::Boolean ParseProperties(::System::Collections::Generic::List_1<::System::String*>* tokens, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* props)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPROPERTIES_OFFSET))(tokens, props);
		}

		static ::System::Boolean ParseProperty(::System::Collections::Generic::List_1<::System::String*>* tokens, ::System::String*& name, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPROPERTY_OFFSET))(tokens, name, value);
		}

		static ::System::String* ParseParenValue(::System::Collections::Generic::List_1<::System::String*>* tokens)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PARSEPARENVALUE_OFFSET))(tokens);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Tokenize(::System::String* cssText)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_TOKENIZE_OFFSET))(cssText);
		}

		static ::System::String* PeekToken(::System::Collections::Generic::List_1<::System::String*>* tokens)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_PEEKTOKEN_OFFSET))(tokens);
		}

		static ::System::String* PopToken(::System::Collections::Generic::List_1<::System::String*>* tokens)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_POPTOKEN_OFFSET))(tokens);
		}

		static ::System::Boolean IsSeparator(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_ISSEPARATOR_OFFSET))(ch);
		}

		static ::System::Boolean IsWhitespace(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLESHEETUTILS_ISWHITESPACE_OFFSET))(ch);
		}
	};
}
