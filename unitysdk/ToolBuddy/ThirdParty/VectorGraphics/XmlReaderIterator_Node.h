#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGFormatException; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C615800)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C5FAAA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETUNSUPPORTEDATTRIBVALEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C607E70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1C61F5F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C5F9360)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C61F5E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61F590)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int XmlReaderIterator_Node_TypeDefinitionIndex = 31112;

	class XmlReaderIterator_Node : public ::System::Object
	{
	public:
		::System::Xml::XmlReader* reader; // 0x10
		::System::String* name; // 0x18
		::System::Int32 depth; // 0x20

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE__CTOR_OFFSET))(this, reader);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Item(::System::String* attrib)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_ITEM_OFFSET))(this, attrib);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* GetAttributes()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETATTRIBUTES_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException* GetException(::System::String* message)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETEXCEPTION_OFFSET))(this, message);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException* GetUnsupportedAttribValException(::System::String* attrib)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETUNSUPPORTEDATTRIBVALEXCEPTION_OFFSET))(this, attrib);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_DEPTH_OFFSET))(this);
		}
	};
}
