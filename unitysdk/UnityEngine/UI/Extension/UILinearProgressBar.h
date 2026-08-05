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

#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET UNITYSDK_OFFSET(0x1E833B00)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET UNITYSDK_OFFSET(0x1E833940)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET UNITYSDK_OFFSET(0x1E8335E0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1E832850)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1E834030)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E833CD0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E8326F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1E834270)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1E832FC0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1E832E40)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E832F00)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E8329A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E832DB0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E832950)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E832C30)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E832CF0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E8327B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E832700)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET UNITYSDK_OFFSET(0x1E8328E0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8343A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8342B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1E8346F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E834780)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E834810)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E8348A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E8348B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E8348C0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E834950)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E8349E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearProgressBar_TypeDefinitionIndex = 89722;

	class UILinearProgressBar : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x51310);
		}
		static ::System::Collections::IEnumerable** StaticGet_RoundBorderUnit()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x51318);
		}
		static ::System::Collections::IEnumerable** StaticGet_RampStyles()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x51320);
		}
		static ::System::Int32* StaticGet_ProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A30);
		}
		static ::System::Int32* StaticGet_Direction()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A34);
		}
		static ::System::Int32* StaticGet_RampEndColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A38);
		}
		static ::System::Int32* StaticGet_RampStyle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A3C);
		}
		static ::System::Int32* StaticGet_RampDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A40);
		}
		static ::System::Int32* StaticGet_PatternSpacingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A44);
		}
		static ::System::Int32* StaticGet_RampTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A48);
		}
		static ::System::Int32* StaticGet_UseMainTexAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A4C);
		}
		static ::System::Int32* StaticGet_RampStartColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A50);
		}
		static ::System::Int32* StaticGet_PatternColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A54);
		}
		static ::System::Int32* StaticGet_Ramp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A58);
		}
		static ::System::Int32* StaticGet_PatternTexPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A5C);
		}
		static ::System::Int32* StaticGet_PatternSkewPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A60);
		}
		static ::System::Int32* StaticGet_Aspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A64);
		}
		static ::System::Int32* StaticGet_BorderRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A68);
		}
		static ::System::Int32* StaticGet_PatternUVSpeedPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A6C);
		}
		static ::System::Int32* StaticGet_RoundedBorder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A70);
		}
		static ::System::Int32* StaticGet_PatternOverRampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A74);
		}
		static ::System::Int32* StaticGet_Mirror()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x12A78);
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
		::UnityEngine::Vector2 PatternTiling; // 0x78
		::UnityEngine::Vector2 PatternOffset; // 0x80
		::UnityEngine::Color PatternColor; // 0x88
		::UnityEngine::Vector2 PatternUVSpeed; // 0x98
		::System::Single PatternSkew; // 0xA0
		::System::Single PatternSpacing; // 0xA4
		::UnityEngine::Material* _modifiedMaterial; // 0xA8
		::System::Boolean _isLoadedMaterial; // 0xB0
		::Foundation::AssetRequestHandle _uiLinearProgressBarMatHandle; // 0xB8

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

		::System::Void ApplyRoundedBorder(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET))(this, material);
		}

		::System::Void ApplyRamp(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET))(this, material);
		}

		::System::Void ApplyPatternOverRamp(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
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
