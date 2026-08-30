#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEED0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEF40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F7670)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FEE60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__CommitWorkingCopy_TypeDefinitionIndex = 37697;

	class IVRChaperoneSetup__CommitWorkingCopy : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__COMMITWORKINGCOPY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
