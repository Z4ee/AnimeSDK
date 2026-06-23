#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYOUTLINE_OFFSET UNITYSDK_OFFSET(0x143BDF10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYPROGRESS_OFFSET UNITYSDK_OFFSET(0x143BDD70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYRAMP_OFFSET UNITYSDK_OFFSET(0x143BE020)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x143BD1E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x143BE580)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x143BE220)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPATPROGRESS0_OFFSET UNITYSDK_OFFSET(0x143BC400)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPPROGRESS_OFFSET UNITYSDK_OFFSET(0x143BC490)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x143BC290)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTHFADE_OFFSET UNITYSDK_OFFSET(0x143BC640)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTH_OFFSET UNITYSDK_OFFSET(0x143BC570)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x143BC910)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x143BC830)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCF40)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x143BD100)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCE60)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPTILING_OFFSET UNITYSDK_OFFSET(0x143BD020)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINE_OFFSET UNITYSDK_OFFSET(0x143BC7A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x143BC3F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCBD0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x143BCD80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCB00)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPTILING_OFFSET UNITYSDK_OFFSET(0x143BCCA0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMP_OFFSET UNITYSDK_OFFSET(0x143BC9E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_ROUNDCAP_OFFSET UNITYSDK_OFFSET(0x143BC710)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_SMOOTHALPHARAMP_OFFSET UNITYSDK_OFFSET(0x143BCA70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x143BC320)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x143BE750)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x143BD9F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x143BD870)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x143BD930)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x143BD3D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x143BD7E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x143BD380)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x143BD660)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x143BD720)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x143BD270)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPATPROGRESS0_OFFSET UNITYSDK_OFFSET(0x143BC410)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPPROGRESS_OFFSET UNITYSDK_OFFSET(0x143BC4A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x143BC2A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTHFADE_OFFSET UNITYSDK_OFFSET(0x143BC650)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTH_OFFSET UNITYSDK_OFFSET(0x143BC580)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x143BC920)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x143BC840)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCF50)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x143BD110)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCE70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPTILING_OFFSET UNITYSDK_OFFSET(0x143BD030)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINE_OFFSET UNITYSDK_OFFSET(0x143BC7B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1438FD20)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCBE0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x143BCD90)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x143BCB10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPTILING_OFFSET UNITYSDK_OFFSET(0x143BCCB0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMP_OFFSET UNITYSDK_OFFSET(0x143BC9F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_ROUNDCAP_OFFSET UNITYSDK_OFFSET(0x143BC720)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_SMOOTHALPHARAMP_OFFSET UNITYSDK_OFFSET(0x143BCA80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x143BC330)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_START_OFFSET UNITYSDK_OFFSET(0x143BD310)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x143BE880)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x143BE790)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x143BEAF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x143BEB80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x143BEC10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x143BECA0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x143BECB0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x143BECC0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x143BED50)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_START_OFFSET UNITYSDK_OFFSET(0x143BEDE0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICircleProgress_TypeDefinitionIndex = 87275;

	class UICircleProgress : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0x353B0);
		}
		static ::System::Int32* StaticGet_OutlineRampOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD270);
		}
		static ::System::Int32* StaticGet_OutlinePercentagePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD274);
		}
		static ::System::Int32* StaticGet_OutlineRampTilingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD278);
		}
		static ::System::Int32* StaticGet_RampTilingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD27C);
		}
		static ::System::Int32* StaticGet_OutlineColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD280);
		}
		static ::System::Int32* StaticGet_EndRoundCapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD284);
		}
		static ::System::Int32* StaticGet_StartRoundCapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD288);
		}
		static ::System::Int32* StaticGet_ClipAtProgress0PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD28C);
		}
		static ::System::Int32* StaticGet_ProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD290);
		}
		static ::System::Int32* StaticGet_DirectionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD294);
		}
		static ::System::Int32* StaticGet_OutlineRampEndColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD298);
		}
		static ::System::Int32* StaticGet_RampOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD29C);
		}
		static ::System::Int32* StaticGet_StartAnglePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2A0);
		}
		static ::System::Int32* StaticGet_InnerWidthFadePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2A4);
		}
		static ::System::Int32* StaticGet_OutlinePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2A8);
		}
		static ::System::Int32* StaticGet_RampStartColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2AC);
		}
		static ::System::Int32* StaticGet_ClipProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2B0);
		}
		static ::System::Int32* StaticGet_InnerWidthPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2B4);
		}
		static ::System::Int32* StaticGet_SmoothAlphaRampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2B8);
		}
		static ::System::Int32* StaticGet_RampEndColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2BC);
		}
		static ::System::Int32* StaticGet_RampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2C0);
		}
		static ::System::Int32* StaticGet_OutlineRampStartColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD2C4);
		}
		// static const ::System::String* UICircleProgressMatPath; // 0x0
		// static const ::System::String* StartRoundCapKeyword; // 0x0
		// static const ::System::String* EndRoundCapKeyword; // 0x0
		// static const ::System::String* OutlineKeyword; // 0x0
		// static const ::System::String* RampKeyword; // 0x0
		::System::Int32 direction; // 0x20
		::System::Single startAngle; // 0x24
		::System::Single progress; // 0x28
		::System::Boolean clipAtProgress0; // 0x2C
		::System::Single clipProgress; // 0x30
		::System::Single innerWidth; // 0x34
		::System::Single innerWidthFade; // 0x38
		::System::Boolean roundCap; // 0x3C
		::System::Boolean outline; // 0x3D
		::System::Single outlinePercentage; // 0x40
		::UnityEngine::Color outlineColor; // 0x44
		::System::Boolean ramp; // 0x54
		::System::Boolean smoothAlphaRamp; // 0x55
		::UnityEngine::Color rampStartColor; // 0x58
		::UnityEngine::Color rampEndColor; // 0x68
		::System::Single rampTiling; // 0x78
		::System::Single rampOffset; // 0x7C
		::UnityEngine::Color outlineRampStartColor; // 0x80
		::UnityEngine::Color outlineRampEndColor; // 0x90
		::System::Single outlineRampTiling; // 0xA0
		::System::Single outlineRampOffset; // 0xA4
		::UnityEngine::Material* _modifiedMaterial; // 0xA8
		::System::Boolean _isLoadedMaterial; // 0xB0
		::Foundation::AssetRequestHandle _uiCircleProgressMatHandle; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CCTOR_OFFSET))();
		}

		::System::Int32 get_Direction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Single get_StartAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_STARTANGLE_OFFSET))(this);
		}

		::System::Void set_StartAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_STARTANGLE_OFFSET))(this, value);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_ClipAtProgress0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPATPROGRESS0_OFFSET))(this);
		}

		::System::Void set_ClipAtProgress0(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPATPROGRESS0_OFFSET))(this, value);
		}

		::System::Single get_ClipProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPPROGRESS_OFFSET))(this);
		}

		::System::Void set_ClipProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPPROGRESS_OFFSET))(this, value);
		}

		::System::Single get_InnerWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTH_OFFSET))(this);
		}

		::System::Void set_InnerWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTH_OFFSET))(this, value);
		}

		::System::Single get_InnerWidthFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTHFADE_OFFSET))(this);
		}

		::System::Void set_InnerWidthFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTHFADE_OFFSET))(this, value);
		}

		::System::Boolean get_RoundCap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_ROUNDCAP_OFFSET))(this);
		}

		::System::Void set_RoundCap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_ROUNDCAP_OFFSET))(this, value);
		}

		::System::Boolean get_Outline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINE_OFFSET))(this);
		}

		::System::Void set_Outline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINE_OFFSET))(this, value);
		}

		::System::Single get_OutlinePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINEPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_OutlinePercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINEPERCENTAGE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINECOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINECOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Ramp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMP_OFFSET))(this);
		}

		::System::Void set_Ramp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMP_OFFSET))(this, value);
		}

		::System::Boolean get_SmoothAlphaRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_SMOOTHALPHARAMP_OFFSET))(this);
		}

		::System::Void set_SmoothAlphaRamp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_SMOOTHALPHARAMP_OFFSET))(this, value);
		}

		::UnityEngine::Color get_RampStartColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSTARTCOLOR_OFFSET))(this);
		}

		::System::Void set_RampStartColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSTARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_RampEndColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPENDCOLOR_OFFSET))(this);
		}

		::System::Void set_RampEndColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPENDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_RampTiling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPTILING_OFFSET))(this);
		}

		::System::Void set_RampTiling(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPTILING_OFFSET))(this, value);
		}

		::System::Single get_RampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_RampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineRampStartColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSTARTCOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineRampStartColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSTARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineRampEndColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPENDCOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineRampEndColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPENDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_OutlineRampTiling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPTILING_OFFSET))(this);
		}

		::System::Void set_OutlineRampTiling(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPTILING_OFFSET))(this, value);
		}

		::System::Single get_OutlineRampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_OutlineRampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPOFFSET_OFFSET))(this, value);
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SETDIRTY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ApplyProgress(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYPROGRESS_OFFSET))(this, material);
		}

		::System::Void ApplyOutline(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYOUTLINE_OFFSET))(this, material);
		}

		::System::Void ApplyRamp(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYRAMP_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_START_OFFSET))(this);
		}
	};
}
