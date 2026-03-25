#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB660)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB6D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA0E80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB640)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__CommitWorkingCopy_TypeDefinitionIndex = 30036;

	class IVRChaperoneSetup__CommitWorkingCopy : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_INVOKE_OFFSET))(this, configFile);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_BEGININVOKE_OFFSET))(this, configFile, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
