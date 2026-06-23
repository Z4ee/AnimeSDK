#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierContour.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierSegment.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/FillMode.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Inheritance.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGAttribParser_AttribPath.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGAttribParser_AttribTransform.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class NamedWebColorDictionary; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDictionary; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPostponedFills; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleResolver; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Stroke; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator_Node; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_CLEANIRI_OFFSET UNITYSDK_OFFSET(0x1C5FCFF0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_CONCLUDEPATH_OFFSET UNITYSDK_OFFSET(0x1C5FD300)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0x1C5FDEF0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x1C5FD6F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTPATHCOMMAND_OFFSET UNITYSDK_OFFSET(0x1C5FD0A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTSTRINGCOMMAND_OFFSET UNITYSDK_OFFSET(0x1C5FE390)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTVECTOR2_OFFSET UNITYSDK_OFFSET(0x1C5FD2B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSECOLOR_OFFSET UNITYSDK_OFFSET(0x1C5FC6E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFILL_1_OFFSET UNITYSDK_OFFSET(0x1C5FB960)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFILL_OFFSET UNITYSDK_OFFSET(0x1C5FB930)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFLOAT_OFFSET UNITYSDK_OFFSET(0x1C5FBD20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEPATH_OFFSET UNITYSDK_OFFSET(0x1C5F9240)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSERELATIVEREF_OFFSET UNITYSDK_OFFSET(0x1C5FCEC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSESTROKEANDOPACITY_OFFSET UNITYSDK_OFFSET(0x1C5FC370)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSETRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1C5FABD0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C5FAB70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEURLREF_OFFSET UNITYSDK_OFFSET(0x1C5FCE40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PEEKSYMBOL_OFFSET UNITYSDK_OFFSET(0x1C5FE930)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_SKIPSYMBOL_OFFSET UNITYSDK_OFFSET(0x1C5FE670)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1C5FEB00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5FAD80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5FBD80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9390)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGAttribParser_TypeDefinitionIndex = 31141;

	class SVGAttribParser : public ::System::Object
	{
	public:
		static ::ToolBuddy::ThirdParty::VectorGraphics::NamedWebColorDictionary** StaticGet_namedColors()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::NamedWebColorDictionary**)Il2CppClass::FromTypeDefinitionIndex(SVGAttribParser_TypeDefinitionIndex)->GetStaticField(0x25820);
		}
		::System::Collections::Generic::LinkedList_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>* currentContour; // 0x10
		::System::String* attribString; // 0x18
		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* contours; // 0x20
		::System::String* attribName; // 0x28
		::ToolBuddy::ThirdParty::VectorGraphics::IFill* fill; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D transform; // 0x38
		::UnityEngine::Vector2 penPos; // 0x50
		::System::Char pathCommand; // 0x58
		::System::Int32 stringPos; // 0x5C

		::System::Void _ctor(::System::String* attrib, ::ToolBuddy::ThirdParty::VectorGraphics::SVGAttribParser_AttribPath attribPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGAttribParser_AttribPath))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_OFFSET))(this, attrib, attribPath);
		}

		::System::Void _ctor_1(::System::String* attrib, ::System::String* attribNameVal, ::ToolBuddy::ThirdParty::VectorGraphics::SVGAttribParser_AttribTransform attribTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGAttribParser_AttribTransform))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_1_OFFSET))(this, attrib, attribNameVal, attribTransform);
		}

		::System::Void _ctor_2(::System::String* attrib, ::System::String* attribName, ::System::Single opacity, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode mode, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* dict, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills* postponedFills, ::System::Boolean allowReference)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills*, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER__CTOR_2_OFFSET))(this, attrib, attribName, opacity, mode, dict, postponedFills, allowReference);
		}

		static ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* ParsePath(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEPATH_OFFSET))(node);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D ParseTransform(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSETRANSFORM_OFFSET))(node);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D ParseTransform_1(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::String* attribName)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSETRANSFORM_1_OFFSET))(node, attribName);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::IFill* ParseFill(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* dict, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills* postponedFills, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver* styles, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver*, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFILL_OFFSET))(node, dict, postponedFills, styles, inheritance);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::IFill* ParseFill_1(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* dict, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills* postponedFills, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver* styles, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance, ::System::Boolean& isDefaultFill)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver*, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance, ::System::Boolean&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFILL_1_OFFSET))(node, dict, postponedFills, styles, inheritance, isDefaultFill);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Stroke* ParseStrokeAndOpacity(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* dict, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver* styles, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Stroke*(*)(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver*, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSESTROKEANDOPACITY_OFFSET))(node, dict, styles, inheritance);
		}

		static ::UnityEngine::Color ParseColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSECOLOR_OFFSET))(colorString);
		}

		static ::System::String* ParseURLRef(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEURLREF_OFFSET))(url);
		}

		static ::System::Object* ParseRelativeRef(::System::String* iri, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* dict)
		{
			return ((::System::Object*(*)(::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSERELATIVEREF_OFFSET))(iri, dict);
		}

		static ::System::String* CleanIri(::System::String* iri)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_CLEANIRI_OFFSET))(iri);
		}

		::System::Void ConcludePath(::System::Boolean joinEnds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_CONCLUDEPATH_OFFSET))(this, joinEnds);
		}

		::UnityEngine::Vector2 NextVector2(::System::Boolean relative)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTVECTOR2_OFFSET))(this, relative);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTFLOAT_OFFSET))(this);
		}

		static ::System::Single ParseFloat(::System::String* s)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PARSEFLOAT_OFFSET))(s);
		}

		::System::Boolean NextBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTBOOL_OFFSET))(this);
		}

		::System::Char NextPathCommand(::System::Boolean noCommandInheritance)
		{
			return ((::System::Char(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTPATHCOMMAND_OFFSET))(this, noCommandInheritance);
		}

		::System::String* NextStringCommand()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_NEXTSTRINGCOMMAND_OFFSET))(this);
		}

		::System::Void SkipSymbol(::System::Char s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_SKIPSYMBOL_OFFSET))(this, s);
		}

		::System::Boolean PeekSymbol(::System::Char s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_PEEKSYMBOL_OFFSET))(this, s);
		}

		::System::Void SkipWhitespaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGATTRIBPARSER_SKIPWHITESPACES_OFFSET))(this);
		}
	};
}
