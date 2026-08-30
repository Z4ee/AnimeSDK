#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_ARERUNTIMESHADERREFSREADY_OFFSET UNITYSDK_OFFSET(0x18B26D70)
#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x18B278A0)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x18B28100)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x18B27A00)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x18B26FC0)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x18B26D40)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x18B26D10)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x18B278B0)
#define TMPRO_SHADERUTILITIES_SETRUNTIMESHADERREFS_OFFSET UNITYSDK_OFFSET(0x18B26E00)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x18B27400)
#define TMPRO_SHADERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B26F10)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 43439;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2080);
		}
		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2088);
		}
		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2090);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x2098);
		}
		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20A0);
		}
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20A8);
		}
		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20B0);
		}
		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20B8);
		}
		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20C0);
		}
		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20C8);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20D0);
		}
		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x20D8);
		}
		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB24);
		}
		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB2C);
		}
		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB34);
		}
		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB38);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB3C);
		}
		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB40);
		}
		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB44);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB48);
		}
		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB4C);
		}
		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB54);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB58);
		}
		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB5C);
		}
		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB60);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB64);
		}
		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB68);
		}
		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB6C);
		}
		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB70);
		}
		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB74);
		}
		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB78);
		}
		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB7C);
		}
		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB80);
		}
		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB84);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB88);
		}
		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB8C);
		}
		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB90);
		}
		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB94);
		}
		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB98);
		}
		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xB9C);
		}
		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBA0);
		}
		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBA4);
		}
		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBA8);
		}
		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBAC);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBB0);
		}
		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBB4);
		}
		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBB8);
		}
		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBBC);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBC0);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBC4);
		}
		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBC8);
		}
		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBCC);
		}
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBD0);
		}
		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBD4);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBD8);
		}
		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBDC);
		}
		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBE0);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBE4);
		}
		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBE8);
		}
		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBEC);
		}
		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBF0);
		}
		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0xBF4);
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

		static ::System::Boolean AreRuntimeShaderRefsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ARERUNTIMESHADERREFSREADY_OFFSET))();
		}

		static ::System::Void SetRuntimeShaderRefs(::UnityEngine::Shader* a1, ::UnityEngine::Shader* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_SETRUNTIMESHADERREFS_OFFSET))(a1, a2);
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
