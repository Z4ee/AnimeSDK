#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/MarkFeature_MarkBoundsMode.h"
#include "unitysdk/UnityEngine/UI/Extension/MarkFeature_MarkSegment.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWALL_OFFSET UNITYSDK_OFFSET(0x1C1499A0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C14AB90)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWTEXTHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1C14B0F0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_ENSURETEXCOORD3CHANNEL_OFFSET UNITYSDK_OFFSET(0x1C149FD0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_FILTERRANGES_OFFSET UNITYSDK_OFFSET(0x1C1497D0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_GETFILLUV_OFFSET UNITYSDK_OFFSET(0x1C149C70)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1C1496F0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_INITQUADTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C14A170)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_SPLITINTOLINESEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C14AA00)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x1C149780)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHPREPENDER_ONPREPENDMESH_OFFSET UNITYSDK_OFFSET(0x1C149940)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14B560)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14B4D0)
#define UNITYENGINE_UI_EXTENSION_MARKFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1C14B5C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int MarkFeature_TypeDefinitionIndex = 90136;

	class MarkFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet__quad()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(MarkFeature_TypeDefinitionIndex)->GetStaticField(0x3DCE0);
		}
		static ::UnityEngine::UI::Extension::MarkFeature_MarkBoundsMode* StaticGet_markBoundsMode()
		{
			return (::UnityEngine::UI::Extension::MarkFeature_MarkBoundsMode*)Il2CppClass::FromTypeDefinitionIndex(MarkFeature_TypeDefinitionIndex)->GetStaticField(0xE7B0);
		}
		static ::UnityEngine::Vector4* StaticGet_kDecorationStyleParams()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(MarkFeature_TypeDefinitionIndex)->GetStaticField(0xE7B4);
		}
		static ::System::Boolean* StaticGet__quadTemplateInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MarkFeature_TypeDefinitionIndex)->GetStaticField(0xE7C4);
		}
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _markRanges; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::MarkFeature_MarkSegment>* _segments; // 0x28
		::System::Boolean _texCoord3Ensured; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE__CCTOR_OFFSET))();
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshPrepender_OnPrependMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHPREPENDER_ONPREPENDMESH_OFFSET))(this, toFill);
		}

		::System::Void FilterRanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_FILTERRANGES_OFFSET))(this);
		}

		::System::Void DrawAll(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWALL_OFFSET))(this, toFill);
		}

		::System::Void SplitIntoLineSegments(::System::Int32 giStart, ::System::Int32 giEnd, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_SPLITINTOLINESEGMENTS_OFFSET))(this, giStart, giEnd, charInfos);
		}

		::System::Void DrawSegment(::UnityEngine::UI::VertexHelper* toFill, ::UnityEngine::UI::Extension::MarkFeature_MarkSegment seg, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::UI::Extension::MarkFeature_MarkSegment, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWSEGMENT_OFFSET))(this, toFill, seg, charInfos);
		}

		static ::System::Void DrawTextHighlight(::UnityEngine::UI::VertexHelper* toFill, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color32 highlightColor, ::System::Byte fontAlpha)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_DRAWTEXTHIGHLIGHT_OFFSET))(toFill, start, end, highlightColor, fontAlpha);
		}

		static ::System::Void InitQuadTemplate(::UnityEngine::Vector2 uvCenter)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_INITQUADTEMPLATE_OFFSET))(uvCenter);
		}

		::System::Void EnsureTexCoord3Channel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_ENSURETEXCOORD3CHANNEL_OFFSET))(this);
		}

		::System::Boolean GetFillUV(::UnityEngine::Vector2& uvCenter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE_GETFILLUV_OFFSET))(this, uvCenter);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MARKFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}
	};
}
