#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HumanPose.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_HUMANPOSEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E646F00)
#define UNITYENGINE_HUMANPOSEHANDLER_GETHUMANPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E6472B0)
#define UNITYENGINE_HUMANPOSEHANDLER_GETHUMANPOSE_OFFSET UNITYSDK_OFFSET(0x1E646EF0)
#define UNITYENGINE_HUMANPOSEHANDLER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E646ED0)
#define UNITYENGINE_HUMANPOSEHANDLER_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E646EE0)
#define UNITYENGINE_HUMANPOSEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E646FB0)

namespace UnityEngine
{
	inline static constexpr unsigned int HumanPoseHandler_TypeDefinitionIndex = 6643;

	class HumanPoseHandler : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER__CTOR_OFFSET))(this, avatar, root);
		}

		static ::System::IntPtr Internal_Create(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Avatar*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER_INTERNAL_CREATE_OFFSET))(avatar, root);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		::System::Void GetHumanPose(::UnityEngine::Vector3& bodyPosition, ::UnityEngine::Quaternion& bodyRotation, ::Il2CppArray<::System::Single>* muscles)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER_GETHUMANPOSE_OFFSET))(this, bodyPosition, bodyRotation, muscles);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void GetHumanPose_1(::UnityEngine::HumanPose& humanPose)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HumanPose&))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSEHANDLER_GETHUMANPOSE_1_OFFSET))(this, humanPose);
		}
	};
}
