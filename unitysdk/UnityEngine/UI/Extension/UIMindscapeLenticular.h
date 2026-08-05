#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1F581460)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1F5816C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1F5809E0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F580800)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FBD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1F57F990)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FDD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTRANGE_OFFSET UNITYSDK_OFFSET(0x1F57FAB0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1F57E7D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1F57EA40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1F57E910)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HOLDOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FCD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57D790)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57D530)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1TILING_OFFSET UNITYSDK_OFFSET(0x1F57D670)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57DB10)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57D8B0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2TILING_OFFSET UNITYSDK_OFFSET(0x1F57D9F0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57DE90)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57DC30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3TILING_OFFSET UNITYSDK_OFFSET(0x1F57DD70)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57E210)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57DFB0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4TILING_OFFSET UNITYSDK_OFFSET(0x1F57E0F0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F57FED0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKFADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1F57E6B0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1F57E590)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKSPRITE_OFFSET UNITYSDK_OFFSET(0x1F57E330)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKTILING_OFFSET UNITYSDK_OFFSET(0x1F57E470)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F57F790)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGUINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1F57EB70)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGVINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1F57ECA0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F57EED0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F581850)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F57FF30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1F57F690)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOIN_OFFSET UNITYSDK_OFFSET(0x1F57F1D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOFFSET_OFFSET UNITYSDK_OFFSET(0x1F57F590)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOUT_OFFSET UNITYSDK_OFFSET(0x1F57F2B0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINGAMMA_OFFSET UNITYSDK_OFFSET(0x1F57F390)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FBE0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1F57F9A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTGAMMA_OFFSET UNITYSDK_OFFSET(0x1F57F490)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FDE0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTRANGE_OFFSET UNITYSDK_OFFSET(0x1F57FAC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHERIN_OFFSET UNITYSDK_OFFSET(0x1F57EFD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHEROUT_OFFSET UNITYSDK_OFFSET(0x1F57F0D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1F57E7E0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1F57EA50)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1F57E920)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HOLDOPACITY_OFFSET UNITYSDK_OFFSET(0x1F57FCE0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57D7A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57D540)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1TILING_OFFSET UNITYSDK_OFFSET(0x1F57D680)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57DB20)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57D8C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2TILING_OFFSET UNITYSDK_OFFSET(0x1F57DA00)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57DEA0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57DC40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3TILING_OFFSET UNITYSDK_OFFSET(0x1F57DD80)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4OFFSET_OFFSET UNITYSDK_OFFSET(0x1F57E220)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4SPRITE_OFFSET UNITYSDK_OFFSET(0x1F57DFC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4TILING_OFFSET UNITYSDK_OFFSET(0x1F57E100)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKFADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1F57E6C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1F57E5A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKSPRITE_OFFSET UNITYSDK_OFFSET(0x1F57E340)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKTILING_OFFSET UNITYSDK_OFFSET(0x1F57E480)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F57F7A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGUINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1F57EB80)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGVINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1F57ECB0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x1F57EDD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_START_OFFSET UNITYSDK_OFFSET(0x1F581650)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5818A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F57D450)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F581A30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F581A40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F581A50)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1F581A60)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIMindscapeLenticular_TypeDefinitionIndex = 19348;

	class UIMindscapeLenticular : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4330);
		}
		static ::System::Int32* StaticGet_HeightOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		static ::System::Int32* StaticGet_FadeInOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4344);
		}
		static ::System::Int32* StaticGet_MousePositionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4348);
		}
		static ::System::Int32* StaticGet_MaskTexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x434C);
		}
		static ::System::Int32* StaticGet_Layer3TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4350);
		}
		static ::System::Int32* StaticGet_HoldOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4354);
		}
		static ::System::Int32* StaticGet_ParallaxMappingUIntensitiesPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4358);
		}
		static ::System::Int32* StaticGet_Layer2TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x435C);
		}
		static ::System::Int32* StaticGet_HeightScalePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4360);
		}
		static ::System::Int32* StaticGet_Layer4TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4364);
		}
		static ::System::Int32* StaticGet_ThresholdsPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4368);
		}
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x436C);
		}
		static ::System::Int32* StaticGet_FadeOutOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4378);
		}
		static ::System::Int32* StaticGet_HeightMapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x437C);
		}
		static ::System::Int32* StaticGet_Layer1TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4380);
		}
		static ::System::Int32* StaticGet_ParallaxMappingVIntensitiesPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4384);
		}
		static ::System::Int32* StaticGet_MaskFadeInRangePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4388);
		}
		::UnityEngine::Sprite* m_Layer1Sprite; // 0xF8
		::UnityEngine::Vector2 m_Layer1Tiling; // 0x100
		::UnityEngine::Vector2 m_Layer1Offset; // 0x108
		::UnityEngine::Sprite* m_Layer2Sprite; // 0x110
		::UnityEngine::Vector2 m_Layer2Tiling; // 0x118
		::UnityEngine::Vector2 m_Layer2Offset; // 0x120
		::UnityEngine::Sprite* m_Layer3Sprite; // 0x128
		::UnityEngine::Vector2 m_Layer3Tiling; // 0x130
		::UnityEngine::Vector2 m_Layer3Offset; // 0x138
		::UnityEngine::Sprite* m_Layer4Sprite; // 0x140
		::UnityEngine::Vector2 m_Layer4Tiling; // 0x148
		::UnityEngine::Vector2 m_Layer4Offset; // 0x150
		::UnityEngine::Sprite* m_MaskSprite; // 0x158
		::UnityEngine::Vector2 m_MaskTiling; // 0x160
		::UnityEngine::Vector2 m_MaskOffset; // 0x168
		::UnityEngine::Vector2 m_MaskFadeInRange; // 0x170
		::UnityEngine::Sprite* m_HeightMap; // 0x178
		::UnityEngine::Vector4 m_HeightScale; // 0x180
		::UnityEngine::Vector4 m_HeightOffset; // 0x190
		::UnityEngine::Vector4 m_ParallaxMappingUIntensities; // 0x1A0
		::UnityEngine::Vector4 m_ParallaxMappingVIntensities; // 0x1B0
		::System::Single m_EchoOffset; // 0x1C0
		::System::Single m_Angle; // 0x1C4
		::System::Single m_Tolerance; // 0x1C8
		::System::Single m_FeatherIn; // 0x1CC
		::System::Single m_FeatherOut; // 0x1D0
		::System::Boolean m_EchoIn; // 0x1D4
		::System::Boolean m_EchoOut; // 0x1D5
		::System::Single m_FadeInGamma; // 0x1D8
		::System::Single m_FadeOutGamma; // 0x1DC
		::UnityEngine::Vector2 m_MousePosition; // 0x1E0
		::UnityEngine::Vector2 m_FadeInRange; // 0x1E8
		::UnityEngine::Vector2 m_FadeOutRange; // 0x1F0
		::System::Single m_FadeInOpacity; // 0x1F8
		::System::Single m_HoldOpacity; // 0x1FC
		::System::Single m_FadeOutOpacity; // 0x200
		::UnityEngine::Material* m_ModifiedMaterial; // 0x208
		::System::Boolean m_LastFrameIsValid; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CCTOR_OFFSET))();
		}

		::UnityEngine::Sprite* get_Layer1Sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1SPRITE_OFFSET))(this);
		}

		::System::Void set_Layer1Sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer1Tiling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1TILING_OFFSET))(this);
		}

		::System::Void set_Layer1Tiling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1TILING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer1Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1OFFSET_OFFSET))(this);
		}

		::System::Void set_Layer1Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_Layer2Sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2SPRITE_OFFSET))(this);
		}

		::System::Void set_Layer2Sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer2Tiling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2TILING_OFFSET))(this);
		}

		::System::Void set_Layer2Tiling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2TILING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer2Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2OFFSET_OFFSET))(this);
		}

		::System::Void set_Layer2Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_Layer3Sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3SPRITE_OFFSET))(this);
		}

		::System::Void set_Layer3Sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer3Tiling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3TILING_OFFSET))(this);
		}

		::System::Void set_Layer3Tiling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3TILING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer3Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3OFFSET_OFFSET))(this);
		}

		::System::Void set_Layer3Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_Layer4Sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4SPRITE_OFFSET))(this);
		}

		::System::Void set_Layer4Sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer4Tiling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4TILING_OFFSET))(this);
		}

		::System::Void set_Layer4Tiling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4TILING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Layer4Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4OFFSET_OFFSET))(this);
		}

		::System::Void set_Layer4Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_MaskSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKSPRITE_OFFSET))(this);
		}

		::System::Void set_MaskSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKSPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MaskTiling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKTILING_OFFSET))(this);
		}

		::System::Void set_MaskTiling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKTILING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MaskOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKOFFSET_OFFSET))(this);
		}

		::System::Void set_MaskOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MaskFadeInRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKFADEINRANGE_OFFSET))(this);
		}

		::System::Void set_MaskFadeInRange(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKFADEINRANGE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_HeightMap()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTMAP_OFFSET))(this);
		}

		::System::Void set_HeightMap(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTMAP_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_HeightScale()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTSCALE_OFFSET))(this);
		}

		::System::Void set_HeightScale(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_HeightOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_HeightOffset(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_ParallaxMappingUIntensities()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGUINTENSITIES_OFFSET))(this);
		}

		::System::Void set_ParallaxMappingUIntensities(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGUINTENSITIES_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_ParallaxMappingVIntensities()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGVINTENSITIES_OFFSET))(this);
		}

		::System::Void set_ParallaxMappingVIntensities(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGVINTENSITIES_OFFSET))(this, value);
		}

		::System::Void set_Tolerance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_TOLERANCE_OFFSET))(this, value);
		}

		::System::Void set_FeatherIn(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHERIN_OFFSET))(this, value);
		}

		::System::Void set_FeatherOut(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHEROUT_OFFSET))(this, value);
		}

		::System::Void set_EchoIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOIN_OFFSET))(this, value);
		}

		::System::Void set_EchoOut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOUT_OFFSET))(this, value);
		}

		::System::Void set_FadeInGamma(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINGAMMA_OFFSET))(this, value);
		}

		::System::Void set_FadeOutGamma(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTGAMMA_OFFSET))(this, value);
		}

		::System::Void set_EchoOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOFFSET_OFFSET))(this, value);
		}

		::System::Void set_Angle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ANGLE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_FadeInRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINRANGE_OFFSET))(this);
		}

		::System::Void set_FadeInRange(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINRANGE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_FadeOutRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTRANGE_OFFSET))(this);
		}

		::System::Void set_FadeOutRange(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTRANGE_OFFSET))(this, value);
		}

		::System::Single get_FadeInOpacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINOPACITY_OFFSET))(this);
		}

		::System::Void set_FadeInOpacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINOPACITY_OFFSET))(this, value);
		}

		::System::Single get_HoldOpacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HOLDOPACITY_OFFSET))(this);
		}

		::System::Void set_HoldOpacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HOLDOPACITY_OFFSET))(this, value);
		}

		::System::Single get_FadeOutOpacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTOPACITY_OFFSET))(this);
		}

		::System::Void set_FadeOutOpacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTOPACITY_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_CLEANUP_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_START_OFFSET))(this);
		}
	};
}
