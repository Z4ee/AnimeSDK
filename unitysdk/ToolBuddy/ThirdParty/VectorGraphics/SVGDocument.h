#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierContour.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Inheritance.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathCorner.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathEnding.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathProperties.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_ClipData.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_DimType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_MaskData.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_NodeGlobalSceneState.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_NodeReferenceData.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_NodeWithParent.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_PatternData.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_PostponedClip.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_PostponedStopData.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_ViewBoxInfo.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Xml { class XmlReader; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class GradientFill; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDictionary; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDocument_ElemHandler; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDocument_GradientExData; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDocument_Handlers; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPostponedFills; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleResolver; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleResolver_StyleLayer; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Scene; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Shape; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Stroke; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator_Node; }
namespace UnityEngine { class Texture2D; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADDTOSVGDICTIONARYIFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1DA8BE70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTFILLS_OFFSET UNITYSDK_OFFSET(0x1DA9A060)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTGRADIENTFILL_OFFSET UNITYSDK_OFFSET(0x1DA9AE40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTPATTERNFILL_OFFSET UNITYSDK_OFFSET(0x1DA9B8A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_APPLYCLIPPER_OFFSET UNITYSDK_OFFSET(0x1DA93E80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_APPLYVIEWBOX_OFFSET UNITYSDK_OFFSET(0x1DA8E750)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBFLOATVAL_OFFSET UNITYSDK_OFFSET(0x1DA95D30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_1_OFFSET UNITYSDK_OFFSET(0x1DA8BB80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_2_OFFSET UNITYSDK_OFFSET(0x1DA90DF0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_OFFSET UNITYSDK_OFFSET(0x1DA98EC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CIRCLE_OFFSET UNITYSDK_OFFSET(0x1DA8AD20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLIPPATH_OFFSET UNITYSDK_OFFSET(0x1DA938C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONECONTOUR_OFFSET UNITYSDK_OFFSET(0x1DA98770)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEFILL_OFFSET UNITYSDK_OFFSET(0x1DA98850)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEGRADIENTFILL_OFFSET UNITYSDK_OFFSET(0x1DA90D60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEPATHPROPS_OFFSET UNITYSDK_OFFSET(0x1DA98B40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONESCENENODE_OFFSET UNITYSDK_OFFSET(0x1DA97EC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONESHAPE_OFFSET UNITYSDK_OFFSET(0x1DA98510)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_DECODETEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1DA8DC60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_DEFS_OFFSET UNITYSDK_OFFSET(0x1DA8C230)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELLIPSE_OFFSET UNITYSDK_OFFSET(0x1DA8C5E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_NODEIDS_OFFSET UNITYSDK_OFFSET(0x1DA899E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_NODEOPACITIES_OFFSET UNITYSDK_OFFSET(0x1DA899D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_STOCKBLACKNONZEROFILLNAME_OFFSET UNITYSDK_OFFSET(0x1DA878F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_STOCKBLACKODDEVENFILLNAME_OFFSET UNITYSDK_OFFSET(0x1DA878B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_G_OFFSET UNITYSDK_OFFSET(0x1DA8CD10)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_IMAGE_OFFSET UNITYSDK_OFFSET(0x1DA8CFE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_IMPORT_OFFSET UNITYSDK_OFFSET(0x1DA88F00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINEARGRADIENT_OFFSET UNITYSDK_OFFSET(0x1DA902C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINE_OFFSET UNITYSDK_OFFSET(0x1DA8FC00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_MASK_OFFSET UNITYSDK_OFFSET(0x1DA94790)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECHILDREN_OFFSET UNITYSDK_OFFSET(0x1DA899F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECLIPANDMASK_OFFSET UNITYSDK_OFFSET(0x1DA8BE40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECLIP_OFFSET UNITYSDK_OFFSET(0x1DA98F40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEID_OFFSET UNITYSDK_OFFSET(0x1DA8B380)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEMASK_OFFSET UNITYSDK_OFFSET(0x1DA99270)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEOPACITY_OFFSET UNITYSDK_OFFSET(0x1DA8B530)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSESTROKEATTRIBUTESET_OFFSET UNITYSDK_OFFSET(0x1DA8B5F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWBOXASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1DA8E080)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWBOX_OFFSET UNITYSDK_OFFSET(0x1DA95E30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1DA8DF50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PATH_OFFSET UNITYSDK_OFFSET(0x1DA91530)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PATTERN_OFFSET UNITYSDK_OFFSET(0x1DA940B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POLYGON_OFFSET UNITYSDK_OFFSET(0x1DA91A80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POLYLINE_OFFSET UNITYSDK_OFFSET(0x1DA92520)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1DA89870)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RADIALGRADIENT_OFFSET UNITYSDK_OFFSET(0x1DA92F90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RECT_OFFSET UNITYSDK_OFFSET(0x1DA94C80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_REMOVEINVISIBLENODES_OFFSET UNITYSDK_OFFSET(0x1DA89880)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RESOLVEREFERENCEDNODE_OFFSET UNITYSDK_OFFSET(0x1DA8EA40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SHOULDDECLARESUPPORTEDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1DA8BF40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_STOP_OFFSET UNITYSDK_OFFSET(0x1DA954D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_STYLE_OFFSET UNITYSDK_OFFSET(0x1DA96E70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SUPPORTELEMS_OFFSET UNITYSDK_OFFSET(0x1DA8BFD0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SVG_OFFSET UNITYSDK_OFFSET(0x1DA891A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SYMBOL_OFFSET UNITYSDK_OFFSET(0x1DA96130)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_USE_OFFSET UNITYSDK_OFFSET(0x1DA96890)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D2A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87A70)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_TypeDefinitionIndex = 31735;

	class SVGDocument : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_whiteSpaceNumberChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SVGDocument_TypeDefinitionIndex)->GetStaticField(0x26FB0);
		}
		::System::String* currentGradientLink; // 0x10
		::System::Collections::Generic::HashSet_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ElemHandler*>* elemsToAddToHierarchy; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_Handlers*>* subTags; // 0x20
		::ToolBuddy::ThirdParty::VectorGraphics::SVGDictionary* svgObjects; // 0x28
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector2>* currentViewBoxSize; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_PostponedStopData>*>* postponedStopData; // 0x38
		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ElemHandler*>* allElems; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_NodeReferenceData>*>* postponedSymbolData; // 0x48
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ClipData>* clipData; // 0x50
		::ToolBuddy::ThirdParty::VectorGraphics::SVGPostponedFills* postponedFills; // 0x58
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver* styles; // 0x60
		::ToolBuddy::ThirdParty::VectorGraphics::Scene* scene; // 0x68
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_NodeGlobalSceneState>* nodeGlobalSceneState; // 0x70
		::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator* docReader; // 0x78
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector2>* currentContainerSize; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_PostponedClip>*>* postponedClip; // 0x88
		::System::Collections::Generic::Stack_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* currentSceneNode; // 0x90
		::System::String* currentGradientId; // 0x98
		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_NodeWithParent>* invisibleNodes; // 0xA0
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* nodeOpacity; // 0xA8
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::GradientFill*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_GradientExData*>* gradientExInfo; // 0xB0
		::ToolBuddy::ThirdParty::VectorGraphics::GradientFill* currentGradientFill; // 0xB8
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo>* symbolViewBoxes; // 0xC0
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_MaskData>* maskData; // 0xC8
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver_StyleLayer*>* nodeStyleLayers; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* nodeIDs; // 0xD8
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_PatternData>* patternData; // 0xE0
		::System::Int32 windowWidth; // 0xE8
		::UnityEngine::Rect sceneViewport; // 0xEC
		::UnityEngine::Vector2 scenePos; // 0xFC
		::System::Boolean applyRootViewBox; // 0x104
		::System::Int32 windowHeight; // 0x108
		::System::Single dpiScale; // 0x10C
		::UnityEngine::Vector2 sceneSize; // 0x110

		::System::Void _ctor(::System::Xml::XmlReader* docReader, ::System::Single dpi, ::ToolBuddy::ThirdParty::VectorGraphics::Scene* scene, ::System::Int32 windowWidth, ::System::Int32 windowHeight, ::System::Boolean applyRootViewBox)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Single, ::ToolBuddy::ThirdParty::VectorGraphics::Scene*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT__CTOR_OFFSET))(this, docReader, dpi, scene, windowWidth, windowHeight, applyRootViewBox);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT__CCTOR_OFFSET))();
		}

		::System::Void Import()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_IMPORT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* get_NodeOpacities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_NODEOPACITIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* get_NodeIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_NODEIDS_OFFSET))(this);
		}

		static ::System::String* get_StockBlackNonZeroFillName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_STOCKBLACKNONZEROFILLNAME_OFFSET))();
		}

		static ::System::String* get_StockBlackOddEvenFillName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_GET_STOCKBLACKODDEVENFILLNAME_OFFSET))();
		}

		::System::Void ParseChildren(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::String* nodeName)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECHILDREN_OFFSET))(this, node, nodeName);
		}

		::System::Void circle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CIRCLE_OFFSET))(this);
		}

		::System::Void defs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_DEFS_OFFSET))(this);
		}

		::System::Void ellipse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELLIPSE_OFFSET))(this);
		}

		::System::Void g()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_G_OFFSET))(this);
		}

		::System::Void image()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_IMAGE_OFFSET))(this);
		}

		::System::Void line()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINE_OFFSET))(this);
		}

		::System::Void linearGradient()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_LINEARGRADIENT_OFFSET))(this);
		}

		::System::Void path()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PATH_OFFSET))(this);
		}

		::System::Void polygon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POLYGON_OFFSET))(this);
		}

		::System::Void polyline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POLYLINE_OFFSET))(this);
		}

		::System::Void radialGradient()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RADIALGRADIENT_OFFSET))(this);
		}

		::System::Void clipPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLIPPATH_OFFSET))(this);
		}

		::System::Void pattern()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PATTERN_OFFSET))(this);
		}

		::System::Void mask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_MASK_OFFSET))(this);
		}

		::System::Void rect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RECT_OFFSET))(this);
		}

		::System::Void stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_STOP_OFFSET))(this);
		}

		::System::Void svg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SVG_OFFSET))(this);
		}

		::System::Void symbol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SYMBOL_OFFSET))(this);
		}

		::System::Void use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_USE_OFFSET))(this);
		}

		::System::Void style()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_STYLE_OFFSET))(this);
		}

		::System::Void ResolveReferencedNode(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* referencedNode, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_NodeReferenceData refData, ::System::Boolean isDeferred)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_NodeReferenceData, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_RESOLVEREFERENCEDNODE_OFFSET))(this, referencedNode, refData, isDeferred);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* CloneSceneNode(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONESCENENODE_OFFSET))(this, node);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Shape* CloneShape(::ToolBuddy::ThirdParty::VectorGraphics::Shape* shape)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Shape*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Shape*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONESHAPE_OFFSET))(this, shape);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::BezierContour CloneContour(::ToolBuddy::ThirdParty::VectorGraphics::BezierContour c)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierContour(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::BezierContour))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONECONTOUR_OFFSET))(this, c);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::IFill* CloneFill(::ToolBuddy::ThirdParty::VectorGraphics::IFill* fill)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::IFill*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEFILL_OFFSET))(this, fill);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathProperties ClonePathProps(::ToolBuddy::ThirdParty::VectorGraphics::PathProperties props)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathProperties(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathProperties))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEPATHPROPS_OFFSET))(this, props);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::GradientFill* CloneGradientFill(::ToolBuddy::ThirdParty::VectorGraphics::GradientFill* other)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::GradientFill*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::GradientFill*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_CLONEGRADIENTFILL_OFFSET))(this, other);
		}

		::System::Single AttribFloatVal(::System::String* attribName, ::System::Single defaultVal)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBFLOATVAL_OFFSET))(this, attribName, defaultVal);
		}

		::System::Single AttribLengthVal(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::String* attribName, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType dimType)
		{
			return ((::System::Single(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_OFFSET))(this, node, attribName, dimType);
		}

		::System::Single AttribLengthVal_1(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::String* attribName, ::System::Single defaultUnitVal, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType dimType)
		{
			return ((::System::Single(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::String*, ::System::Single, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_1_OFFSET))(this, node, attribName, defaultUnitVal, dimType);
		}

		::System::Single AttribLengthVal_2(::System::String* val, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::String* attribName, ::System::Single defaultUnitVal, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType dimType)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::String*, ::System::Single, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_DimType))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ATTRIBLENGTHVAL_2_OFFSET))(this, val, node, attribName, defaultUnitVal, dimType);
		}

		::System::Void AddToSVGDictionaryIfPossible(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::System::Object* vectorElement)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::System::Object*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADDTOSVGDICTIONARYIFPOSSIBLE_OFFSET))(this, node, vectorElement);
		}

		::UnityEngine::Rect ParseViewport(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode, ::UnityEngine::Vector2 defaultViewportSize)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWPORT_OFFSET))(this, node, sceneNode, defaultViewportSize);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo ParseViewBox(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode, ::UnityEngine::Rect sceneViewport)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWBOX_OFFSET))(this, node, sceneNode, sceneViewport);
		}

		::System::Void ParseViewBoxAspectRatio(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo& viewBoxInfo)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEVIEWBOXASPECTRATIO_OFFSET))(this, node, viewBoxInfo);
		}

		::System::Void ApplyViewBox(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo viewBoxInfo, ::UnityEngine::Rect sceneViewport)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxInfo, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_APPLYVIEWBOX_OFFSET))(this, sceneNode, viewBoxInfo, sceneViewport);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Stroke* ParseStrokeAttributeSet(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::PathCorner& strokeCorner, ::ToolBuddy::ThirdParty::VectorGraphics::PathEnding& strokeEnding, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance inheritance)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Stroke*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::PathCorner&, ::ToolBuddy::ThirdParty::VectorGraphics::PathEnding&, ::ToolBuddy::ThirdParty::VectorGraphics::Inheritance))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSESTROKEATTRIBUTESET_OFFSET))(this, node, strokeCorner, strokeEnding, inheritance);
		}

		::System::Void ParseID(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEID_OFFSET))(this, node, sceneNode);
		}

		::System::Single ParseOpacity(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode)
		{
			return ((::System::Single(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEOPACITY_OFFSET))(this, sceneNode);
		}

		::System::Void ParseClipAndMask(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECLIPANDMASK_OFFSET))(this, node, sceneNode);
		}

		::System::Void ParseClip(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSECLIP_OFFSET))(this, node, sceneNode);
		}

		::System::Void ApplyClipper(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* clipper, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* target, ::System::Boolean worldRelative)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_APPLYCLIPPER_OFFSET))(this, clipper, target, worldRelative);
		}

		::System::Void ParseMask(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* sceneNode)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_PARSEMASK_OFFSET))(this, node, sceneNode);
		}

		::UnityEngine::Texture2D* DecodeTextureData(::System::String* dataURI)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_DECODETEXTUREDATA_OFFSET))(this, dataURI);
		}

		::System::Void PostProcess(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_POSTPROCESS_OFFSET))(this, root);
		}

		::System::Void AdjustFills(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTFILLS_OFFSET))(this, root);
		}

		::System::Void AdjustGradientFill(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D worldTransform, ::ToolBuddy::ThirdParty::VectorGraphics::IFill* fill, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* contours, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D& computedTransform)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D, ::ToolBuddy::ThirdParty::VectorGraphics::IFill*, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTGRADIENTFILL_OFFSET))(this, node, worldTransform, fill, contours, computedTransform);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* AdjustPatternFill(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D worldTransform, ::ToolBuddy::ThirdParty::VectorGraphics::Shape* shape)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D, ::ToolBuddy::ThirdParty::VectorGraphics::Shape*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ADJUSTPATTERNFILL_OFFSET))(this, node, worldTransform, shape);
		}

		::System::Void RemoveInvisibleNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_REMOVEINVISIBLENODES_OFFSET))(this);
		}

		::System::Boolean ShouldDeclareSupportedChildren(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SHOULDDECLARESUPPORTEDCHILDREN_OFFSET))(this, node);
		}

		::System::Void SupportElems(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ElemHandler*>* handlers)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ElemHandler*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_SUPPORTELEMS_OFFSET))(this, node, handlers);
		}
	};
}
