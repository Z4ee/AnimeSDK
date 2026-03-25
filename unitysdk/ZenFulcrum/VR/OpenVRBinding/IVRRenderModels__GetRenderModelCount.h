#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2B50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2B80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD28A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD2880)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetRenderModelCount_TypeDefinitionIndex = 30191;

	class IVRRenderModels__GetRenderModelCount : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELCOUNT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
