#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF11450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapHDRManager_TypeDefinitionIndex = 27026;

	class NapHDRManager : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_HueShiftLerpThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A40);
		}
		static ::System::Single* StaticGet_HDRSplitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A44);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A48);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A4C);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A50);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A54);
		}
		static ::System::Boolean* StaticGet_HDRPipelineOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A58);
		}
		static ::System::Boolean* StaticGet_HDRSplitLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A59);
		}
		static ::System::Single* StaticGet_HueShiftLerpRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6A5C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET))();
		}
	};
}
