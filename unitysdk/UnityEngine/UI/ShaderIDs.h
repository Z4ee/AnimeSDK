#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3EE1B0)
#define UNITYENGINE_UI_SHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3EE1A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 6015;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SmoothMaskTextureST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2C0);
		}
		static ::System::Int32* StaticGet__SmoothMaskDiv0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2C4);
		}
		static ::System::Int32* StaticGet__StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2C8);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2CC);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2D0);
		}
		static ::System::Int32* StaticGet__UseUIAlphaClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2D4);
		}
		static ::System::Int32* StaticGet__SmoothMaskType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2D8);
		}
		static ::System::Int32* StaticGet__SmoothMaskFillParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2DC);
		}
		static ::System::Int32* StaticGet__StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2E0);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2E4);
		}
		static ::System::Int32* StaticGet__SmoothMaskFillParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2E8);
		}
		static ::System::Int32* StaticGet__ColorMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2EC);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2F0);
		}
		static ::System::Int32* StaticGet__SmoothMaskAlphaST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2F4);
		}
		static ::System::Int32* StaticGet__StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2F8);
		}
		static ::System::Int32* StaticGet__SmoothMaskSoftRanges()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD2FC);
		}
		static ::System::Int32* StaticGet__StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD300);
		}
		static ::System::Int32* StaticGet__SmoothMaskDiv1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD304);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD308);
		}
		static ::System::Int32* StaticGet__Stencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD30C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
