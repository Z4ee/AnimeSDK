#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C455F20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapHDRManager_TypeDefinitionIndex = 27925;

	class NapHDRManager : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_AvatarMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69C0);
		}
		static ::System::Single* StaticGet_HueShiftLerpRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69C4);
		}
		static ::System::Single* StaticGet_HueShiftLerpThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69C8);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69CC);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69D0);
		}
		static ::System::Single* StaticGet_HDRSplitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69D4);
		}
		static ::System::Boolean* StaticGet_HDRPipelineOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69D8);
		}
		static ::System::Boolean* StaticGet_HDRSplitLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69D9);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x69DC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET))();
		}
	};
}
