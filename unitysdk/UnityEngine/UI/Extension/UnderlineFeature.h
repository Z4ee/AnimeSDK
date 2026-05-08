#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/UnderlineFeature_LineSegment.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ADDUNDERLINEQUAD_OFFSET UNITYSDK_OFFSET(0x18AED100)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTCOLORSEGMENTS_OFFSET UNITYSDK_OFFSET(0x18AEE4D0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTRANGELINEBOXES_OFFSET UNITYSDK_OFFSET(0x18AED000)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLOREQUAL_OFFSET UNITYSDK_OFFSET(0x18AEE810)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_DRAWALL_OFFSET UNITYSDK_OFFSET(0x18AEBCE0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_FILTERRANGES_OFFSET UNITYSDK_OFFSET(0x18AEBB70)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETGIUNDERLINEY_OFFSET UNITYSDK_OFFSET(0x18AEC180)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETONESCREENPIXELINLOCAL_OFFSET UNITYSDK_OFFSET(0x18AEC580)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x18AEBA80)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETUNDERLINEUV_OFFSET UNITYSDK_OFFSET(0x18AEC240)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x18AEB970)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x18AEB860)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x18AEB990)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_INITQUADTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18AEC600)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x18AEB9F0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18AEC140)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONINIT_OFFSET UNITYSDK_OFFSET(0x18AEB9A0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPOSTPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18AEBB00)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x18AEC0C0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPREPROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x18AEBA30)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x18AEC100)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x18AEB980)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SPLITINTOLINES_OFFSET UNITYSDK_OFFSET(0x18AEE2A0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AEE910)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEE860)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UnderlineFeature_TypeDefinitionIndex = 41926;

	class UnderlineFeature : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet__quad()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0x30130);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet__featherQuad()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0x30138);
		}
		static ::System::Boolean* StaticGet__quadTemplateInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0xBA10);
		}
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UnderlineFeature_LineSegment>* _lineSegments; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _quadRanges; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* _lineBoxes; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* _host; // 0x28
		::System::Single _cachedUlOffsetLocal; // 0x30
		::System::Boolean _ContentActive_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_ContentActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_CONTENTACTIVE_OFFSET))(this);
		}

		::System::Void set_ContentActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SET_CONTENTACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInit(::UnityEngine::UI::Extension::UILocalizationText* host)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONINIT_OFFSET))(this, host);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONACTIVATE_OFFSET))(this);
		}

		::System::String* OnPreprocessText(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPREPROCESSTEXT_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void OnPostPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPOSTPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONREFRESH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void FilterRanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_FILTERRANGES_OFFSET))(this);
		}

		::System::Single GetGiUnderlineY(::System::Int32 gi)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETGIUNDERLINEY_OFFSET))(this, gi);
		}

		::System::Void DrawAll(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_DRAWALL_OFFSET))(this, toFill);
		}

		::System::Void CollectRangeLineBoxes(::System::Int32 giStart, ::System::Int32 giEnd, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* outBoxes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTRANGELINEBOXES_OFFSET))(this, giStart, giEnd, outBoxes);
		}

		::System::Void SplitIntoLines(::System::Int32 giStart, ::System::Int32 giEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SPLITINTOLINES_OFFSET))(this, giStart, giEnd);
		}

		::System::Void CollectColorSegments(::UnityEngine::UI::Extension::UnderlineFeature_LineSegment line, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* outBoxes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UnderlineFeature_LineSegment, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTCOLORSEGMENTS_OFFSET))(this, line, outBoxes);
		}

		static ::System::Boolean ColorEqual(::UnityEngine::Color32 a, ::UnityEngine::Color32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLOREQUAL_OFFSET))(a, b);
		}

		static ::System::Void InitQuadTemplate(::UnityEngine::Vector2 uvCenter)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_INITQUADTEMPLATE_OFFSET))(uvCenter);
		}

		::System::Void AddUnderlineQuad(::UnityEngine::UI::VertexHelper* vh, ::UnityEngine::Rect lineBox, ::UnityEngine::Color32 lineColor, ::System::Single thickness, ::System::Single feather)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Rect, ::UnityEngine::Color32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ADDUNDERLINEQUAD_OFFSET))(this, vh, lineBox, lineColor, thickness, feather);
		}

		::System::Single GetOneScreenPixelInLocal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETONESCREENPIXELINLOCAL_OFFSET))(this);
		}

		::System::Boolean GetUnderlineUV(::UnityEngine::Vector2& uvCenter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETUNDERLINEUV_OFFSET))(this, uvCenter);
		}
	};
}
