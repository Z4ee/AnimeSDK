#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x17194AF0)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x17195350)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x17194C50)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x17194210)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x17194130)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x17194100)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x17194B00)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x17194650)
#define TMPRO_SHADERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x17194160)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 41828;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56500);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56508);
		}
		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56510);
		}
		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56518);
		}
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56520);
		}
		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56528);
		}
		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56530);
		}
		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56538);
		}
		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56540);
		}
		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56548);
		}
		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56550);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x56558);
		}
		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB44);
		}
		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB48);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB4C);
		}
		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB50);
		}
		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB54);
		}
		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB58);
		}
		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB5C);
		}
		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB60);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB64);
		}
		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB68);
		}
		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB6C);
		}
		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB70);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB74);
		}
		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB78);
		}
		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB7C);
		}
		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB80);
		}
		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB84);
		}
		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB88);
		}
		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB8C);
		}
		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB90);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB94);
		}
		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB98);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEB9C);
		}
		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBA0);
		}
		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBA4);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBA8);
		}
		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBAC);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBB0);
		}
		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBB4);
		}
		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBB8);
		}
		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBBC);
		}
		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBC0);
		}
		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBC4);
		}
		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBC8);
		}
		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBCC);
		}
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBD0);
		}
		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBD4);
		}
		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBD8);
		}
		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBDC);
		}
		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBE0);
		}
		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBE4);
		}
		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBE8);
		}
		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBEC);
		}
		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBF0);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBF4);
		}
		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBF8);
		}
		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEBFC);
		}
		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC00);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC04);
		}
		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC08);
		}
		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC0C);
		}
		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC10);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xEC14);
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

		static ::System::Void UpdateShaderRatios(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET))(a1);
		}

		static ::System::Boolean IsMaskingEnabled(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET))(a1);
		}

		static ::System::Single GetPadding(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetPadding_1(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET))(a1, a2, a3);
		}
	};
}
