#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x1B19B8F0)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x1B19C150)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x1B19BA50)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x1B19B010)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x1B19AF30)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x1B19AF00)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x1B19B900)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x1B19B450)
#define TMPRO_SHADERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B19AF60)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 41013;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58300);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58308);
		}
		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58310);
		}
		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58318);
		}
		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58320);
		}
		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58328);
		}
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58330);
		}
		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58338);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58340);
		}
		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58348);
		}
		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58350);
		}
		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x58358);
		}
		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11710);
		}
		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11714);
		}
		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11718);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1171C);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11720);
		}
		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11724);
		}
		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11728);
		}
		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1172C);
		}
		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11730);
		}
		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11734);
		}
		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11738);
		}
		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1173C);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11740);
		}
		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11744);
		}
		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11748);
		}
		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1174C);
		}
		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11750);
		}
		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11754);
		}
		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11758);
		}
		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1175C);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11760);
		}
		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11764);
		}
		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11768);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1176C);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11770);
		}
		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11774);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11778);
		}
		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1177C);
		}
		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11780);
		}
		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11784);
		}
		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11788);
		}
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1178C);
		}
		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11790);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11794);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x11798);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x1179C);
		}
		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117A0);
		}
		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117A4);
		}
		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117A8);
		}
		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117AC);
		}
		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117B0);
		}
		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117B4);
		}
		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117B8);
		}
		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117BC);
		}
		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117C0);
		}
		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117C4);
		}
		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117C8);
		}
		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117CC);
		}
		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117D0);
		}
		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117D4);
		}
		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117D8);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117DC);
		}
		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117E0);
		}
		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x117E4);
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
