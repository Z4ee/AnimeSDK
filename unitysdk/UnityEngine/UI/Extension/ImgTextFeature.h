#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_DeferredWork.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_IconEntry.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class NAP_TextInfo; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYGREY_OFFSET UNITYSDK_OFFSET(0x1CB79960)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYMINWIDTHCHECK_OFFSET UNITYSDK_OFFSET(0x1CB79660)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COLLECTALLICONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB7D490)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COMPUTEALLFITSCALES_OFFSET UNITYSDK_OFFSET(0x1CB77DD0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONTAGS_OFFSET UNITYSDK_OFFSET(0x1CB76AB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1CB7C900)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x1CB7C720)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DOPREPROCESS_OFFSET UNITYSDK_OFFSET(0x1CB772C0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1CB7C670)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FILTERQUADINFOS_OFFSET UNITYSDK_OFFSET(0x1CB77820)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDQUADVERTEXRANGE_OFFSET UNITYSDK_OFFSET(0x1CB7CD80)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDTRUNCATEDQUADVERTEXRANGE_OFFSET UNITYSDK_OFFSET(0x1CB7CEC0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FOLDQUADVERTICES_OFFSET UNITYSDK_OFFSET(0x1CB783A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETDESIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x1CB7C550)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_1_OFFSET UNITYSDK_OFFSET(0x1CB7D140)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_OFFSET UNITYSDK_OFFSET(0x1CB7C330)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETIMGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CB7D0B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONENTRY_OFFSET UNITYSDK_OFFSET(0x1CB7B240)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1CB776E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1CB77610)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1CB76CA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISICONPLACEHOLDERQUAD_OFFSET UNITYSDK_OFFSET(0x1CB7D3E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISTEXTTRUNCATED_OFFSET UNITYSDK_OFFSET(0x1CB7CE20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x1CB7BFB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1CB76D10)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1CB774E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1CB78890)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1CB770A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONENABLECORE_OFFSET UNITYSDK_OFFSET(0x1CB76DC0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINITCORE_OFFSET UNITYSDK_OFFSET(0x1CB76CB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1CB786B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_READQUADPOSITIONSFROMTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1CB77A30)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_REGISTERPOPEFFECTICONS_OFFSET UNITYSDK_OFFSET(0x1CB780D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETGREY_OFFSET UNITYSDK_OFFSET(0x1CB7D6F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET UNITYSDK_OFFSET(0x1CB77270)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB79CF0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEREALQUADINDEX_OFFSET UNITYSDK_OFFSET(0x1CB7D240)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RUNTIMELOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x1CB7A100)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETGREY_OFFSET UNITYSDK_OFFSET(0x1CB7D680)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1CB76E20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET UNITYSDK_OFFSET(0x1CB7C4A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET UNITYSDK_OFFSET(0x1CB7D1F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_TRYGETORIGINALQUADBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB7D5B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x1CB7A070)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1CB78C30)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CB78BF0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET UNITYSDK_OFFSET(0x1CB78060)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x1CB77140)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1CB771D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSUMER_ONPOSTTYPESET_OFFSET UNITYSDK_OFFSET(0x1CB77760)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UPDATEICONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1CB78D50)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB7DA40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7D9D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1CB7DA90)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1CB7DB20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1CB7DBB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1CB7DC40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1CB7DCD0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONENABLECORE_OFFSET UNITYSDK_OFFSET(0x1CB7DD60)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONINITCORE_OFFSET UNITYSDK_OFFSET(0x1CB7DDF0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1CB7DE80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_TypeDefinitionIndex = 40084;

	class ImgTextFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__corner()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ImgTextFeature_TypeDefinitionIndex)->GetStaticField(0x4C450);
		}
		// static const ::System::String* KeyPrefix; // 0x0
		// static const ::System::String* KeyTextPrefix; // 0x0
		// static const ::System::String* MousePrefix; // 0x0
		// static const ::System::String* GamepadPrefix; // 0x0
		// static const ::System::String* ActionPrefix; // 0x0
		// static const ::System::Int32 QUAD_VERTEX_NUM = 0x4; // 0x0
		// static const ::System::Int32 MIN_QUAD_TAG_CHAR_COUNT = 0x28; // 0x0
		// static const ::System::Int32 INITIAL_POOL_CAPACITY = 0x4; // 0x0
		// static const ::System::Single IMG_FONT_SIZE_MATCH_SCALE; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* _quadInfos; // 0x20
		::UnityEngine::Material* _greyMat; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _loadedAssetRequests; // 0x30
		::Il2CppArray<::UnityEngine::UI::Extension::ImgTextFeature_IconEntry>* _entries; // 0x38
		::System::Int32 _truncatedSearchStart; // 0x40
		::System::Int32 _lastBuildFontSize; // 0x44
		::System::Boolean _fontSizeDirty; // 0x48
		::System::Boolean _isGrey; // 0x49
		::System::Int32 _poolCount; // 0x4C
		::UnityEngine::UI::Extension::ImgTextFeature_DeferredWork _deferred; // 0x50
		::System::Int32 _usedCount; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CCTOR_OFFSET))();
		}

		static ::System::Boolean ContainsIconTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONTAGS_OFFSET))(text);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInitCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINITCORE_OFFSET))(this);
		}

		::System::Void OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void OnEnableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONENABLECORE_OFFSET))(this);
		}

		::System::Void OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDISABLECORE_OFFSET))(this);
		}

		::System::Boolean UnityEngine_UI_Extension_IUITextPreprocessor_DetectsContent(::System::String* rawText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET))(this, rawText);
		}

		::System::String* UnityEngine_UI_Extension_IUITextPreprocessor_Preprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET))(this, rawText);
		}

		::System::Void OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::String* DoPreprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DOPREPROCESS_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypesetConsumer_OnPostTypeset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSUMER_ONPOSTTYPESET_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshModifier_OnRenderMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROYCORE_OFFSET))(this);
		}

		::System::Boolean UnityEngine_UI_Extension_IPostCanvasRebuild_get_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IPostCanvasRebuild_ExecutePostRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET))(this);
		}

		::System::Void ApplyMinWidthCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYMINWIDTHCHECK_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::String*> ResolveIconPath(::System::String* quadName)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEICONPATH_OFFSET))(this, quadName);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> UnityEngine_UI_Extension_IImgIconLoader_LoadNextIcon(::System::String* quadName, ::System::Int32 charIndex, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET))(this, quadName, charIndex, overrideHeight);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> RuntimeLoadNextIcon(::System::String* iconPath, ::System::String* keyText, ::System::Int32 charIndex, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RUNTIMELOADNEXTICON_OFFSET))(this, iconPath, keyText, charIndex, overrideHeight);
		}

		::System::Int32 GetOrCreateIconEntry(::UnityEngine::UI::Extension::EImgTextIconType type, ::System::Single overrideHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::EImgTextIconType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONENTRY_OFFSET))(this, type, overrideHeight);
		}

		::UnityEngine::UI::Image* CreateImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEIMAGE_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*> CreateKey()
		{
			return ((::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEKEY_OFFSET))(this);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* path)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_LOADSPRITE_OFFSET))(this, path);
		}

		::System::Void FilterQuadInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FILTERQUADINFOS_OFFSET))(this);
		}

		::System::Void ReadQuadPositionsFromTextInfo(::UnityEngine::UI::Extension::NAP_TextInfo* textInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::NAP_TextInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_READQUADPOSITIONSFROMTEXTINFO_OFFSET))(this, textInfo);
		}

		::System::Void FoldQuadVertices(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FOLDQUADVERTICES_OFFSET))(this, toFill);
		}

		::System::Boolean IsTextTruncated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISTEXTTRUNCATED_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> FindQuadVertexRange(::System::Int32 iconIndex, ::System::Int32 totalIconCount, ::System::Int32 quadCount, ::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDQUADVERTEXRANGE_OFFSET))(this, iconIndex, totalIconCount, quadCount, toFill);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> FindTruncatedQuadVertexRange(::UnityEngine::UI::VertexHelper* toFill, ::System::Int32 defaultStart)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDTRUNCATEDQUADVERTEXRANGE_OFFSET))(this, toFill, defaultStart);
		}

		::System::Single GetImgHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETIMGHEIGHT_OFFSET))(this);
		}

		::System::Single GetFitScale(::System::Single overrideHeight, ::System::Single height)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_OFFSET))(this, overrideHeight, height);
		}

		::System::Single GetFitScale_1(::System::Single overrideHeight, ::System::Single height, ::System::Single basicScale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_1_OFFSET))(this, overrideHeight, height, basicScale);
		}

		::System::Void ComputeAllFitScales()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COMPUTEALLFITSCALES_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetDesignedSize(::UnityEngine::Vector2 nativeSize, ::System::Single overrideHeight)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETDESIGNEDSIZE_OFFSET))(this, nativeSize, overrideHeight);
		}

		::System::Int32 GetStandFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET))(this);
		}

		::System::Void UpdateIconPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UPDATEICONPOSITIONS_OFFSET))(this);
		}

		::System::Void ShowAllImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET))(this);
		}

		::System::Void RegisterPopEffectIcons(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_REGISTERPOPEFFECTICONS_OFFSET))(this, toFill);
		}

		::System::Int32 ResolveRealQuadIndex(::System::Int32 vertexQuadIndex, ::System::Int32 quadCount, ::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEREALQUADINDEX_OFFSET))(this, vertexQuadIndex, quadCount, toFill);
		}

		::System::Boolean IsIconPlaceholderQuad(::System::Int32 gi)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISICONPLACEHOLDERQUAD_OFFSET))(this, gi);
		}

		::System::Void CollectAllIconBounds(::System::Collections::Generic::List_1<::UnityEngine::Rect>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COLLECTALLICONBOUNDS_OFFSET))(this, output);
		}

		::System::Boolean TryGetOriginalQuadBounds(::System::Int32 gi, ::UnityEngine::Rect& bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_TRYGETORIGINALQUADBOUNDS_OFFSET))(this, gi, bounds);
		}

		::System::Void SetGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETGREY_OFFSET))(this, isGrey);
		}

		::System::Void ApplyGrey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYGREY_OFFSET))(this);
		}

		::System::Void ResetGrey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETGREY_OFFSET))(this);
		}

		::System::Void SetIconActiveCount(::System::Int32 activeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONACTIVECOUNT_OFFSET))(this, activeCount);
		}

		::System::Void ResetIconItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET))(this);
		}

		::System::Void SetImgAnchorByTrans(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET))(this, rt);
		}

		::System::Void EnsureCapacity(::System::Int32 needed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ENSURECAPACITY_OFFSET))(this, needed);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void __base_OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void __base_OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void __base_OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDESTROYCORE_OFFSET))(this);
		}

		::System::Void __base_OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDISABLECORE_OFFSET))(this);
		}

		::System::Void __base_OnEnableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONENABLECORE_OFFSET))(this);
		}

		::System::Void __base_OnInitCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONINITCORE_OFFSET))(this);
		}

		::System::Boolean __base_OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}
	};
}
