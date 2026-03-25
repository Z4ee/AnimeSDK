#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CABFA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CABFD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA11B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABF80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__RevertWorkingCopy_TypeDefinitionIndex = 30037;

	class IVRChaperoneSetup__RevertWorkingCopy : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__REVERTWORKINGCOPY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
