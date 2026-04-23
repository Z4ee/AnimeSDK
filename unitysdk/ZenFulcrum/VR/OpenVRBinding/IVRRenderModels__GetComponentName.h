#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70CD60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70CDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70C710)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentName_TypeDefinitionIndex = 35913;

	class IVRRenderModels__GetComponentName : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchRenderModelName, ::System::UInt32 unComponentIndex, ::System::Text::StringBuilder* pchComponentName, ::System::UInt32 unComponentNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_INVOKE_OFFSET))(this, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::UInt32 unComponentIndex, ::System::Text::StringBuilder* pchComponentName, ::System::UInt32 unComponentNameLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_BEGININVOKE_OFFSET))(this, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTNAME_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
