#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B526010)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5260C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B525FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525F70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetOutputDevice_TypeDefinitionIndex = 35960;

	class IVRSystem__GetOutputDevice : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt64& a1, ::ZenFulcrum::VR::OpenVRBinding::ETextureType a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64& a1, ::ZenFulcrum::VR::OpenVRBinding::ETextureType a2, ::System::IntPtr a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::UInt64& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETOUTPUTDEVICE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
