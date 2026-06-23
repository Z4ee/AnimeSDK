#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C450490)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C450480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex = 27229;

	class TextureSheetRenderer_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__FxOutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7060);
		}
		static ::System::Int32* StaticGet__FxDesaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7064);
		}
		static ::System::Int32* StaticGet__FxBackLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7068);
		}
		static ::System::Int32* StaticGet__FxBackLightRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x706C);
		}
		static ::System::Int32* StaticGet__FxOverrideTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7070);
		}
		static ::System::Int32* StaticGet__LocalVectorArrayParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7074);
		}
		static ::System::Int32* StaticGet__FxBackLightTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7078);
		}
		static ::System::Int32* StaticGet__ImageParamas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x707C);
		}
		static ::System::Int32* StaticGet__FxOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7080);
		}
		static ::System::Int32* StaticGet__FxOverrideTexColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7084);
		}
		static ::System::Int32* StaticGet__FxOverrideTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7088);
		}
		static ::System::Int32* StaticGet__FxOverrideTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x708C);
		}
		static ::System::Int32* StaticGet__TextureSheetPrams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7090);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7094);
		}
		static ::System::Int32* StaticGet__FxBackLightTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7098);
		}
		static ::System::Int32* StaticGet__FxBackLightTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x709C);
		}
		static ::System::Int32* StaticGet__FxOutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x70A0);
		}
		static ::System::Int32* StaticGet__UseDesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x70A4);
		}
		static ::System::Int32* StaticGet__DesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x70A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
