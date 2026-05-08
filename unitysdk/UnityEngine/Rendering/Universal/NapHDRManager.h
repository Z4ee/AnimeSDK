#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190CEB30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapHDRManager_TypeDefinitionIndex = 29996;

	class NapHDRManager : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_SceneMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}
		static ::System::Single* StaticGet_HDRSplitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D24);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D28);
		}
		static ::System::Single* StaticGet_HueShiftLerpRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D2C);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D30);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D34);
		}
		static ::System::Boolean* StaticGet_HDRSplitLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D38);
		}
		static ::System::Boolean* StaticGet_HDRPipelineOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D39);
		}
		static ::System::Single* StaticGet_HueShiftLerpThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6D3C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET))();
		}
	};
}
