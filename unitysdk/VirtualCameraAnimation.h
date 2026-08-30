#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define VIRTUALCAMERAANIMATION_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE9A1D70)
#define VIRTUALCAMERAANIMATION_METHOD_5_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xE9A1E40)
#define VIRTUALCAMERAANIMATION_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xE9A1FB0)
#define VIRTUALCAMERAANIMATION_METHOD_5_CB47EF435F4257BC_OFFSET UNITYSDK_OFFSET(0xE9A1C60)
#define VIRTUALCAMERAANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xE9A1C10)
#define VIRTUALCAMERAANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xE9A2040)

inline static constexpr unsigned int VirtualCameraAnimation_TypeDefinitionIndex = 48057;

class VirtualCameraAnimation : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single DKKOEMPGCDI; // 0x0
	::UnityEngine::AnimationClip* AnimationClip; // 0x18
	::System::Single SampleTime; // 0x20
	::UnityEngine::Rendering::CRPVirtualCamera* VirtualCamera; // 0x28
	::UnityEngine::Camera* SampleCamera; // 0x30
	::System::String* TargetMaskRenderer; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_CB47EF435F4257BC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_METHOD_5_CB47EF435F4257BC_OFFSET))(this, a1);
	}

	::System::Void Method_5_28F3459B67DFCFFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_METHOD_5_28F3459B67DFCFFF_OFFSET))(this, a1);
	}

	::System::Void Method_5_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_METHOD_5_1290EA767C459179_OFFSET))(this);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}
};
