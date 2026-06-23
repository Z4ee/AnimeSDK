#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ForwardLights_LightConstantBuffer_TypeDefinitionIndex = 26735;

	class ForwardLights_LightConstantBuffer : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MainLightSpecularColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71B0);
		}
		static ::System::Int32* StaticGet__MainLightShadowParamsNew()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71B4);
		}
		static ::System::Int32* StaticGet__MainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71B8);
		}
		static ::System::Int32* StaticGet__MainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71BC);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71C0);
		}
		static ::System::Int32* StaticGet__MainLightSpecularPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71C4);
		}
		static ::System::Int32* StaticGet__AvatarMainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71C8);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71CC);
		}
		static ::System::Int32* StaticGet__CascadeBlendIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71D0);
		}
		static ::System::Int32* StaticGet__AvatarMainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x71D4);
		}
	};
}
