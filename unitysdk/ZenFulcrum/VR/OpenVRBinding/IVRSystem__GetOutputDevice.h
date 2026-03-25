#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE36F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE37A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE3350)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE3330)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetOutputDevice_TypeDefinitionIndex = 29940;

	class IVRSystem__GetOutputDevice : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt64& pnDevice, ::ZenFulcrum::VR::OpenVRBinding::ETextureType textureType, ::System::IntPtr pInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_INVOKE_OFFSET))(this, pnDevice, textureType, pInstance);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64& pnDevice, ::ZenFulcrum::VR::OpenVRBinding::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_BEGININVOKE_OFFSET))(this, pnDevice, textureType, pInstance, callback, object);
		}

		::System::Void EndInvoke(::System::UInt64& pnDevice, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_ENDINVOKE_OFFSET))(this, pnDevice, result);
		}
	};
}
