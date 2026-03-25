#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CABF00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CABF70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA2E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABEE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__ReloadFromDisk_TypeDefinitionIndex = 30048;

	class IVRChaperoneSetup__ReloadFromDisk : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_INVOKE_OFFSET))(this, configFile);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_BEGININVOKE_OFFSET))(this, configFile, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__RELOADFROMDISK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
