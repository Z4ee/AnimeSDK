#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B66E40)
#define UNITYENGINE_UI_SHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B66E30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 5726;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SmoothMaskTextureST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39D4);
		}
		static ::System::Int32* StaticGet__SmoothMaskFillParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39D8);
		}
		static ::System::Int32* StaticGet__StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39DC);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39E0);
		}
		static ::System::Int32* StaticGet__SmoothMaskFillParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39E4);
		}
		static ::System::Int32* StaticGet__SmoothMaskDiv1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39E8);
		}
		static ::System::Int32* StaticGet__SmoothMaskType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39EC);
		}
		static ::System::Int32* StaticGet__StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39F0);
		}
		static ::System::Int32* StaticGet__StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39F4);
		}
		static ::System::Int32* StaticGet__UseUIAlphaClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39F8);
		}
		static ::System::Int32* StaticGet__StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x39FC);
		}
		static ::System::Int32* StaticGet__SmoothMaskSoftRanges()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A00);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexSlice0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A04);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A08);
		}
		static ::System::Int32* StaticGet__Stencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A0C);
		}
		static ::System::Int32* StaticGet__SmoothMaskAlphaST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A10);
		}
		static ::System::Int32* StaticGet__ColorMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A14);
		}
		static ::System::Int32* StaticGet__SmoothMaskDiv0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A18);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x3A1C);
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
