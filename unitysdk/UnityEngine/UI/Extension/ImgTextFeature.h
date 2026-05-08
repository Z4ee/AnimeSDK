#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_IconItem.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CLEARSAVEDVERTPOS_OFFSET UNITYSDK_OFFSET(0x1B163210)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COLLECTALLICONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B163590)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONTAGS_OFFSET UNITYSDK_OFFSET(0x1B15D630)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B162EA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x1B162CC0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DRAWQUADTAGINFO_OFFSET UNITYSDK_OFFSET(0x1B15E230)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FILTERQUADINFOS_OFFSET UNITYSDK_OFFSET(0x1B15DEF0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_1_OFFSET UNITYSDK_OFFSET(0x1B162BC0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_OFFSET UNITYSDK_OFFSET(0x1B162A40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETIMGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B163730)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONITEM_OFFSET UNITYSDK_OFFSET(0x1B1619E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1B15DE00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1B15DD20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B15D7D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1B15D7C0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1B15D7F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_HIDEALLICONITEM_OFFSET UNITYSDK_OFFSET(0x1B15DDB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISICONPLACEHOLDERQUAD_OFFSET UNITYSDK_OFFSET(0x1B163500)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x1B162510)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B15D850)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B15FDE0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1B15D800)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B15DE80)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1B15F1C0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPREPROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x1B15DA40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1B15F300)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_REFRESHIMGPOS_OFFSET UNITYSDK_OFFSET(0x1B15F3A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET UNITYSDK_OFFSET(0x1B15DCB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B160280)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RUNTIMELOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x1B160690)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SAVEVERTPOS_OFFSET UNITYSDK_OFFSET(0x1B163280)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONITEMACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1B1632F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET UNITYSDK_OFFSET(0x1B162B10)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B15D7E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET UNITYSDK_OFFSET(0x1B1634B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_TRYGETORIGINALQUADBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B163690)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x1B160600)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_WAITFORREBUILDOVER_OFFSET UNITYSDK_OFFSET(0x1B15D9C0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B163890)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1637A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_TypeDefinitionIndex = 56537;

	class ImgTextFeature : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__corner()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ImgTextFeature_TypeDefinitionIndex)->GetStaticField(0x48D70);
		}
		// static const ::System::String* KeyPrefix; // 0x0
		// static const ::System::String* KeyTextPrefix; // 0x0
		// static const ::System::String* MousePrefix; // 0x0
		// static const ::System::String* GamepadPrefix; // 0x0
		// static const ::System::String* ActionPrefix; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _savedImgVertPos; // 0x10
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _loadedAssetRequests; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::ImgTextFeature_IconItem>* _iconItemPool; // 0x20
		::UnityEngine::Coroutine* _handler; // 0x28
		::UnityEngine::UI::Extension::UILocalizationText* _host; // 0x30
		::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* _quadInfos; // 0x38
		::UnityEngine::WaitForEndOfFrame* _waitEndOfFrame; // 0x40
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Rect>>* _iconOriginalQuadBounds; // 0x48
		::System::Int32 _usedIconCount; // 0x50
		::System::Boolean _refreshImgPosFlag; // 0x54
		::System::Boolean _fontSizeDirty; // 0x55
		::System::Boolean _ContentActive_k__BackingField; // 0x56
		::System::Boolean _isActivated; // 0x57

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

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_ContentActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_CONTENTACTIVE_OFFSET))(this);
		}

		::System::Void set_ContentActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SET_CONTENTACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInit(::UnityEngine::UI::Extension::UILocalizationText* host)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINIT_OFFSET))(this, host);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONACTIVATE_OFFSET))(this);
		}

		::System::String* OnPreprocessText(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPREPROCESSTEXT_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void OnPostPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONREFRESH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitForRebuildOver()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_WAITFORREBUILDOVER_OFFSET))(this);
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

		::System::ValueTuple_2<::UnityEngine::UI::Extension::ImgTextFeature_IconItem, ::System::Int32> GetOrCreateIconItem(::UnityEngine::UI::Extension::EImgTextIconType type, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::UnityEngine::UI::Extension::ImgTextFeature_IconItem, ::System::Int32>(*)(::PVOID, ::UnityEngine::UI::Extension::EImgTextIconType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONITEM_OFFSET))(this, type, overrideHeight);
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

		::System::Void DrawQuadTagInfo(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DRAWQUADTAGINFO_OFFSET))(this, toFill);
		}

		::System::Void RefreshImgPos(::System::Boolean onlySetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_REFRESHIMGPOS_OFFSET))(this, onlySetPos);
		}

		::System::Void ShowAllImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET))(this);
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

		::System::Void ClearSavedVertPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CLEARSAVEDVERTPOS_OFFSET))(this);
		}

		::System::Void SaveVertPos(::System::Int32 index, ::UnityEngine::Vector2 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SAVEVERTPOS_OFFSET))(this, index, pos);
		}

		::System::Void SetImgAnchorByTrans(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET))(this, rt);
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

		::System::Int32 GetStandFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET))(this);
		}

		::System::Void SetIconItemActiveCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONITEMACTIVECOUNT_OFFSET))(this, count);
		}

		::System::Void HideAllIconItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_HIDEALLICONITEM_OFFSET))(this);
		}

		::System::Void ResetIconItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET))(this);
		}
	};
}
