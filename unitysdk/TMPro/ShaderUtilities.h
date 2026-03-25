#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x18907710)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x18907F70)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x18907870)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x18906E30)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x18906D50)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x18906D20)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x18907720)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x18907270)
#define TMPRO_SHADERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18906D80)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 34367;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B480);
		}
		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B488);
		}
		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B490);
		}
		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B498);
		}
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4A0);
		}
		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4A8);
		}
		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4B0);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4B8);
		}
		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4C0);
		}
		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4C8);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4D0);
		}
		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2B4D8);
		}
		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE4F0);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE4F4);
		}
		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE4F8);
		}
		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE4FC);
		}
		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE500);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE504);
		}
		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE508);
		}
		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE50C);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE510);
		}
		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE514);
		}
		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE518);
		}
		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE51C);
		}
		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE520);
		}
		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE524);
		}
		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE528);
		}
		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE52C);
		}
		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE530);
		}
		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE534);
		}
		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE538);
		}
		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE53C);
		}
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE540);
		}
		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE544);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE548);
		}
		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE54C);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE550);
		}
		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE554);
		}
		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE558);
		}
		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE55C);
		}
		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE560);
		}
		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE564);
		}
		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE568);
		}
		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE56C);
		}
		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE570);
		}
		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE574);
		}
		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE578);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE57C);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE580);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE584);
		}
		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE588);
		}
		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE58C);
		}
		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE590);
		}
		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE594);
		}
		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE598);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE59C);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5A0);
		}
		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5A4);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5A8);
		}
		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5AC);
		}
		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5B0);
		}
		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5B4);
		}
		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5B8);
		}
		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5BC);
		}
		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5C0);
		}
		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xE5C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileSDF()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileBitmap()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET))();
		}

		static ::System::Void GetShaderPropertyIDs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET))();
		}

		static ::System::Void UpdateShaderRatios(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(mat);
		}

		static ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET))(material);
		}

		static ::System::Boolean IsMaskingEnabled(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET))(material);
		}

		static ::System::Single GetPadding(::UnityEngine::Material* material, ::System::Boolean enableExtraPadding, ::System::Boolean isBold)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(material, enableExtraPadding, isBold);
		}

		static ::System::Single GetPadding_1(::Il2CppArray<::UnityEngine::Material*>* materials, ::System::Boolean enableExtraPadding, ::System::Boolean isBold)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET))(materials, enableExtraPadding, isBold);
		}
	};
}
