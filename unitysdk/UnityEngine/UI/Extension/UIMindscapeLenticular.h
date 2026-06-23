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

#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1E33D460)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1E33D6C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1E33C9E0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E33C800)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BBC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1E33B980)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BDC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_FADEOUTRANGE_OFFSET UNITYSDK_OFFSET(0x1E33BAA0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1E33A7C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1E33AA30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1E33A900)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_HOLDOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BCC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339780)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339520)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER1TILING_OFFSET UNITYSDK_OFFSET(0x1E339660)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339B00)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2SPRITE_OFFSET UNITYSDK_OFFSET(0x1E3398A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER2TILING_OFFSET UNITYSDK_OFFSET(0x1E3399E0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339E80)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339C20)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER3TILING_OFFSET UNITYSDK_OFFSET(0x1E339D60)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4OFFSET_OFFSET UNITYSDK_OFFSET(0x1E33A200)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339FA0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_LAYER4TILING_OFFSET UNITYSDK_OFFSET(0x1E33A0E0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E33BEC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKFADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1E33A6A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1E33A580)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKSPRITE_OFFSET UNITYSDK_OFFSET(0x1E33A320)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MASKTILING_OFFSET UNITYSDK_OFFSET(0x1E33A460)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E33B780)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGUINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1E33AB60)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_GET_PARALLAXMAPPINGVINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1E33AC90)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E33AEC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E33D850)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E33BF20)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E33B680)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOIN_OFFSET UNITYSDK_OFFSET(0x1E33B1C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOFFSET_OFFSET UNITYSDK_OFFSET(0x1E33B580)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_ECHOOUT_OFFSET UNITYSDK_OFFSET(0x1E33B2A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINGAMMA_OFFSET UNITYSDK_OFFSET(0x1E33B380)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BBD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1E33B990)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTGAMMA_OFFSET UNITYSDK_OFFSET(0x1E33B480)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BDD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FADEOUTRANGE_OFFSET UNITYSDK_OFFSET(0x1E33BAB0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHERIN_OFFSET UNITYSDK_OFFSET(0x1E33AFC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_FEATHEROUT_OFFSET UNITYSDK_OFFSET(0x1E33B0C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1E33A7D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1E33AA40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1E33A910)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_HOLDOPACITY_OFFSET UNITYSDK_OFFSET(0x1E33BCD0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339790)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339530)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER1TILING_OFFSET UNITYSDK_OFFSET(0x1E339670)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339B10)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2SPRITE_OFFSET UNITYSDK_OFFSET(0x1E3398B0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER2TILING_OFFSET UNITYSDK_OFFSET(0x1E3399F0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3OFFSET_OFFSET UNITYSDK_OFFSET(0x1E339E90)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339C30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER3TILING_OFFSET UNITYSDK_OFFSET(0x1E339D70)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4OFFSET_OFFSET UNITYSDK_OFFSET(0x1E33A210)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4SPRITE_OFFSET UNITYSDK_OFFSET(0x1E339FB0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_LAYER4TILING_OFFSET UNITYSDK_OFFSET(0x1E33A0F0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKFADEINRANGE_OFFSET UNITYSDK_OFFSET(0x1E33A6B0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1E33A590)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKSPRITE_OFFSET UNITYSDK_OFFSET(0x1E33A330)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MASKTILING_OFFSET UNITYSDK_OFFSET(0x1E33A470)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E33B790)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGUINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1E33AB70)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_PARALLAXMAPPINGVINTENSITIES_OFFSET UNITYSDK_OFFSET(0x1E33ACA0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_SET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x1E33ADC0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR_START_OFFSET UNITYSDK_OFFSET(0x1E33D650)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33D8A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E339440)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E33DA30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E33DA40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E33DA50)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPELENTICULAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E33DA60)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIMindscapeLenticular_TypeDefinitionIndex = 19004;

	class UIMindscapeLenticular : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Int32* StaticGet_HeightOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4300);
		}
		static ::System::Int32* StaticGet_Layer2TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4304);
		}
		static ::System::Int32* StaticGet_MaskTexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4308);
		}
		static ::System::Int32* StaticGet_FadeInOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x430C);
		}
		static ::System::Int32* StaticGet_ThresholdsPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4310);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4314);
		}
		static ::System::Int32* StaticGet_Layer4TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4324);
		}
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4328);
		}
		static ::System::Int32* StaticGet_ParallaxMappingVIntensitiesPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4334);
		}
		static ::System::Int32* StaticGet_FadeOutOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4338);
		}
		static ::System::Int32* StaticGet_MaskFadeInRangePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x433C);
		}
		static ::System::Int32* StaticGet_HeightMapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		static ::System::Int32* StaticGet_Layer3TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4344);
		}
		static ::System::Int32* StaticGet_ParallaxMappingUIntensitiesPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4348);
		}
		static ::System::Int32* StaticGet_MousePositionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x434C);
		}
		static ::System::Int32* StaticGet_HeightScalePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4350);
		}
		static ::System::Int32* StaticGet_HoldOpacityPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4354);
		}
		static ::System::Int32* StaticGet_Layer1TexturePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeLenticular_TypeDefinitionIndex)->GetStaticField(0x4358);
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
