#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Inheritance.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGStyleResolver_NodeData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleResolver_StyleLayer; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleSheet; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator_Node; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C5FBC00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_GETLAYERFORSCENNODE_OFFSET UNITYSDK_OFFSET(0x1C60EFE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPPROPERTYINSHEET_OFFSET UNITYSDK_OFFSET(0x1C616250)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C616060)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPSTYLEORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C615F30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PEEKLAYER_OFFSET UNITYSDK_OFFSET(0x1C6100D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_POPLAYER_OFFSET UNITYSDK_OFFSET(0x1C60F710)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_POPNODE_OFFSET UNITYSDK_OFFSET(0x1C601DB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PUSHLAYER_OFFSET UNITYSDK_OFFSET(0x1C60F090)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PUSHNODE_OFFSET UNITYSDK_OFFSET(0x1C601520)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SAVELAYERFORSCENENODE_OFFSET UNITYSDK_OFFSET(0x1C601A20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SETGLOBALSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x1C60ECB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SORTEDCLASSES_OFFSET UNITYSDK_OFFSET(0x1C615790)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FFF00)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver_TypeDefinitionIndex = 31136;

	class SVGStyleResolver : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* globalStyleSheet; // 0x10
		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*>* layers; // 0x18
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*>* nodeLayers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void PushNode(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PUSHNODE_OFFSET))(this, node);
		}

		::System::Void PopNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_POPNODE_OFFSET))(this);
		}

		::System::Void PushLayer(::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer* layer)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PUSHLAYER_OFFSET))(this, layer);
		}

		::System::Void PopLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_POPLAYER_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer* PeekLayer()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_PEEKLAYER_OFFSET))(this);
		}

		::System::Void SaveLayerForSceneNode(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SAVELAYERFORSCENENODE_OFFSET))(this, node);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer* GetLayerForScenNode(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_GETLAYERFORSCENNODE_OFFSET))(this, node);
		}

		::System::Void SetGlobalStyleSheet(::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* sheet)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SETGLOBALSTYLESHEET_OFFSET))(this, sheet);
		}

		::System::String* Evaluate(::System::String* attribName, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_EVALUATE_OFFSET))(this, attribName, inheritance);
		}

		::System::Boolean LookupStyleOrAttribute(::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer* layer, ::System::String* attribName, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance, ::System::String*& attrib)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance, ::System::String*&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPSTYLEORATTRIBUTE_OFFSET))(this, layer, attribName, inheritance, attrib);
		}

		::System::Boolean LookupProperty(::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_NodeData nodeData, ::System::String* attribName, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* sheet, ::System::String*& val)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_NodeData, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet*, ::System::String*&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPPROPERTY_OFFSET))(this, nodeData, attribName, sheet, val);
		}

		::System::Boolean LookupPropertyInSheet(::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet* sheet, ::System::String* attribName, ::System::String* selector, ::System::String*& val)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleSheet*, ::System::String*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_LOOKUPPROPERTYINSHEET_OFFSET))(this, sheet, attribName, selector, val);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* SortedClasses(::System::Collections::Generic::List_1<::System::String*>* classes)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER_SORTEDCLASSES_OFFSET))(this, classes);
		}
	};
}
