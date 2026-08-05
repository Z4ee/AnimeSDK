#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class NapCaptureAction; }
namespace UnityEngine::Rendering::Universal { class NapCaptureData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_GET_CAPTREUACTIONS_OFFSET UNITYSDK_OFFSET(0x1CEFDF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_ISCAMERANEEDCAPTURE_OFFSET UNITYSDK_OFFSET(0x1CEFE390)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1CEFE2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CEFDFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CEFE140)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFE6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFE6A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCaptureBridge_TypeDefinitionIndex = 27367;

	class NapCaptureBridge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::NapCaptureData*>** StaticGet__dictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::NapCaptureData*>**)Il2CppClass::FromTypeDefinitionIndex(NapCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x22D30);
		}
		static ::System::Int32* StaticGet_increasingID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x61D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::NapCaptureData*>* get_captreuActions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::NapCaptureData*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_GET_CAPTREUACTIONS_OFFSET))();
		}

		static ::System::Int32 Register(::UnityEngine::Rendering::Universal::NapCaptureAction* action, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::NapCaptureAction*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_REGISTER_OFFSET))(action, camera);
		}

		static ::System::Void Unregister(::System::Int32 id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_UNREGISTER_OFFSET))(id);
		}

		static ::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_ISEMPTY_OFFSET))();
		}

		static ::System::Boolean IsCameraNeedCapture(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREBRIDGE_ISCAMERANEEDCAPTURE_OFFSET))(camera);
		}
	};
}
