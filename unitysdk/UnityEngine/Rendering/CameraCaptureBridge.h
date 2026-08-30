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

#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x1CD04380)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x1CD04240)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CD04180)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x1CD04600)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CD041E0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD040E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureBridge_TypeDefinitionIndex = 34927;

	class CameraCaptureBridge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>** StaticGet_actionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x60100);
		}
		static ::System::Boolean* StaticGet__enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x13B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* GetCaptureActions(::UnityEngine::Camera* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET))(a1);
		}

		static ::System::Void AddCaptureAction(::UnityEngine::Camera* a1, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveCaptureAction(::UnityEngine::Camera* a1, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET))(a1, a2);
		}
	};
}
