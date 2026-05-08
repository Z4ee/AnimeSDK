#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30C380)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30C370)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex = 29900;

	class TextureSheetRenderer_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__FxOverrideTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7310);
		}
		static ::System::Int32* StaticGet__FxBackLightTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7314);
		}
		static ::System::Int32* StaticGet__LocalVectorArrayParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7318);
		}
		static ::System::Int32* StaticGet__FxBackLightTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x731C);
		}
		static ::System::Int32* StaticGet__FxBackLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7320);
		}
		static ::System::Int32* StaticGet__TextureSheetPrams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7324);
		}
		static ::System::Int32* StaticGet__FxBackLightTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7328);
		}
		static ::System::Int32* StaticGet__FxOverrideTexColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x732C);
		}
		static ::System::Int32* StaticGet__FxBackLightRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7330);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7334);
		}
		static ::System::Int32* StaticGet__FxOverrideTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7338);
		}
		static ::System::Int32* StaticGet__ImageParamas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x733C);
		}
		static ::System::Int32* StaticGet__FxDesaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::Int32* StaticGet__FxOutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7344);
		}
		static ::System::Int32* StaticGet__FxOverrideTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7348);
		}
		static ::System::Int32* StaticGet__UseDesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x734C);
		}
		static ::System::Int32* StaticGet__FxOutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7350);
		}
		static ::System::Int32* StaticGet__DesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7354);
		}
		static ::System::Int32* StaticGet__FxOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7358);
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
