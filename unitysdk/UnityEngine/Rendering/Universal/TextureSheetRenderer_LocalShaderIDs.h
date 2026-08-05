#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6086D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6086C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex = 27355;

	class TextureSheetRenderer_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__FxOutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		static ::System::Int32* StaticGet__ImageParamas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7004);
		}
		static ::System::Int32* StaticGet__FxOverrideTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7008);
		}
		static ::System::Int32* StaticGet__TextureSheetPrams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x700C);
		}
		static ::System::Int32* StaticGet__FxOverrideTexColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Int32* StaticGet__FxOutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7014);
		}
		static ::System::Int32* StaticGet__FxOverrideTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7018);
		}
		static ::System::Int32* StaticGet__FxBackLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x701C);
		}
		static ::System::Int32* StaticGet__FxOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7020);
		}
		static ::System::Int32* StaticGet__UseDesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7024);
		}
		static ::System::Int32* StaticGet__LocalVectorArrayParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7028);
		}
		static ::System::Int32* StaticGet__FxDesaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x702C);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::System::Int32* StaticGet__FxBackLightRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7034);
		}
		static ::System::Int32* StaticGet__FxBackLightTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Int32* StaticGet__FxBackLightTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x703C);
		}
		static ::System::Int32* StaticGet__FxBackLightTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7040);
		}
		static ::System::Int32* StaticGet__DesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7044);
		}
		static ::System::Int32* StaticGet__FxOverrideTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7048);
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
