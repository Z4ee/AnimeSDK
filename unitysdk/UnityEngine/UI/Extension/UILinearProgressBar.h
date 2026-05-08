#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET UNITYSDK_OFFSET(0x1AE4E2D0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET UNITYSDK_OFFSET(0x1AE4E090)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET UNITYSDK_OFFSET(0x1AE4DCF0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1AE4D010)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AE4E4C0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE4CEB0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1AE4E7F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1AE4D780)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4D600)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4D6C0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE4D160)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AE4D570)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AE4D110)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1AE4D3F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4D4B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1AE4CF70)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE4CEC0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET UNITYSDK_OFFSET(0x1AE4D0A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE4E910)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4E830)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4EC60)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4ECF0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE4ED80)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AE4EE10)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AE4EE20)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1AE4EE30)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE4EEC0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1AE4EF50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearProgressBar_TypeDefinitionIndex = 39760;

	class UILinearProgressBar : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_RoundBorderUnit()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x3B1E0);
		}
		static ::System::Collections::IEnumerable** StaticGet_RampStyles()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x3B1E8);
		}
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x3B1F0);
		}
		static ::System::Int32* StaticGet_PatternSkewPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE820);
		}
		static ::System::Int32* StaticGet_Direction()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE824);
		}
		static ::System::Int32* StaticGet_RampEndColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE828);
		}
		static ::System::Int32* StaticGet_RampDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE82C);
		}
		static ::System::Int32* StaticGet_PatternSpacingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE830);
		}
		static ::System::Int32* StaticGet_PatternColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE834);
		}
		static ::System::Int32* StaticGet_PatternOverRampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE838);
		}
		static ::System::Int32* StaticGet_RampStyle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE83C);
		}
		static ::System::Int32* StaticGet_PatternUVSpeedPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE840);
		}
		static ::System::Int32* StaticGet_ProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE844);
		}
		static ::System::Int32* StaticGet_PatternTexPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE848);
		}
		static ::System::Int32* StaticGet_Ramp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE84C);
		}
		static ::System::Int32* StaticGet_RoundedBorder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE850);
		}
		static ::System::Int32* StaticGet_RampTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE854);
		}
		static ::System::Int32* StaticGet_Aspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE858);
		}
		static ::System::Int32* StaticGet_UseMainTexAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE85C);
		}
		static ::System::Int32* StaticGet_Mirror()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE860);
		}
		static ::System::Int32* StaticGet_BorderRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE864);
		}
		static ::System::Int32* StaticGet_RampStartColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE868);
		}
		// static const ::System::String* UILinearProgressBarMatPath; // 0x0
		::System::Int32 progressBarDirection; // 0x20
		::System::Boolean roundedBorder; // 0x24
		::System::Int32 roundBorderUnit; // 0x28
		::System::Single borderRadius; // 0x2C
		::System::Single borderPixels; // 0x30
		::System::Single m_Progress; // 0x34
		::System::Boolean useMainTexAlpha; // 0x38
		::System::Boolean ramp; // 0x39
		::System::Int32 rampDirection; // 0x3C
		::System::Int32 rampStyle; // 0x40
		::UnityEngine::Color rampStartColor; // 0x44
		::UnityEngine::Color rampEndColor; // 0x54
		::System::Single rampTiling; // 0x64
		::System::Single rampOffset; // 0x68
		::System::Boolean mirror; // 0x6C
		::System::Boolean PatternOverRamp; // 0x6D
		::UnityEngine::Sprite* PatternSprite; // 0x70
		::UnityEngine::Color PatternColor; // 0x78
		::UnityEngine::Vector2 PatternUVSpeed; // 0x88
		::System::Single PatternSkew; // 0x90
		::System::Single PatternSpacing; // 0x94
		::UnityEngine::Material* _modifiedMaterial; // 0x98
		::System::Boolean _isLoadedMaterial; // 0xA0
		::Foundation::AssetRequestHandle _uiLinearProgressBarMatHandle; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET))();
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ApplyRoundedBorder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET))(this);
		}

		::System::Void ApplyRamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET))(this);
		}

		::System::Void ApplyPatternOverRamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET))(this);
		}
	};
}
