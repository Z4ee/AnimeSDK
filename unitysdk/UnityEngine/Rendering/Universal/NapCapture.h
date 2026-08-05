#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCapture_CaptureData.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1D6ED1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_GETCAPTURERT_OFFSET UNITYSDK_OFFSET(0x1D6ED780)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x1D6ED570)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED820)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapture_TypeDefinitionIndex = 27314;

	class NapCapture : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapCapture** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapCapture**)Il2CppClass::FromTypeDefinitionIndex(NapCapture_TypeDefinitionIndex)->GetStaticField(0x237A0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::NapCapture_CaptureData>* captures; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE__CCTOR_OFFSET))();
		}

		::System::Void Capture(::UnityEngine::Camera* camera, ::System::Int32 propertyID, ::System::Int32 downSample, ::System::Single blurRadius, ::System::Boolean srgb, ::System::Action* finishedAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_CAPTURE_OFFSET))(this, camera, propertyID, downSample, blurRadius, srgb, finishedAction);
		}

		::System::Void ReleaseCapture(::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_RELEASECAPTURE_OFFSET))(this, propertyID);
		}

		::UnityEngine::RenderTexture* GetCaptureRT(::System::Int32 propertyID)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE_GETCAPTURERT_OFFSET))(this, propertyID);
		}
	};
}
