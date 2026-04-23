#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x1A303600)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x1A303490)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A3033D0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x1A303890)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A303430)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A303330)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureBridge_TypeDefinitionIndex = 33507;

	class CameraCaptureBridge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>** StaticGet_actionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x67250);
		}
		static ::System::Boolean* StaticGet__enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x112D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET))(value);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* GetCaptureActions(::UnityEngine::Camera* camera)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET))(camera);
		}

		static ::System::Void AddCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET))(camera, action);
		}

		static ::System::Void RemoveCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET))(camera, action);
		}
	};
}
