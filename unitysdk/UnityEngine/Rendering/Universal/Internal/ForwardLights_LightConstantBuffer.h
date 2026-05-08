#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ForwardLights_LightConstantBuffer_TypeDefinitionIndex = 30435;

	class ForwardLights_LightConstantBuffer : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7440);
		}
		static ::System::Int32* StaticGet__MainLightShadowParamsNew()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7444);
		}
		static ::System::Int32* StaticGet__MainLightSpecularPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7448);
		}
		static ::System::Int32* StaticGet__MainLightSpecularColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x744C);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::Int32* StaticGet__MainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7454);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7458);
		}
		static ::System::Int32* StaticGet__AvatarMainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x745C);
		}
		static ::System::Int32* StaticGet__AvatarMainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7460);
		}
		static ::System::Int32* StaticGet__CascadeBlendIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x7464);
		}
	};
}
